library ieee;
use ieee.std_logic_1164.all;

entity hafidz_tb is
end hafidz_tb;

architecture testbench of hafidz_tb is
  signal a, b, c, clk, reset, x: std_logic;

  component hafidz_ent
    port (
      a, b, c   : in std_logic;
      clk, reset: in std_logic;
      x         : out std_logic
    );
  end component;

begin
  uut: hafidz_ent port map (a, b, c, clk, reset, x);

  process
  begin
    a <= '0';
    b <= '1';
    c <= '0';
    clk <= '0';
    reset <= '0';
    wait for 10 ns;

    a <= '1';
    b <= '0';
    c <= '1';
    clk <= '1';
    reset <= '0';
    wait for 10 ns;

    wait;
  end process;
end testbench;