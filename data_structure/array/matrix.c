#define MaxSize 1000
typedef int DataType;
typedef struct{
	int i,j; // rowno , colno	
	DataType v; // value	
}TriTupleNode;
typedef struct{
	TriTupleNode data[MaxSize];
	int m,n,t; //rownums ,colnums
}TSMatrix; 
