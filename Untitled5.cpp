int Emty( stack *s){
	if(stack -> top == -1)
		return 1;
		return 0; 
} 
int Full(stack *a){
	if(stack -> top == MAX - 1)
		return 1;
		 
	return 0;
}
void PUSH(stack *s ,int x){
	if(!Full(s)) 
		s -> top = (s->top) + 1;
		node(s->top) = x;
		
	else
		//thong bao tran  
}

