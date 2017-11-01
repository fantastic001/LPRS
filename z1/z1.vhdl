library ieee;
use ieee.std_logic_1164.all;

entity sabirac is
  port (
    iC     : in  std_logic;
    iA0    : in  std_logic;
    iA1    : in  std_logic;
    iA2    : in  std_logic;
    iA3    : in  std_logic;
    iB0    : in  std_logic;
    iB1    : in  std_logic;
    iB2    : in  std_logic;
    iB3    : in  std_logic;
    oS0 : out std_logic;
    oS1 : out std_logic;
    oS2 : out std_logic;
    oS3 : out std_logic;
    oP : out std_logic
  );
end sabirac;

architecture rtl of sabirac is
  signal iC1 : std_logic;
  signal iC2 : std_logic;
  signal iC3 : std_logic;
begin
  iC1 <= (iA0 and iB0) or (iA0 and iC) or (iB0 and iC);
  iC2 <= (iA1 and iB1) or (iA1 and iC1) or (iB1 and iC1);
  iC3 <= (iA2 and iB2) or (iA2 and iC2) or (iB2 and iC2);
  oP <= (iA3 and iB3) or (iA3 and iC3) or (iB3 and iC3);

  oS0 <= (iA0 xor iB0) xor iC;
  oS1 <= (iA1 xor iB1) xor iC1;
  oS2 <= (iA2 xor iB2) xor iC2;
  oS3 <= (iA3 xor iB3) xor iC3;

end rtl;
