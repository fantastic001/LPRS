library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity zadatak3 is
    Port ( iCLK : in  STD_LOGIC;
           iRESET : in  STD_LOGIC;	
           iSTART : in  STD_LOGIC;
           iSTOP : in  STD_LOGIC;
           iCONTINUE : in  STD_LOGIC;
           oSEC : out  STD_LOGIC_VECTOR (4 downto 0);
	   oMIN : out std_logic_vector (4 downto 0);
	   oHR : out std_logic_vector (2 downto 0)
	   );
end zadatak3;

architecture Behavioral of zadatak3 is
	constant cSEC : STD_LOGIC_VECTOR (24 downto 0) := "1011011100011011000000000"; -- broj klokova koji prodje posle jedne sekunde
	-- konstanta inzad je 24 miliona 
	constant cMIN : std_logic_vector (4 downto 0) := "111100";
	constant cHR : std_logic_vector (4 downto 0) := "111100"; 
	
	signal sSEC : STD_LOGIC_VECTOR (4 downto 0); -- registar koji čuva broj sekundi
	signal sMIN : std_logic_vector(4 downto 0);
	signal sHR : std_logic_vector(2 downto 0);
	signal sRUN : STD_LOGIC; -- stanje koje odredjuje da li je brojanje ukljuceno
	signal sRUN_old : STD_LOGIC; -- cuva staro stanje RUN-a tj posle svakog takta pamti stanje za RUN
	signal sCOUNT : STD_LOGIC_VECTOR (24 downto 0); -- broji taktove 

begin
		
	process (sRUN, sRUN_old, iSTART, iCONTINUE, iSTOP, iRESET) begin
		if (iRESET = '0') then -- ako je reset pritisnut, prestajemo da brojimo
			sRUN <= '0';
		elsif (iSTART = '0') then -- ako je start pritisnut, pocinjemo da brojimo 
			sRUN <= '1';
		elsif (iSTOP = '0') then -- ako je stop pritisnut, prestajemo da brojimo i ne diramo trenutno stanje sSEC i sCNT da bismo kasnije mogli da nastavimo 
			sRUN <= '0';
		elsif (iCONTINUE = '0') then -- nastavljamo da brojimo 
			sRUN <= '1';
		else
			sRUN <= sRUN_old; -- u svakom drugom slucaju uzimamo vec postojece (staro) stanje za RUN 
		end if;
	end process;
	
	process (iCLK, iRESET) begin
		if (iRESET = '0') then -- ako je reset pritisnut, vrati sve vrednosti na nulu 
			sSEC <= "00000";
			sMIN <= "00000";
			sHR <= "000"; 
			sCOUNT <= "0000000000000000000000000";
		elsif (rising_edge(iCLK)) then
			if (sRUN = '1') then -- ako je stoperica pokreuta, povecavamo sCNT za 1 i sSEC ako je sCNT jednako broju taktova tokom jedne sekunde
				if (sCOUNT = cSEC) then
					sCOUNT <= "0000000000000000000000000";
					sSEC <= sSEC + "00001";
				elsif (sSEC = cMIN) then 
					sMIN <= sMIN + "00001";
					sSEC <= "00000";
					sCOUNT <= "0000000000000000000000000";
				elsif (sMIN = cHR) then 
					sHR <= sHR + "001";
					sMIN <= "00000";
					sSEC <= "00000";
					sCOUNT <= "0000000000000000000000000";
				elsif (iSTART = '0') then -- ako smo pritisnuli start, vracamo sve na 0
					sSEC <= "00000";
					sMIN <= "00000";
					sHR <= "000";
					sCOUNT <= "0000000000000000000000000";
				else
					sCOUNT <= sCOUNT + "0000000000000000000000001";
				end if;
			end if;
			
			sRUN_old <= sRUN; -- kada smo sve zavrsili, stavljamo run na run_old da ga sacuva
			
		end if;
	end process;
	
	oSEC <= sSEC;
	oMIN <= sMIN; 
	oHR <= sHR;
	
end Behavioral;
