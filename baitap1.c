# include <stdio.h>
int main (){
	int n, a[100];
	printf("nhap kich thuoc cua mang: ");
	scanf("%d",&n);
    printf("nhap cac phan tu cho mang: \n");
    int i;
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int pos,val;
	printf("nhap gia tri muon them vao mang: ");
	scanf("%d",&val);
	printf("nhap vi tri muon them vao mang: ");
	scanf("%d",&pos);
	if(pos<0||pos>n){
		printf("vi tri khong hop le\n");
	}else{
		for(i=n;i>=pos;i--){
	a[i]=a[i-1];
	}
	a[pos]=val;
	n++;

	printf("mang vua thay doi la: \n");
	for(i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	}
	return 0;
}
