public class Pattern {

    public static void main(String[] args) {

        int n = 5;
        if(n<3 || n%2==0) {
            System.out.println("Even Number or Number less than 3 not accepted");
            return;
        }
        for(int i = 0,k=1; i<n/2+1; i++,k+=2){
            for(int j=0; j<n; j++){
                System.out.print(" ");
            }
            for(int j=0; j<n/2-i; j++){
                System.out.print(" ");
            }
            for(int j=0; j<k; j++){
                System.out.print("*");
            }
            System.out.println();

        }

        for(int i=0; i<n-2; i++){
            for(int j=0; j<n; j++){
                System.out.print(" ");
            }
            for(int j=0; j<n; j++){
                if(j==0 || j==n-1){
                    System.out.print("@");
                }else {
                    System.out.print(" ");
                }

            }
            System.out.println();
        }

        for (int i=0,k=n; i<n/2+1; i++,k-=2){
                for (int j=0; j<i; j++){
                    System.out.print(" ");
                }
                for(int j=0; j<k; j++){
                    System.out.print("*");
                }
                for(int j=0; j<n; j++){
                    if((j==0 || j==n-1) && i==0)
                        System.out.print("@");
                    else
                        System.out.print(" ");
                }
                for (int j=0; j<i*2; j++){
                    System.out.print(" ");
                }
                for(int j=0; j<k; j++){
                    System.out.print("*");
                }
                System.out.println();

        }
    }

}