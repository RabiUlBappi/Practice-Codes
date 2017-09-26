# include <stdio.h>
# define INFINITY -99999
void MERGE (int *ARR1,int R1,int LBA,int S1,int LBB,int *AUX,int LBC){
	int NA,NB,PTR,K,UBA,UBB;
	NA=LBA;
	NB=LBB;
	PTR=LBC;
UBA=LBA+R1-1;
	UBB=LBB+S1-1;
	while (NA<=UBA&&NB<=UBB){
		if (ARR1[NA] < ARR1[NB])	{
			AUX[PTR]=ARR1[NA];
			PTR=PTR+1;
			NA=NA+1;
		}
		else {
			AUX[PTR]=ARR1[NB];
			PTR=PTR+1;
			NB=NB+1;
		}
	}
	if (NA>UBA){
		for (K=0;K<=UBB-NB;K++)
			AUX[PTR+K]=ARR1[NB+K];
	}
	else {
		for (K=0;K<=UBA-NA;K++)
			AUX[PTR+K]=ARR1[NA+K];
	}	}
void MERGEPASS(int *ARR,int L1, int* AUX,int N){
	int Q,S,R,J,LB;
	Q=(int)N/(2*L1);
	S=2*L1*Q;
	R=N-S;
	for (J=1;J<=Q;J++){
		LB=1+(2*J-2)*L1;
		MERGE(ARR,L1,LB,L1,LB+L1,AUX,LB);
	}
	if (R<=L1)
		for (J=1 ; J <= R;J++)
			AUX[S+J]=ARR[S+J];
	else 
		MERGE(ARR,L1,S+1,R,L1+S+1,AUX,S+1);
}
void MERGESORT(int *A,int *B,int N){
	int L=1;
	while (L < N){
		MERGEPASS(A,L,B,N);
		MERGEPASS(B,2*L,A,N);
		L=4*L;
	}
}

int main (){
	int N;
	scanf("%d",&N);
	int A[N+1];
	int B[N+1];
	A[0]=INFINITY;
	for (int i=1 ; i <= N; i++)
	scanf("%d",&A[i]);
	MERGESORT(A,B,N);
	printf("\nsorted data:\n");
	for (int i=1 ; i <= N; i++)
	printf("%d ",A[i]);
}
