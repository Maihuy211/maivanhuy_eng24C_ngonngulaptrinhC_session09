# include<stdio.h>
int main(){
	int choice;
    int pos,val;
	do{
	printf("MENU\n");
	printf("1.Nhap vao mang\n");
	printf("2.Hien thi mang\n");
	printf("3.Them phan tu \n");
	printf("4.Sua phan tu\n");
	printf("5.Xoa phan tu\n");
	printf("6.Thoat\n");
	printf("\n");
	printf("nhap lua chon cua ban (1-6): ");
    scanf("%d",&choice);
    printf("\n");
	switch(choice){
	int n, a[100];
		case 1:
		   printf("nhap nhap kich thuoc cua mang: ");
		   scanf("%d",&n);
           printf("Nhap cac phan tu cho mang: \n");
           int i;
	       for(i=0;i<n;i++){
		        printf("a[%d]=",i);
		        scanf("%d",&a[i]);
	        }	
		    printf("\n");
			break;
	    case 2:
	        printf("Cac phan tu cua mang la \n");
	        for(i=0;i<n;i++){
		        printf("a[%d]=%d\n",i,a[i]);
	        } 
	        printf("\n");
	        break;
	    case 3:
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
                printf("\n");
				break;
		case 4:
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
			    printf("\n");
			    break;
		case 5:
			printf("nhap vi tri muon xoa vao mang: ");
	        scanf("%d",&pos);
	            if(pos<0||pos>n){
	                printf("vi tri khong hop le\n");
	            }else{
	        	for(i=pos;i<n-1;i++){
	                a[i]=a[i+1];
	            }
	                n--;
            printf("mang vua thay doi la: \n");
	            for(i=0;i<n;i++){
		            printf("a[%d]=%d\n",i,a[i]);
            	}
            	}
				printf("\n");
			    break;
	    case 6:
	    	    printf("  \n");
				break;
		default:
			printf("khong hop le");
	} 
    }while(choice==1||choice==2||choice==3||choice==4||choice==5);
    return 0;
    }
