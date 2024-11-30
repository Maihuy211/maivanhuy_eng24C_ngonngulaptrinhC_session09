# include <stdio.h>
int main (){
	int n, a[100];
	printf("nhap n: ");
	scanf("%d",&n);
    printf("nhap cac phan tu cho mang: \n");
    int i;
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	int pos,val;
	printf("nhap gia tri moi vao mang: ");
	scanf("%d",&val);
	printf("nhap vi tri muon sua vao mang: ");
	scanf("%d",&pos);
	if(pos<0||pos>n){
		printf("vi tri khong hop le\n");
	}else{
	a[pos]=val;
    printf("mang vua thay doi la: \n");
	for(i=0;i<n;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	}
	return 0;
}
