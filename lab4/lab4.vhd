
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
           iRST : in  STD_LOGIC;	
	   iEN : in std_logic; 
           oY : out std_logic_vector (7 downto 0); 
end zadatak3;

architecture Behavioral of zadatak3 is
	signal sCNT : std_logic_vector (7 downto 0);
begin
		
	process (iCLK, iRST) begin 
		
		if (iRST = '1') then 
			sCNT <= "00000000";
		elsif (rising_edge(iCLK)) then 
			if (iEN = '1') then 
				sCNT <= sCNT + 1;
			end if; 
		end if; 

	end process; 

	oY <= sCNT; 
end Behavioral;
