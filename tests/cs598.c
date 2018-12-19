#define N 10
int a[N][N], b[N][N], c[N][N], d[N][N];
void foo(){
#pragma scop
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			int sum=0;
			for(int k=0; k<N; k++){
				sum += a[i][k]*b[k][j];
			}
			c[i][j] = sum;
		}
	}
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			d[i][j] += c[i][j];
		}
	}
#pragma endscop
}
/*
void foo(){
	int a = 5;
        int b = 6;
#pragma scop
S0:	a = a+b;
S1:     b = a-b;
S2:     a = a-b;
#pragma endscop
}


*/
