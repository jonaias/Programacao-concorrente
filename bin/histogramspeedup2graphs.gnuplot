set terminal png
set xlabel 'Number of threads'
set ylabel 'Speedup'
set log x 2
set log y 2
set grid
set output 'histogramspeedup2graphs.png'
set multiplot layout 2,1
plot 'histogramspeedup' using 1:3 with linesp linecolor rgbcolor "blue" title 'Achieved Speedup', 'histogramspeedup' using 1:2 with linesp linecolor rgbcolor "red" title 'Ideal Speedup'
set ylabel 'Execution time(s)'
plot 'histogramspeedup' using 1:4 with linesp linecolor rgbcolor "green" title 'Time'
unset multiplot
