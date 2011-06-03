set terminal png
set xlabel 'Number of cores'
set ylabel 'Speedup'
set y2label 'Execution time(s)'
set y2range [0:]
set log x 2
set log y 2
set grid
set y2tics border
set output 'histogramspeedup.png'
plot 'histogramspeedup' using 1:3 with linesp linecolor rgbcolor "blue" title 'Archieved Speedup', \
	 'histogramspeedup' using 1:2 with linesp linecolor rgbcolor "red" title 'Ideal Speedup',\
	 'histogramspeedup' using 1:4 axes x1y2 with linesp linecolor rgbcolor "green" title 'Time'
