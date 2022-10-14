public class Maxsubarraysum {

    long maxSubarraySum(int arr[], int n){

        long max=0;
        long curr=0;
        long maxelement=arr[0];
        for(int i=0 ; i<n ; i++){
            curr=curr+arr[i];
            if(curr>max){
                max=curr;
            }
            if(curr<0){
                curr=0;
            }
        }
        if(max==0){
            long temp=arr[0];
            for(int i =1 ;i<n ; i++){
                if(arr[i]>arr[i-1]){
                    temp=maxelement;
                    maxelement=arr[i];
                    maxelement=Math.max(temp,maxelement);
                }
            }
            max=maxelement;
        }
        return max;
    }
}
