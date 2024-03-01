import java.util.*;


/* Consider a wrapper class for a numeric basic type. Check the support for the following: conversion
from i) basic type to object ii) object to basic type iii) basic type to String iv) String (holding numeric
data) to numeric object v) object to String. */

class CustomWrapperClass{
	public  static void main(String[] args){
		System.out.println("Basic Type to Object type");
		int a1 = 46;
		Integer a2 = new Integer(34);
		System.out.println("Before the conversion : a1(int) = "+a1+" a2(Integer) = "+a2);
		a2 = Integer.valueOf(a1);
		System.out.println("After the conversion : a1(int) = "+a1+" a2(Integer) = "+a2);
		System.out.println("Object Type to Basic type");
		 a1= 78;
		a2 = new Integer(56);
		System.out.println("Before the conversion : a1(int) = "+a1+" a2(Integer) = "+a2);
		a1= a2.intValue();
		System.out.println("After the conversion : a1(int) = "+a1+" a2(Integer) = "+a2);
		System.out.println("Basic Type to String type");
		String s1 = new String("Hello");
		a1=80;
		System.out.println("Before the conversion : a1(int) = "+a1+" s1(String) = "+s1);
		s1=String.valueOf(a1);
		System.out.println("After the conversion : a1(int) = "+a1+" s1(String) = "+s1);
		System.out.println("String to numeric Object");
		System.out.println("Before the conversion : s1(string) = "+s1+" a2(Integer) = "+a2);
		a2 = Integer.valueOf(s1);
		System.out.println("After the conversion : s1(string) = "+s1+" a2(Integer) = "+a2);
		System.out.println("Object to String");
		s1= new String("Good");
		System.out.println("Before the conversion : s1(string) = "+s1+" a2(Integer) = "+a2);
		s1=Integer.toString(a2);
		System.out.println("After the conversion : s1(string) = "+s1+" a2(Integer) = "+a2);
	}
}

	
