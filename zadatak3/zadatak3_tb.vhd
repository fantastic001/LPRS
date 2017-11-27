LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY zadatak3_tb IS
END zadatak3_tb;
 
ARCHITECTURE behavior OF zadatak3_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT zadatak3
    PORT(
         iCLK : IN  std_logic;
         iRESET : IN  std_logic;
         iSTART : IN  std_logic;
         iSTOP : IN  std_logic;
         iCONTINUE : IN  std_logic;
         oSEC : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal iCLK : std_logic := '0';
   signal iRESET : std_logic := '0';
   signal iSTART : std_logic := '0';
   signal iSTOP : std_logic := '0';
   signal iCONTINUE : std_logic := '0';

 	--Outputs
   signal oSEC : std_logic_vector(7 downto 0);
	
   -- Clock period definitions
   constant iCLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: zadatak3 PORT MAP (
          iCLK => iCLK,
          iRESET => iRESET,
          iSTART => iSTART,
          iSTOP => iSTOP,
          iCONTINUE => iCONTINUE,
          oSEC => oSEC
        );

   -- Clock process definitions
   iCLK_process :process
   begin
		iCLK <= '0';
		wait for iCLK_period/2;
		iCLK <= '1';
		wait for iCLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      iRESET <= '0';
		iSTART <= '1';
      iSTOP <= '1';
		iCONTINUE <= '1';
      wait for 50 ns;
		
		iRESET <= '1';
		iSTART <= '1';
      iSTOP <= '1';
		iCONTINUE <= '1';
		wait for 100 ns;
		
      iRESET <= '1';
		iSTART <= '0';
      iSTOP <= '1';
		iCONTINUE <= '1';
		wait for 50 ns;
		
		iRESET <= '1';
		iSTART <= '1';
      iSTOP <= '1';
		iCONTINUE <= '1';
		wait for 100 ns;

		iRESET <= '1';
		iSTART <= '1';
      iSTOP <= '0';
		iCONTINUE <= '1';
		wait for 50 ns;
		
		iRESET <= '1';
		iSTART <= '1';
      iSTOP <= '1';
		iCONTINUE <= '1';
		wait for 100 ns;
		
		iRESET <= '1';
		iSTART <= '1';
      iSTOP <= '1';
		iCONTINUE <= '0';
		wait for 50 ns;
		
		iRESET <= '1';
		iSTART <= '1';
      iSTOP <= '1';
		iCONTINUE <= '1';
		wait for 100 ns;
		
		iRESET <= '1';
		iSTART <= '1';
      iSTOP <= '0';
		iCONTINUE <= '1';
		wait for 50 ns;
		
		iRESET <= '1';
		iSTART <= '1';
      iSTOP <= '1';
		iCONTINUE <= '1';
		wait for 100 ns;
		
		iRESET <= '1';
		iSTART <= '0';
      iSTOP <= '1';
		iCONTINUE <= '1';
		wait for 50 ns;
		
		iRESET <= '1';
		iSTART <= '1';
      iSTOP <= '1';
		iCONTINUE <= '1';
		wait for 100 ns;
		wait;
   end process;

END;
