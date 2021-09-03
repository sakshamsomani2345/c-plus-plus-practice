import phonenumbers
from phonenumbers import geocoder,carrier,timezone
phone_number=phonenumbers.parse("+91-9212373955")
print(geocoder.description_for_number(phone_number,'en'))
print(carrier.name_for_number(phone_number,'en'))
print(timezone.time_zones_for_number(phone_number))
#include<climits>
void findLargest(int **input, int nRows, int mCols){
        int printsum=INT_MIN;
            int indexr;
    
    int max=0;

   if(nRows==0 && mCols==0){
       int l=INT_MIN;
       cout<<"row 0"<<" "<<l;
       return; // return
   }
    else{
        for (int i = 0; i < nRows; i++)
    {
        int sum = 0;

        for (int j = 0; j < mCols; j++)
        {
            sum=sum+input[i][j];
        }
        if(sum>printsum){
        printsum=sum;
        indexr=i;}
 }
    }
     int printsum1=INT_MIN;
            int indexc;
      for (int i = 0; i < mCols; i++) // < mCols
    {
        int sum = 0;

        for (int j = 0; j < nRows; j++) // <  nRows
        {
            sum=sum+input[j][i];
        }
        if(sum>printsum1){
        printsum1=sum;
        indexc=i;}
}
    if(printsum>=printsum1){
        cout<<"row " << indexr<<" "<<printsum; // row
    }else{ 
        cout<<"column " << indexc<<" "<<printsum1; // column
        
    }

}