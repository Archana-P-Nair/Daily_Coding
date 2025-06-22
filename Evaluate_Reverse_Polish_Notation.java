class Solution {
    public int evalRPN(String[] tokens) {
        Deque<Integer> stack=new ArrayDeque<>();
        for(String i:tokens){
            if (i.length()==1 && !Character.isDigit(i.charAt(0))){
                int b=stack.pop();
                int a=stack.pop();
                switch(i){
                    case "+":
                       stack.push(a+b);
                       break;
                    case "-":
                       stack.push(a-b);
                       break;
                    case "*":
                       stack.push(a*b);
                       break;
                    case "/":
                       stack.push(a/b);
                       break;
                }            
            }
            else{
                stack.push(Integer.parseInt(i));
            }
        }
        return stack.pop();
    }
}
