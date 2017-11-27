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
           inRST : in  STD_LOGIC;	
           inSTART : in  STD_LOGIC;
           inSTOP : in  STD_LOGIC;
           inCONTINUE : in  STD_LOGIC;
           oSEC : out  STD_LOGIC_VECTOR (7 downto 0));
end zadatak3;

architecture Behavioral of zadatak3 is
	constant cSEC : STD_LOGIC_VECTOR (24 downto 0) := "1011011100011011000000000"; -- broj klokova koji prodje posle jedne sekunde
	-- konstanta inzad je 24 miliona 
	
	signal sSEC : STD_LOGIC_VECTOR (7 downto 0); -- registar koji čuva broj sekundi
	signal sRUN : STD_LOGIC; -- stanje koje odredjuje da li je brojanje ukljuceno
	signal sRUN_old : STD_LOGIC; -- cuva staro stanje RUN-a tj posle svakog takta pamti stanje za RUN
	signal sCOUNT : STD_LOGIC_VECTOR (24 downto 0); -- broji taktove 

begin
		
	process (sRUN, sRUN_old, inSTART, inCONTINUE, inSTOP, inRST) begin
		if (inRST = '0') then -- ako je reset pritisnut, prestajemo da brojimo
			sRUN <= '0';
		elsif (inSTART = '0') then -- ako je start pritisnut, pocinjemo da brojimo 
			sRUN <= '1';
		elsif (inSTOP = '0') then -- ako je stop pritisnut, prestajemo da brojimo i ne diramo trenutno stanje sSEC i sCNT da bismo kasnije mogli da nastavimo 
			sRUN <= '0';
		elsif (inCONTINUE = '0') then -- nastavljamo da brojimo 
			sRUN <= '1';
		else
			sRUN <= sRUN_old; -- u svakom drugom slucaju uzimamo vec postojece (staro) stanje za RUN 
		end if;
	end process;
	
	process (iCLK, inRST) begin
		if (inRST = '0') then -- ako je reset pritisnut, vrati sve vrednosti na nulu 
			sSEC <= (others => '0');
			sCOUNT <= (others => '0');
		elsif (rising_edge(iCLK)) then
			if (sRUN = '1') then -- ako je stoperica pokreuta, povecavamo sCNT za 1 i sSEC ako je sCNT jednako broju taktova tokom jedne sekunde
				if (sCOUNT = cSEC) then
					sCOUNT <= (others => '0');
					sSEC <= sSEC + "00000001";
				elsif (inSTART = '0') then -- ako smo pritisnuli start, vracamo sve na 0
					sSEC <= "00000000";
					sCOUNT <= (others => '0');
				else
					sCOUNT <= sCOUNT + "0000000000000000000000001";
				end if;
			end if;
			
			sRUN_old <= sRUN;
			
		end if;
	end process;
	
	oSEC <= sSEC;
	
end Behavioral;
