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

entity zadatak4 is
    Port ( iCLK : in  STD_LOGIC;
           inRST : in  STD_LOGIC;
           inLEFT : in  STD_LOGIC;
           inRIGHT : in  STD_LOGIC;
           inHAZ : in  STD_LOGIC;
           oLEFT : out  STD_LOGIC_VECTOR (2 downto 0);
           oRIGHT : out  STD_LOGIC_VECTOR (2 downto 0));
end zadatak4;

architecture Behavioral of zadatak4 is
	constant cHALF_SEC : STD_LOGIC_VECTOR (23 downto 0) := "101101110001101100000000";
	--constant cHALF_SEC : STD_LOGIC_VECTOR (23 downto 0) := x"00000A";
	type tSTATE is (IDLE, L1, L2, L3, R1, R2, R3, LR3);
	signal sSTATE : tSTATE;
	signal sENABLE : STD_LOGIC;
	signal sCNT : STD_LOGIC_VECTOR (23 downto 0);
	signal sSTATE_NEXT : tSTATE;
	
begin
	process (inHAZ, inLEFT, inRIGHT) begin 
		
		if (sSTATE = IDLE) then 
			if (inHAZ = '0' or (inLEFT = '0' and inRIGHT = '0')) then
				sSTATE_NEXT <= LR3;
			elsif (inLEFT = '0') then
				sSTATE_NEXT <= L1;
			elsif (inRIGHT = '0') then
				sSTATE_NEXT <= R1;
			end if;
		end if; 

	end process;
	process (iCLK, inRST) begin
		if (inRST = '0') then
			sSTATE <= IDLE;
		elsif (rising_edge(iCLK)) then
			if (sENABLE = '1') then
				case (sSTATE) is
					when IDLE =>
						sSTATE <= sSTATE_NEXT;
					when L1 =>
						sSTATE <= L2;
					when L2 =>
						sSTATE <= L3;
						
					when R1 =>
						sSTATE <= R2;
						
					when R2 =>
						sSTATE <= R3;
						
					when others =>
						sSTATE <= IDLE;
				end case;
			end if;
		end if;
	end process;
	
	-- izlaz
	oLEFT <= "001" when sSTATE = L1 else
	         "011" when sSTATE = L2 else
				"111" when sSTATE = L3 or sSTATE = LR3 else
				"000";

	oRIGHT <= "100" when sSTATE = R1 else
	          "110" when sSTATE = R2 else
				 "111" when sSTATE = R3 or sSTATE = LR3 else
				 "000";
	
	-- CLK
	process (inRST, iCLK) begin
		if (inRST = '0') then
			sCNT <= (others => '0');
		elsif (rising_edge(iCLK)) then
			if (sCNT = cHALF_SEC) then
				sCNT <= (others => '0');
			else
				sCNT <= sCNT + "00000000000000000000001";
			end if;
		end if;
	end process;
	
	sENABLE <= '1' when sCNT = cHALF_SEC else '0';

end Behavioral;
