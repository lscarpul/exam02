unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int n1 = a;
    unsigned int n2 = b;
    unsigned int rem;

    if (a == 0 || b == 0)
        return (0);
    
        while (b != 0)
        {
            rem = a % b;
            a = b;
            b = rem;
        }

        return ((n1 / a) * n2);
}