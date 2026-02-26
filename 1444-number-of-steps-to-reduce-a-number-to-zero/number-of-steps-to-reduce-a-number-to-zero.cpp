class Solution {
public:
    int numberOfSteps(int num) {
        int c=0;
        while(num>0){
            if (num%2==0){
                c+=1;
                num=num/2;
            }
            else{
                c+=1;
                num=num-1;
            }
        }return c;
        
    }
};