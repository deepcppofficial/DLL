using System;
using System.Runtime.InteropServices;

namespace UsingDLLCSharpExample
{
    class Program
    {
        [DllImport("DLL.dll")]
        public static extern int Add(int a, int b);
        [DllImport("DLL.dll")]
        public static extern int Sub(int a, int b);
        [DllImport("DLL.dll")]
        public static extern int Mul(int a, int b);
        [DllImport("DLL.dll")]
        public static extern float Div(int a, int b);
        static void Main(string[] args)
        {
            try
            {
                int number1, number2;
                Console.Write("Enter number 1 = ");
                number1 = int.Parse(Console.ReadLine());
                Console.Write("Enter number 2 = ");
                number2 = int.Parse(Console.ReadLine());
                Console.WriteLine("Tong = {0}", Add(number1, number2));
                Console.WriteLine("Hieu = {0}", Sub(number1, number2));
                Console.WriteLine("Tich = {0}", Mul(number1, number2));
                Console.WriteLine("Thuong = {0}", Div(number1, number2));
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
            }
            Console.WriteLine("Press any to exit!");
            Console.ReadKey();

        }
    }
}
