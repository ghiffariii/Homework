library ieee;
use ieee.std_logic_1164.all;

entity hafidz_ent is
  port (
    a, b, c   : in std_logic;
    clk, reset: in std_logic;
    x         : out std_logic
  );
end hafidz_ent;

architecture hafidz_arch of hafidz_ent is
begin

x <= (b and c) or (a and c) or (a and b);
end hafidz_arch;