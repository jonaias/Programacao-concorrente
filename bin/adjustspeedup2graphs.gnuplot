set terminal png
set xlabel 'Number of cores'
set ylabel 'Speedup'
set log x 2
set log y 2
set grid
set output 'adjustspeedup2graphs.png'
set multiplot layout 2,1
plot 'adjustspeedup' using 1:3 with linesp linecolor rgbcolor "blue" title 'Archieved Speedup', 'adjustspeedup' using 1:2 with linesp linecolor rgbcolor "red" title 'Ideal Speedup'
set ylabel 'Execution time(s)'
plot 'adjustspeedup' using 1:4 with linesp linecolor rgbcolor "green" title 'Time'
unset multiplot
