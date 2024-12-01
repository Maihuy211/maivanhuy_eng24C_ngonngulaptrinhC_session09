# include<stdio.h>
int main(){
	int choice;
	do{
	  printf("\nMENU\n");
	  printf("1.Nhap ki co va cac gia tri cua mang\n");
	  printf("2.In cac gia tri cua mang theo ma tran\n");
	  printf("3.In gia tri cac phan tu la le va tinh tong\n");
	  printf("4.In ra cac phan tu nam tren duong bien va tinh tich\n");
	  printf("5.In ra cac phan tu nam tren duong cheo chinh\n");
	  printf("6.In ra cac phan tu nam tren duong cheo phu\n");
	  printf("7.In ra dong co tong cac phan tu la lon nhat\n");
	  printf("8.Thoat\n");
	  printf(" \n");
	  printf("Nhap lua chon cua ban (1-8): ");
	  scanf("%d",&choice);
	  printf(" \n");
	switch(choice){
		int n,m,a[100][100];
		case 1:
			printf("nhap so hang: ");
			scanf("%d",&n);
			printf("nhap so cot: ");
			scanf("%d",&m);
			printf("Nhap cac gia tri \n");
			int i,j;
		    for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					printf("a[%d][%d]= ",i,j);
					scanf("%d",&a[i][j]);
				}   	
			}	
            printf(" \n");
            break;
        case 2:
			printf("cac gia tri cua mang theo ma tran la:\n");
			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					printf("%3d",a[i][j]);
				}   	
			    printf("\n");
			}	
            printf(" \n");
            break;
		int so_le,sum=0;
		case 3:
	        sum=0;
			so_le=0;
			for(i=0;i<n;i++){
			    for(j=0;j<m;j++){
				    if(a[i][j]%2!=0){
					    printf("phan tu so le la: ");
					    printf("a[%d][%d]= %d\n",i,j,a[i][j]);
			            sum=sum+a[i][j];
				        so_le=1;
				    }
			    }
			}
		    if(!so_le){
		    	printf("ko co so le");
		    }	
			printf("tong phan tu la so le la: %d\n",sum);
			printf(" \n");
			break;
		long long  mul;
		case 4:
			mul=1;
			printf("cac phan tu la duong bien co trong ma tran la: ");
	        for (j=0;j<m;j++){
                printf("%d ",a[0][j]);
                mul=mul*a[0][j];
			}
	        for (i=1;i<n-1;i++){
                printf("%d ",a[i][m-1]);
                mul=mul*a[i][m-1];
			}
            if(n>1){
                for (j=m-1;j>=0;j--){
                    printf("%d ",a[n-1][j]);
                    mul=mul*a[n-1][j];
				}
            }
	        if (m>1){
                for(i=n-2;i>0;i--){
                    printf("%d ",a[i][0]);
                    mul=mul*a[i][0];
				}
            }
            printf("\n");
			printf("tich cac phan tu nam tren duong bien la: %lld",mul);
            printf(" \n");
		    break;
		case 5:
            if(i==j){
			    printf("cac phan tu nam tren duong cheo chinh la:\n");
				for (i=0; i<n; i++){
				    printf ("a[%d][%d]=%d\n",i,i,a[i][i]); 
                }
            }else{
				printf("khong co duong cheo chinh\n");
			}           
			printf(" \n");
			break;
	    case 6:
            if(i==j){
			    printf("cac phan tu nam tren duong cheo phu la:\n");
				for (i=0; i<n; i++){
				    printf ("a[%d][%d]=%d\n",i,n-1-i,a[i][n-1-i]); 
                }
            }else{
				printf("khong co duong cheo phu\n");
			}           
			printf(" \n");
			break;
		int sum_n,max_sum,max_n=-1;
		case 7:
		    for(i=0;i<n;i++){
				sum_n=0;
				for(j=0;j<m;j++){
					sum_n=sum_n+a[i][j];
				}   	
                if(sum_n>max_sum){
                	    max_sum=sum_n;
                	    max_n=i;
				}
			}	
			printf("dong co tong gia tri phan tu lon nhat la: ");
			for(j=0;j<n;j++){
				printf("%d ",a[max_n][j]);
			}
			printf(" \n");
			break;		
		case 8:
		   	printf(" \n");
		   	break;
	    default:
		    printf(" khong hop le");	 
    }
    }while(choice==1||choice==2||choice==3||choice==4||choice==5||choice==6||choice==7);
	return 0;
	}
