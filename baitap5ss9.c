# include <stdio.h>
int main(){
	int choice;
	do{
        printf("Menu\n");
	    printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
	    printf("2.In ra cac phan tu dang quan li\n");
	    printf("3.In ra cac phan u chan va tinh tong\n");
	    printf("4.In ra gia tri nho nhat va lon nhat trong mang\n");
	    printf("5.In ra cac phan tu la so nguyen to va tinh tong\n");
	    printf("6.Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
 	    printf("7.Them mot phan tu vao vi tri chi dinh\n");
	    printf("8.Thoat\n");
	    printf("\n");
	   
	   printf("Nhap lua chon cua ban(1-8): ");
	   scanf("%d",&choice);
	   printf("\n");
    switch(choice){
		int n,a[100];
		case 1:
		    printf("Nhap so phan tu: ");
			scanf("%d",&n);
			printf("nhap gia tri cac phan tu: \n");
			int i;
			for(i=0;i<n;i++){
				printf("a[%d]= ",i);
				scanf("%d",&a[i]);
			}
            printf("\n");
            break;
        case 2:
        	printf("gia tri cac phan tu dang quan li la:\n");
			for(i=0;i<n;i++){
				printf("a[%d]=%d\n",i,a[i]);
			}
			printf("\n");
            break;
		int so_chan,sum;
		case 3:
			sum=0;
			so_chan=0;
			for(i=0;i<n;i++){
			    if(a[i]%2==0){
					printf("phan tu so chan la: ");
					printf("a[%d]=%d \n",i,a[i]);
			        sum=sum+a[i];
				    so_chan=1;
				}
			}
		    if(!so_chan){
		    	printf("ko co so chan");
		    }	
			printf("tong phan tu la so chan la: %d\n",sum);
			printf("\n");
            break;
        int max,min;
		case 4:
        	max=a[0];
        	min=a[0];
        	for(i=1;i<n;i++){
			    if(a[i]>max){
				    max=a[i];
				}
				if(a[i]<min){
				    min=a[i];
				}
			}
			printf("gia tri lon nhat la: %d\n",max);
			printf("gia tri nho nhat la: %d",min);
			printf("\n");
            break;
        case 5:
        	sum=0;
			printf("cac phan tu la so nguyen to trong mang la: \n");
        	for(i=0;i<n;i++){
				if(a[i]<10){
			        switch(a[i]){
			        	case 1:
			        	case 2:
			        	case 3:
			        	case 5:
			        	case 7:
			        		printf("a[%d]=%d\n",i,a[i]);
			        	    sum=sum+a[i];
						break;
			        }	
			    }else if(a[i]%2!=0&&a[i]%3!=0&&a[i]%5!=0&&a[i]%7!=0){
			    	printf("a[%d]=%d\n",i,a[i]);
			        sum=sum+a[i];
				}
			}
			printf("tong cac phan tu la so nguyen to trong mang la: %d",sum);
			printf("\n");
            break;
        int x,cout;
		case 6:
		    cout=0;
			printf("nhap mot so: ");
		    scanf("%d",&x);
			for(i=0;i<n;i++){
		    	if(a[i]==x){
		    	    cout=cout+1;
			    }
			}
	        printf("so phan tu giong %d la: %d",x,cout);
            printf("\n");
		    break;
		int val,pos;
		case 7:
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
	        }
		case 8:
		   	printf("\n");
		   	break;
	    default:
		    printf(" ko hop le");	   	
   }
   }while(choice==1||choice==2||choice==3||choice==4||choice==5||choice==6||choice==7);
    return 0;
	}
