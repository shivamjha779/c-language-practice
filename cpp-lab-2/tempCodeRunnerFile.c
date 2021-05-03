b = (a%10);
    c = (a/10);
    sum = b;

    b = c%10;
    c =(c/10);
    sum = sum + b;

    b = c%10;
    c =(c/10);
    sum = sum + b;

    b = c%10;
    c =(c/10);
    sum = sum + b;

    b = c%10;
    c =(c/10);
    sum = sum + b;

    printf("%d", sum);