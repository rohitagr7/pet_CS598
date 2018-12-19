void foo()
{
	int i;
	int a[10];

#pragma scop
L2:	for (i = 0; i < 10; ++i)
L3:		if (i != 5)
L4:			a[i] = i;
#pragma endscop
}
