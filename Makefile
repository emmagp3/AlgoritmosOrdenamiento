treeSort:
	cd TreeSort/ && gcc -o salida treeSort.c ../Utils/arbol.c ../Utils/archivos.c ../Utils/utils.c && ./salida

quickSort:
	cd QuickSort/ && gcc -o salida quickSort.c ../Utils/archivos.c ../Utils/utils.c && ./salida

shellSort:
	cd ShellSort/ && gcc -o salida shellSort.c ../Utils/archivos.c ../Utils/utils.c && ./salida