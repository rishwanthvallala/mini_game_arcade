#include &lt;stdio.h&gt;
#include &lt;conio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;time.h&gt;
#include &lt;windows.h&gt;
void cyanb()
{
    printf(&quot;\033[1;36m&quot;); // cyan(bold)
}
void cyan()
{
    printf(&quot;\033[0;36m&quot;); // cyan
}
void yellow()
{
    printf(&quot;\033[0;33m&quot;); // yellow
}
void white()
{
    printf(&quot;\033[0;37m&quot;); // white
}
void man_noob();
void man_easy();
void man_med();
void man_hard();
void man_god();
void man(int);
int main()
{
    int opt;
    cyanb();
    printf(&quot;Enter which game you want to play:\n&quot;);
    printf(&quot;1.HANGMAN\n2.ROCK-PAPER-SCISSORS\n3.NUMBER GUESSING\n4.TYPING
TEST\n5.TIMER\n&quot;);
    printf(&quot;6.TIC-TAC-TOE\n&quot;);
    scanf(&quot;%d&quot;, &amp;opt);
    switch (opt)
    {
    case 1:
    {
        goto hangman;
        break;
    }

    case 2:
    {
        goto rps;
        break;
    }
    case 3:
    {
        goto guess;
        break;
    }
    case 4:
    {
        goto type;
        break;
    }
    case 5:
    {
        goto timer;
        break;
    }
    case 6:
    {
        goto xoxo;
        break;
    }
    type:
    {
        FILE *fp;
    fp = fopen(&quot;input.txt&quot;, &quot;r&quot;);
    char ch, ch2;
    int count=0, wrong=0, correct=0;
    int accuracy;
    printf(&quot;WELCOME TO TYPING ACCURACY TEST !!\n&quot;);
    while((ch2 = getc(fp)) != EOF)
    {
        count++;
        printf(&quot;%c&quot;, ch2);
    }
    printf(&quot;\ncount = %d&quot;, count);
    fclose(fp);
    printf(&quot;\nStart Typing: \n&quot;);
    fp = fopen(&quot;input.txt&quot;, &quot;r&quot;);
    while (((ch = getchar()) != EOF) &amp;&amp; ((ch2 = getc(fp)) != EOF))
    {  
        if(ch == ch2)

        {  
            correct++;
            //wrong++;
        }
        if(ch == 10)
        {
            break;
        }
    }
    accuracy = (correct*100/count);
    printf(&quot;\nAccuracy = %d\n&quot;, accuracy);
    fclose(fp);
    }
    timer:
    {
        cyanb();
        printf(&quot;TIMER\n&quot;);
        yellow();
        printf(&quot;Enter time in HH MM SS format:\n&quot;);
        int h, m, s;
        scanf(&quot;%d %d %d&quot;, &amp;h, &amp;m, &amp;s);
        sleep((h * 3600) + (m * 60) + s);
        cyanb();
        printf(&quot;Timer is up for %d Hours %d Minutes %d Seconds\n&quot;, h, m, s);
        white();
        return 0;
    }
    xoxo:
    {
        char a = &#39;*&#39;, b = &#39;*&#39;, c = &#39;*&#39;, d = &#39;*&#39;, e = &#39;*&#39;, f = &#39;*&#39;, g = &#39;*&#39;, h =
&#39;*&#39;, i = &#39;*&#39;;
        int x, y, z;
        printf(&quot;enter your turn\n&quot;);
    step1:
        e = &#39;X&#39;;
        printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -   -  
\n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
        scanf(&quot;%d&quot;, &amp;x);
        switch (x)
        {
        case 1:
            a = &#39;O&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
            printf(&quot;\n my move&quot;);

        step2a:
            i = &#39;X&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
            printf(&quot;enter your turn\n&quot;);
            scanf(&quot;%d&quot;, &amp;y);
            switch (y)
            {
            case 1:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2a;
            case 2:
                b = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | x | %c |\n -  
-   -   \n %c | %c | x |\n&quot;, a, b, c, d, f, g, h);
                printf(&quot;\n my move&quot;);
                printf(&quot;\n\n %c | %c | x |\n -   -   -   \n %c | x | %c |\n -   -
  -   \n %c | %c | x |\n&quot;, a, b, d, f, g, h);
                printf(&quot;i win&quot;);
                break;
            case 3:
                c = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | x | %c |\n -  
-   -   \n %c | %c | x |\n&quot;, a, b, c, d, f, g, h);
                printf(&quot;\n my move&quot;);
                printf(&quot;\n\n %c | x | %c |\n -   -   -   \n %c | x | %c |\n -   -
  -   \n %c | %c | x |\n&quot;, a, c, d, f, g, h);
                printf(&quot;it is a draw&quot;);
                break;
            case 4:
                d = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | x | %c |\n -  
-   -   \n %c | %c | x |\n&quot;, a, b, c, d, f, g, h);
                printf(&quot;\n my move&quot;);
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %d | x | %c |\n -  
-   -   \n x | %c | x |\n&quot;, a, b, c, d, f, h);
                printf(&quot;i win&quot;);
                break;
            case 5:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2a;
            case 6:
                f = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | x | %c |\n -  
-   -   \n %c | %c | x |\n&quot;, a, b, c, d, f, g, h);

                printf(&quot;\n my move&quot;);
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | x | %c |\n -  
-   -   \n x | %c | x |\n&quot;, a, b, c, d, f, h);
                printf(&quot;i win&quot;);
                break;
            case 7:
                g = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | x | %c |\n -  
-   -   \n %c | %c | x |\n&quot;, a, b, c, d, f, g, h);
                printf(&quot;\n my move&quot;);
                d = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;it is a draw&quot;);
                break;
            case 8:
                h = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                c = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 9:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2a;
            }
            break;
        case 2:
            b = &#39;O&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | x | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, f, g, h, i);
            printf(&quot;\n my move&quot;);
        step2b:
            i = &#39;X&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
            printf(&quot;enter your turn\n&quot;);
            scanf(&quot;%d&quot;, &amp;y);
            switch (y)
            {
            case 1:
                a = &#39;O&#39;;

                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                c = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 2:
                b = &#39;O&#39;;
                printf(&quot;\nillegal move enter again\n&quot;);
                goto step2b;
            case 3:
                c = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 4:
                d = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 5:
                printf(&quot;\nillegal move enter again\n&quot;);
                goto step2b;
            case 6:
                e = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;

            case 7:
                f = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 8:
                h = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 9:
                printf(&quot;\nillegal move enter again\n&quot;);
                goto step2b;
            }
            break;
        case 3:
            c = &#39;O&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
            printf(&quot;\n my move&quot;);
        step2c:
            g = &#39;X&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
            printf(&quot;enter your turn\n&quot;);
            scanf(&quot;%d&quot;, &amp;y);
            switch (y)
            {
            case 1:
                a = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                b = &#39;X&#39;;

                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;it is a draw&quot;);
                break;
            case 2:
                b = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 3:
                printf(&quot;\nillegal move enter again\n&quot;);
                goto step2c;
            case 4:
                d = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 5:
                printf(&quot;\nillegal move enter again\n&quot;);
                goto step2c;
            case 6:
                f = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 7:
                printf(&quot;\nillegal move enter again\n&quot;);
                goto step2c;
            case 8:
                h = &#39;O&#39;;

                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 9:
                i = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                f = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;it is a draw&quot;);
                break;
            default:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2c;
            }
            break;
        case 4:
            d = &#39;O&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
            printf(&quot;\n my move&quot;);
        step2d:
            i = &#39;X&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
            printf(&quot;enter your turn\n&quot;);
            scanf(&quot;%d&quot;, &amp;y);
            switch (y)
            {
            case 1:
                a = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                g = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);

                break;
            case 2:
                b = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 3:
                c = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 4:
                printf(&quot;\nillegal move enter again\n&quot;);
                goto step2d;
            case 5:
                printf(&quot;\nillegal move enter again\n&quot;);
                goto step2d;
            case 6:
                f = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 7:
                g = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);

                printf(&quot;i win&quot;);
                break;
            case 8:
                h = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 9:
                printf(&quot;\nillegal move enter again\n&quot;);
                goto step2d;
            default:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2d;
            }
            break;
        case 5:
            printf(&quot;illegal move enter again\n&quot;);
            goto step1;
            break;
        case 6:
            f = &#39;O&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | x | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, f, g, h, i);
            printf(&quot;\n my move&quot;);
        step2f:
            a = &#39;X&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
            printf(&quot;enter your turn\n&quot;);
            scanf(&quot;%d&quot;, &amp;y);
            switch (y)
            {
            case 1:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2f;
                break;
            case 2:
                b = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);

                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 3:
                c = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 4:
                d = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 5:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2f;
                break;
            case 6:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2f;
                break;
            case 7:
                g = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 8:

                h = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 9:
                i = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                c = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            default:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2f;
            }
            break;
        case 7:
            g = &#39;O&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | x | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, f, g, h, i);
            printf(&quot;\n my move&quot;);
        step2g:
            c = &#39;X&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
            printf(&quot;enter your turn\n&quot;);
            scanf(&quot;%d&quot;, &amp;y);
            switch (y)
            {
            case 1:
                a = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                d = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);

                printf(&quot;it is a draw&quot;);
                break;
            case 2:
                b = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 3:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2g;
                break;
            case 4:
                d = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                d = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 5:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2g;
                break;
            case 6:
                d = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                a = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 7:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2g;
                break;
            case 8:

                h = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 9:
                i = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                h = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;it is a draw&quot;);
                break;
            default:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2g;
            }
            break;
        case 8:
            h = &#39;O&#39;;
            printf(&quot;\n\n %c | %c | %d |\n -   -   -   \n %c | x | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, f, g, h, i);
            printf(&quot;\n my move&quot;);
        step2h:
            a = &#39;X&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
            printf(&quot;enter your turn\n&quot;);
            scanf(&quot;%d&quot;, &amp;y);
            switch (y)
            {
            case 1:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2h;
                break;
            case 2:
                b = &#39;O&#39;;

                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;it is a draw&quot;);
                break;
            case 3:
                c = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;it is a draw&quot;);
                break;
            case 4:
                d = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;it is a draw&quot;);
                break;
            case 5:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2h;
                break;
            case 6:
                f = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;it is a draw&quot;);
                break;
            case 7:
                g = &#39;O&#39;;

                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                i = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;it is a draw&quot;);
                break;
            case 8:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2h;
                break;
            case 9:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2h;
                break;
            default:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2h;
            }
            break;
        case 9:
            i = &#39;O&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | x | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, f, g, h, i);
            printf(&quot;\n my move&quot;);
        step2i:
            a = &#39;X&#39;;
            printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -   -  
-   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
            printf(&quot;enter your turn\n&quot;);
            scanf(&quot;%d&quot;, &amp;y);
            switch (y)
            {
            case 1:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2i;
                break;
            case 2:
                b = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                g = &#39;X&#39;;

                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 3:
                c = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                f = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;it is a draw&quot;);
                break;
            case 4:
                d = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                c = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 5:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2i;
                break;
            case 6:
                f = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                c = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 7:
                f = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                g = &#39;X&#39;;

                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;it is a draw&quot;);
                break;
            case 8:
                h = &#39;O&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;\n my move&quot;);
                g = &#39;X&#39;;
                printf(&quot;\n\n %c | %c | %c |\n -   -   -   \n %c | %c | %c |\n -  
-   -   \n %c | %c | %c |\n&quot;, a, b, c, d, e, f, g, h, i);
                printf(&quot;i win&quot;);
                break;
            case 9:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2i;
                break;
            default:
                printf(&quot;illegal move enter again\n&quot;);
                goto step2i;
            }
            break;
        default:
            printf(&quot;illegal move enter again\n&quot;);
            goto step1;
            break;
        }
    }
    hangman:
    {
        int dif;
        printf(&quot;\nHANGMAN ! \n&quot;);
        printf(&quot;Select your difficulty: \n&quot;);
        printf(&quot;1. Noob\n2. Easy\n3. Medium\n4. Hard\n5. God Level\nEnter &#39;b&#39; to
exit\n&quot;);
        scanf(&quot;%d&quot;, &amp;dif);
        switch (dif)
        {
        case 1:
        {
            man_noob();
            break;
        }
        case 2:

        {
            man_easy();
            break;
        }
        case 3:
        {
            man_med();
            break;
        }
        case 4:
        {
            man_hard();
            break;
        }
        case 5:
        {
            man_god();
            break;
        }
        case &#39;b&#39;:
        {
            goto hangman;
        }
        case &#39;B&#39;:
        {
            goto hangman;
        }
        default:
        {
            printf(&quot;Enter a valid option\n&quot;);
        }
        }
        printf(&quot;Want to play another difficulty? (y/n)\n&quot;);
        char re;
        scanf(&quot; %c&quot;, &amp;re);
        if (re == &#39;y&#39; || re == &#39;Y&#39;)
        {
            goto hangman;
        }
        else
        {
            printf(&quot;THANK YOU !&quot;);
        }
    }
    rps:

    {
        cyanb();
        printf(&quot;ROCK-PAPER-SCISSORS \n&quot;);
        yellow();
        printf(&quot;1. Rock\n2. Paper\n3. Scissors\n&quot;);
        int i, turn = 1, p1 = 0, p2 = 0;
        char ch1, ch2;
        for (i = 1; i &lt;= 5; i++)
        {
            yellow();
            ch1 = &#39;0&#39;;
            ch2 = &#39;0&#39;;
            printf(&quot;PLAYER 1:\n&quot;);
            ch1 = getch();
            printf(&quot;*\n&quot;);
            printf(&quot;PLAYER 2: \n&quot;);
            ch2 = getch();
            printf(&quot;*\n&quot;);
            if ((ch1 == &#39;1&#39;) &amp;&amp; (ch2 == &#39;2&#39;))
            {
                p2++;
            }
            else if (((ch1 == &#39;2&#39;) &amp;&amp; (ch2 == &#39;3&#39;)))
            {
                p2++;
            }
            else if ((ch1 == &#39;3&#39;) &amp;&amp; (ch2 == &#39;1&#39;))
            {
                p2++;
            }
            else if (((ch1 == &#39;2&#39;) &amp;&amp; (ch2 == &#39;1&#39;)))
            {
                p1++;
            }
            else if ((ch1 == &#39;3&#39;) &amp;&amp; (ch2 == &#39;2&#39;))
            {
                p1++;
            }
            else if (((ch1 == &#39;1&#39;) &amp;&amp; (ch2 == &#39;3&#39;)))
            {
                p1++;
            }
            else
            {
                p1++;

                p2++;
            }
            cyan();
            printf(&quot;%c - %c \nPlayer1 = %d :: Player2 = %d \n&quot;, ch1, ch2, p1,
p2);
        }
        cyanb();
        if (p1 &gt; p2)
        {
            printf(&quot;PLAYER 1 WINS !!\n&quot;);
        }
        else if (p1 &lt; p2)
        {
            printf(&quot;PLAYER 2 WINS !! \n&quot;);
        }
        white();
        return 0;
    }
    guess:
    {
        cyanb();
        printf(&quot;WELCOME TO NUMBER GUESSING !!\n&quot;);
        int p1 = 0, p2 = 0, turn, round = 1;
        for (turn = 1; turn &lt;= 10; turn++)
        {
            if (round % 2 != 0)
            {
                cyanb();
                printf(&quot;ROUND %d\n&quot;, round / 2 + 1);
            }
            if (turn % 2 != 0)
            {
                cyanb();
                printf(&quot;PLAYER 1:\n&quot;);
            }
            else
            {
                cyanb();
                printf(&quot;PLAYER 2:\n&quot;);
            }
            int random, guess;
            random = rand() % 10;
            yellow();
            scanf(&quot;%d&quot;, &amp;guess);
            printf(&quot;The number was %d\n&quot;, random);

            if (guess == random)
            {
                if (turn % 2 == 0)
                {
                    p2++;
                }
                else
                {
                    p1++;
                }
            }
            round++;
        }
        yellow();
        printf(&quot;\nPLAYER 1 Score: %d\nPLAYER 2 Score: %d\n&quot;, p1, p2);
        printf(&quot;\n&quot;);
        cyanb();
        if (p1 &gt; p2)
        {
            printf(&quot;PLAYER 1 WINS !!\n&quot;);
        }
        else if (p1 == p2)
        {
            printf(&quot;IT&#39;S A TIE MATCH ! \n&quot;);
        }
        else
        {
            printf(&quot;PLAYER 2 WINS !!\n&quot;);
        }
        white();
    }
    }
}
void man_easy()
{
    char a1;
    char arr1[8] = {&#39;P&#39;, &#39;R&#39;, &#39;_&#39;, &#39;B&#39;, &#39;_&#39;, &#39;B&#39;, &#39;_&#39;, &#39;Y&#39;};
    char arr2[8] = {&#39;P&#39;, &#39;R&#39;, &#39;O&#39;, &#39;B&#39;, &#39;A&#39;, &#39;B&#39;, &#39;L&#39;, &#39;Y&#39;};
    man(0);
    int i, count = 0, correct = 0;
    printf(&quot;\n&quot;);
easy1:
{
    for (i = 0; i &lt; 8; i++)

    {
        printf(&quot;%c &quot;, arr1[i]);
    }
    printf(&quot;\n&quot;);
    int j;
    for (j = 0; j &lt; 8; j++)
    {
        if (arr1[j] != arr2[j])
        {
            break;
        }
    }
    if (j == 8)
    {
        printf(&quot;YOU WIN !! \n&quot;);
    }
    else
    {
        scanf(&quot; %c&quot;, &amp;a1);
        if (a1 == &#39;O&#39; || a1 == &#39;A&#39; || a1 == &#39;L&#39;)
        {
            // man0();
            if (a1 == &#39;O&#39;)
            {
                printf(&quot;O is correct!\n&quot;);
                arr1[2] = &#39;O&#39;;
                man(count);
                goto easy1;
            }
            else if (a1 == &#39;A&#39;)
            {
                printf(&quot;A is correct!\n&quot;);
                arr1[4] = &#39;A&#39;;
                man(count);
                goto easy1;
            }
            else
            {
                printf(&quot;L is correct!\n&quot;);
                arr1[6] = &#39;L&#39;;
                man(count);
                goto easy1;
            }
        }
        else

        {
            printf(&quot;WRONG ANSWER :(\n&quot;);
            count++;
            switch (count)
            {
            case 1:
            {
                man(1);
                break;
            }
            case 2:
            {
                man(2);
                break;
            }
            case 3:
            {
                man(3);
                break;
            }
            case 4:
            {
                man(4);
                break;
            }
            case 5:
            {
                man(5);
                break;
            }
            case 6:
            {
                man(6);
                break;
            }
            default:
            {
                man(0);
                break;
            }
            }
            if (count != 6)
            {
                printf(&quot;%d turn(s) left\n&quot;, 6 - count);
                goto easy1;

            }
            else
            {
                printf(&quot;GAME OVER :( \n&quot;);
            }
        }
    }
}
}
void man(int n)
{
    if (n == 0)
    {
        printf(&quot;+--------+ \n&quot;);
        printf(&quot;|        | \n&quot;);
        printf(&quot;|        O \n&quot;);
        printf(&quot;|      -- --\n&quot;);
        printf(&quot;|        | \n&quot;);
        printf(&quot;|      -- --\n&quot;);
        printf(&quot;| \n&quot;);
        printf(&quot;-------------\n&quot;);
    }
    else if (n == 1)
    {
        printf(&quot;+--------+ \n&quot;);
        printf(&quot;|        | \n&quot;);
        printf(&quot;|        O \n&quot;);
        printf(&quot;|      -- --\n&quot;);
        printf(&quot;|        | \n&quot;);
        printf(&quot;|      -- \n&quot;);
        printf(&quot;| \n&quot;);
        printf(&quot;-------------\n&quot;);
    }
    else if (n == 2)
    {
        printf(&quot;+--------+ \n&quot;);
        printf(&quot;|        | \n&quot;);
        printf(&quot;|        O \n&quot;);
        printf(&quot;|      -- --\n&quot;);
        printf(&quot;|        | \n&quot;);
        printf(&quot;|      \n&quot;);
        printf(&quot;| \n&quot;);
        printf(&quot;-------------\n&quot;);
    }
    else if (n == 3)

    {
        printf(&quot;+--------+ \n&quot;);
        printf(&quot;|        | \n&quot;);
        printf(&quot;|        O \n&quot;);
        printf(&quot;|      -- --\n&quot;);
        printf(&quot;|         \n&quot;);
        printf(&quot;|      \n&quot;);
        printf(&quot;| \n&quot;);
        printf(&quot;-------------\n&quot;);
    }
    else if (n == 4)
    {
        printf(&quot;+--------+ \n&quot;);
        printf(&quot;|        | \n&quot;);
        printf(&quot;|        O \n&quot;);
        printf(&quot;|      -- \n&quot;);
        printf(&quot;|        \n&quot;);
        printf(&quot;|      \n&quot;);
        printf(&quot;| \n&quot;);
        printf(&quot;-------------\n&quot;);
    }
    else if (n == 5)
    {
        printf(&quot;+--------+ \n&quot;);
        printf(&quot;|        | \n&quot;);
        printf(&quot;|        O \n&quot;);
        printf(&quot;|      \n&quot;);
        printf(&quot;|         \n&quot;);
        printf(&quot;|      \n&quot;);
        printf(&quot;| \n&quot;);
        printf(&quot;-------------\n&quot;);
    }
    else if (n == 6)
    {
        printf(&quot;+--------+ \n&quot;);
        printf(&quot;|        | \n&quot;);
        printf(&quot;|         \n&quot;);
        printf(&quot;|      \n&quot;);
        printf(&quot;|         \n&quot;);
        printf(&quot;|      \n&quot;);
        printf(&quot;| \n&quot;);
        printf(&quot;-------------\n&quot;);
    }
}
void man_med()

{
    char a1;
    char arr1[12] = {&#39;E&#39;, &#39;N&#39;, &#39;_&#39;, &#39;R&#39;, &#39;E&#39;, &#39;_&#39;, &#39;R&#39;, &#39;E&#39;, &#39;N&#39;, &#39;_&#39;, &#39;_&#39;, &#39;R&#39;};
    char arr2[12] = {&#39;E&#39;, &#39;N&#39;, &#39;T&#39;, &#39;R&#39;, &#39;E&#39;, &#39;P&#39;, &#39;R&#39;, &#39;E&#39;, &#39;N&#39;, &#39;E&#39;, &#39;U&#39;, &#39;R&#39;};
    man(0);
    int i, count = 0, correct = 0;
    printf(&quot;\n&quot;);
easy1:
{
    for (i = 0; i &lt; 12; i++)
    {
        printf(&quot;%c &quot;, arr1[i]);
    }
    printf(&quot;\n&quot;);
    int j;
    for (j = 0; j &lt; 12; j++)
    {
        if (arr1[j] != arr2[j])
        {
            break;
        }
    }
    if (j == 12)
    {
        printf(&quot;YOU WIN !! \n&quot;);
    }
    else
    {
        scanf(&quot; %c&quot;, &amp;a1);
        if (a1 == &#39;T&#39; || a1 == &#39;P&#39; || a1 == &#39;E&#39; || a1 == &#39;U&#39;)
        {
            if (a1 == &#39;T&#39;)
            {
                printf(&quot;T is correct!\n&quot;);
                arr1[2] = &#39;T&#39;;
                man(count);
                goto easy1;
            }
            else if (a1 == &#39;P&#39;)
            {
                printf(&quot;P is correct!\n&quot;);
                arr1[5] = &#39;P&#39;;
                man(count);

                goto easy1;
            }
            else if (a1 == &#39;E&#39;)
            {
                printf(&quot;E is correct!\n&quot;);
                arr1[9] = &#39;E&#39;;
                man(count);
                goto easy1;
            }
            else
            {
                printf(&quot;U is correct!\n&quot;);
                arr1[10] = &#39;U&#39;;
                man(count);
                goto easy1;
            }
        }
        else
        {
            printf(&quot;WRONG ANSWER :(\n&quot;);
            count++;
            switch (count)
            {
            case 1:
            {
                man(1);
                break;
            }
            case 2:
            {
                man(2);
                break;
            }
            case 3:
            {
                man(3);
                break;
            }
            case 4:
            {
                man(4);
                break;
            }
            case 5:
            {

                man(5);
                break;
            }
            case 6:
            {
                man(6);
                break;
            }
            default:
            {
                man(0);
                break;
            }
            }
            if (count != 6)
            {
                printf(&quot;%d turn(s) left\n&quot;, 6 - count);
                goto easy1;
            }
            else
            {
                printf(&quot;GAME OVER :( \n&quot;);
            }
        }
    }
}
}
void man_hard()
{
    char a1;
    char arr1[12] = {&#39;A&#39;, &#39;_&#39;, &#39;B&#39;, &#39;I&#39;, &#39;_&#39;, &#39;E&#39;, &#39;X&#39;, &#39;_&#39;, &#39;_&#39;, &#39;O&#39;, &#39;_&#39;, &#39;S&#39;};
    char arr2[12] = {&#39;A&#39;, &#39;M&#39;, &#39;B&#39;, &#39;I&#39;, &#39;D&#39;, &#39;E&#39;, &#39;X&#39;, &#39;T&#39;, &#39;R&#39;, &#39;O&#39;, &#39;U&#39;, &#39;S&#39;};
    man(0);
    int i, count = 0, correct = 0;
    printf(&quot;\n&quot;);
easy1:
{
    for (i = 0; i &lt; 12; i++)
    {
        printf(&quot;%c &quot;, arr1[i]);
    }
    printf(&quot;\n&quot;);
    int j;
    for (j = 0; j &lt; 12; j++)

    {
        if (arr1[j] != arr2[j])
        {
            break;
        }
    }
    if (j == 12)
    {
        printf(&quot;YOU WIN !! \n&quot;);
    }
    else
    {
        scanf(&quot; %c&quot;, &amp;a1);
        if (a1 == &#39;M&#39; || a1 == &#39;D&#39; || a1 == &#39;T&#39; || a1 == &#39;R&#39; || a1 == &#39;U&#39;)
        {
            if (a1 == &#39;M&#39;)
            {
                printf(&quot;M is correct!\n&quot;);
                arr1[1] = &#39;M&#39;;
                man(count);
                goto easy1;
            }
            else if (a1 == &#39;D&#39;)
            {
                printf(&quot;D is correct!\n&quot;);
                arr1[4] = &#39;D&#39;;
                man(count);
                goto easy1;
            }
            else if (a1 == &#39;T&#39;)
            {
                printf(&quot;T is correct!\n&quot;);
                arr1[7] = &#39;T&#39;;
                man(count);
                goto easy1;
            }
            else if (a1 == &#39;R&#39;)
            {
                printf(&quot;R is correct!\n&quot;);
                arr1[8] = &#39;R&#39;;
                man(count);
                goto easy1;
            }
            else
            {

                printf(&quot;U is correct!\n&quot;);
                arr1[10] = &#39;U&#39;;
                man(count);
                goto easy1;
            }
        }
        else
        {
            printf(&quot;WRONG ANSWER :(\n&quot;);
            count++;
            switch (count)
            {
            case 1:
            {
                man(1);
                break;
            }
            case 2:
            {
                man(2);
                break;
            }
            case 3:
            {
                man(3);
                break;
            }
            case 4:
            {
                man(4);
                break;
            }
            case 5:
            {
                man(5);
                break;
            }
            case 6:
            {
                man(6);
                break;
            }
            default:
            {
                man(0);

                break;
            }
            }
            if (count != 6)
            {
                printf(&quot;%d turn(s) left\n&quot;, 6 - count);
                goto easy1;
            }
            else
            {
                printf(&quot;GAME OVER :( \n&quot;);
            }
        }
    }
}
}
void man_god()
{
    char a1;
    char arr1[13] = {&#39;S&#39;, &#39;C&#39;, &#39;_&#39;, &#39;I&#39;, &#39;_&#39;, &#39;_&#39;, &#39;P&#39;, &#39;H&#39;, &#39;_&#39;, &#39;E&#39;, &#39;_&#39;, &#39;I&#39;,
&#39;A&#39;};
    char arr2[13] = {&#39;S&#39;, &#39;C&#39;, &#39;H&#39;, &#39;I&#39;, &#39;Z&#39;, &#39;O&#39;, &#39;P&#39;, &#39;H&#39;, &#39;R&#39;, &#39;E&#39;, &#39;N&#39;, &#39;I&#39;,
&#39;A&#39;};
    man(0);
    int i, count = 0, correct = 0;
    printf(&quot;\n&quot;);
easy1:
{
    for (i = 0; i &lt; 13; i++)
    {
        printf(&quot;%c &quot;, arr1[i]);
    }
    printf(&quot;\n&quot;);
    int j;
    for (j = 0; j &lt; 13; j++)
    {
        if (arr1[j] != arr2[j])
        {
            break;
        }
    }
    if (j == 13)
    {
        printf(&quot;YOU WIN !! \n&quot;);

    }
    else
    {
        scanf(&quot; %c&quot;, &amp;a1);
        if (a1 == &#39;H&#39; || a1 == &#39;Z&#39; || a1 == &#39;O&#39; || a1 == &#39;R&#39; || a1 == &#39;N&#39;)
        {
            // man0();
            if (a1 == &#39;H&#39;)
            {
                printf(&quot;H is correct!\n&quot;);
                arr1[2] = &#39;H&#39;;
                man(count);
                goto easy1;
            }
            else if (a1 == &#39;Z&#39;)
            {
                printf(&quot;Z is correct!\n&quot;);
                arr1[4] = &#39;Z&#39;;
                man(count);
                goto easy1;
            }
            else if (a1 == &#39;O&#39;)
            {
                printf(&quot;O is correct!\n&quot;);
                arr1[5] = &#39;O&#39;;
                man(count);
                goto easy1;
            }
            else if (a1 == &#39;R&#39;)
            {
                printf(&quot;R is correct!\n&quot;);
                arr1[8] = &#39;R&#39;;
                man(count);
                goto easy1;
            }
            else
            {
                printf(&quot;N is correct!\n&quot;);
                arr1[10] = &#39;N&#39;;
                man(count);
                goto easy1;
            }
        }
        else
        {

            printf(&quot;WRONG ANSWER :(\n&quot;);
            count++;
            switch (count)
            {
            case 1:
            {
                man(1);
                break;
            }
            case 2:
            {
                man(2);
                break;
            }
            case 3:
            {
                man(3);
                break;
            }
            case 4:
            {
                man(4);
                break;
            }
            case 5:
            {
                man(5);
                break;
            }
            case 6:
            {
                man(6);
                break;
            }
            default:
            {
                man(0);
                break;
            }
            }
            if (count != 6)
            {
                printf(&quot;%d turn(s) left\n&quot;, 6 - count);
                goto easy1;
            }

            else
            {
                printf(&quot;GAME OVER :( \n&quot;);
            }
        }
    }
}
}
void man_noob()
{
    char a1;
    char arr1[8] = {&#39;S&#39;, &#39;C&#39;, &#39;_&#39;, &#39;O&#39;, &#39;_&#39;, &#39;L&#39;};
    char arr2[8] = {&#39;S&#39;, &#39;C&#39;, &#39;H&#39;, &#39;O&#39;, &#39;O&#39;, &#39;L&#39;};
    man(0);
    int i, count = 0, correct = 0;
    printf(&quot;\n&quot;);
    easy1:
    {
        for (i = 0; i &lt; 8; i++)
        {
            printf(&quot;%c &quot;, arr1[i]);
        }
        printf(&quot;\n&quot;);
        int j;
        for (j = 0; j &lt; 8; j++)
        {
            if (arr1[j] != arr2[j])
            {
                break;
            }
        }
        if (j == 8)
        {
            printf(&quot;YOU WIN !! \n&quot;);
        }
        else
        {
            scanf(&quot; %c&quot;, &amp;a1);
            if (a1 == &#39;H&#39; || a1 == &#39;O&#39;)
            {
                if (a1 == &#39;H&#39;)
                {
                    printf(&quot;H is correct!\n&quot;);
                    arr1[2] = &#39;H&#39;;
    
                    man(count);
                    goto easy1;
                }
                else
                {
                    printf(&quot;O is correct!\n&quot;);
                    arr1[4] = &#39;O&#39;;
                    man(count);
                    goto easy1;
                }
            }
            else
            {
                printf(&quot;WRONG ANSWER :(\n&quot;);
                count++;
                switch (count)
                {
                case 1:
                {
                    man(1);
                    break;
                }
                case 2:
                {
                    man(2);
                    break;
                }
                case 3:
                {
                    man(3);
                    break;
                }
                case 4:
                {
                    man(4);
                    break;
                }
                case 5:
                {
                    man(5);
                    break;
                }
                case 6:
                {
                    man(6);
    
                    break;
                }
                default:
                {
                    man(0);
                    break;
                }
                }
                if (count != 6)
                {
                    printf(&quot;%d turn(s) left\n&quot;, 6 - count);
                    goto easy1;
                }
                else
                {
                    printf(&quot;GAME OVER :( \n&quot;);
                }
            }
        }
    }
}
