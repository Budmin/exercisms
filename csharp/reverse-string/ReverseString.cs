using System;

public static class ReverseString
{
    public static string Reverse(string input)
    {
        char[] output =  input.ToCharArray();
        Array.Reverse(output);
        return new String(output);
    }
}