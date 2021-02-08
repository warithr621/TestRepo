package USACO;

import java.util.*;
public class Bloop
{
private int[] stuff;
public Bloop(String s)
{
Scanner chop = new Scanner(s);
stuff = new int[chop.nextInt()];
chop.next();
for(int i=0; i<stuff.length;i++)
stuff[i]=chop.nextInt();
}
public boolean isBloop(int num)
{
for(int i=0;i<stuff.length;i++){
if(num>=stuff[i])
return false;
}
return true;
}
public static void main(String[] args) {
    Bloop runner = new Bloop("5 - 1 3 4 5 6");
System.out.println(runner.isBloop(3)); //line 1
System.out.println(runner.isBloop(0)); //line 2
}
}
