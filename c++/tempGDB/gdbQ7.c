void recur(int varIter)
{
	int varScale;

	varScale = varIter*5;
	printf("Onward a: varIter = %d, varScale = %d\n", varIter, varScale);
	
	if (varIter > 0) recur(varIter - 1);
	printf("Return a: varIter = %d, varScale = %d\n", varIter, varScale);
}


void main()
{
	int varMain;
	varMain = 23;
	recur(11);
	printf("main: %d\n", varMain);
	
}
