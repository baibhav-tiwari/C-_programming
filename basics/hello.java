public static void solve(int n,int[] arr,int k){
 	     //Write your code here
		  PriorityQueue<Integer> q = new PriorityQueue<>();
		  for(int i = 0; i < k; i++){
			  q.add(arr[i]);
		  }

		  for(int i = k; i < arr.length; i++){
			  if(arr[i] > q.peek()){
				  q.remove();
				  q.add(arr[i]);
			  }
		  }

		  for(int i = 0; i < k;i++){
			  System.out.print(q.peek() + " ");
			  q.remove();
		  }
     }
 