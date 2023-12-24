onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /hafidz_tb/a
add wave -noupdate /hafidz_tb/b
add wave -noupdate /hafidz_tb/c
add wave -noupdate /hafidz_tb/clk
add wave -noupdate /hafidz_tb/reset
add wave -noupdate /hafidz_tb/x
add wave -noupdate /hafidz_tb/a
add wave -noupdate /hafidz_tb/b
add wave -noupdate /hafidz_tb/c
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {0 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ps
update
WaveRestoreZoom {57 ps} {1102 ps}
view wave 
wave clipboard store
wave create -pattern random -initialvalue U -period 50ps -random_type Normal -seed 5 -starttime 0ps -endtime 1000ps sim:/hafidz_tb/a 
wave create -pattern random -initialvalue U -period 50ps -random_type Normal -seed 5 -starttime 0ps -endtime 1000ps sim:/hafidz_tb/b 
wave create -pattern random -initialvalue U -period 50ps -random_type Normal -seed 5 -starttime 0ps -endtime 1000ps sim:/hafidz_tb/c 
WaveCollapseAll -1
wave clipboard restore
