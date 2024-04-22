int sum(int a, int b) { return a + b; }
float sum(float a, float b) { return a + b; }
double sum(double a, double b) { return a + b; }

int subtract(int a, int b) { return a - b; }
float subtract(float a, float b) { return a - b; }
double subtract(double a, double b) { return a - b; }

int multiply(int a, int b) { return a * b; }
float multiply(float a, float b) { return a * b; }
double multiply(double a, double b) { return a * b; }

typedef struct euclideanDivisionResult
{
    int quocient;
    int remainder;
} edResult;

edResult divide(int a, int b) { 
    
    edResult result;
    result.quocient = a / b;
    result.remainder = a % b;

    return result;
}

float divide(float a, float b) { return a / b; }
double divide(double a, double b) { return a / b; }