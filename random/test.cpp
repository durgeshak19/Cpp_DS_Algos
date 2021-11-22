
int max(){
   
   int arr[10];

   for(int i = 0;i<args.Length;i++){
       if(args[i] >= 0 && args[i] <=9){
           arr[args[i]]++;
       }
       else 
       return -1;
   }
   int max =0 ;
   for(int i=0;i<10;i++){
       if(max < arr[i]){
           max = arr[i];
       }
   }
}