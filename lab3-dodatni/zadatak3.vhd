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

entity dodatni is
    Port ( 
    		iA : in std_logic_vector (7 downto 0); 
		iB : in std_logic_vector (2 downto 0);
		iSEL : in std_logic_vector (1 downto 0);
		oY : out std_logic_vector (3 downto 0);
		oZERO : out std_logic
	 );
end dodatni;

architecture Behavioral of dodatni is

	signal iA_dec : std_logic_vector (2 downto 0);
	signal sZBIR : std_logic_vector (3 downto 0); 
	signal sZBIR_S : std_logic_vector (3 downto 0); 
	signal sDEC : std_logic_vector (7 downto 0);
	signal sO : std_logic_vector (3 downto 0);
	signal sZERO : std_logic;

begin

		
		iA_dec <= "000" when iA(0) = '1' else 
			"001" when iA(1) = '1' else
			"010" when iA(2) = '1' else 
			"011" when iA(3) = '1' else 
			"100" when iA(4) = '1' else 
			"101" when iA(5) = '1' else 
			"110" when iA(6) = '1' else 
			"111";
		sZBIR <= ('0' & iA_dec) + ('0' & iB);
		sZBIR_S <= "00" & sZBIR(3 downto 2);
		sDEC <= "00000001" when iB = "000" else 
			"00000010" when iB = "001" else 
			"00000100" when iB = "010" else 
			"00001000" when iB = "011" else 
			"00010000" when iB = "100" else 
			"00100000" when iB = "101" else 
			"01000000" when iB = "110" else 
			"10000000";
		sO <= sZBIR when iSEL = "00" else 
			sZBIR_S when iSEL = "01" else
			sDEC(7 downto 4) when iSEL = "10" else
			sDEC(3 downto 0);

		sZERO <= '1' when sO = "0000" else 
			'0';
	process (iSEL, iA, iB) begin
		oZERO <= sZERO;
		oY <= sO;

	end process;
	
	
end Behavioral;
