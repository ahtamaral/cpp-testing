class Arithmetics {
    public:
        
        template <typename T>
        static T sum(T a, T b) { return a + b; }

        template <typename T>
        static T subtract(T a, T b) { return a - b; }

        template <typename T>
        static T multiply(T a, T b) { return a * b; }

        template <typename T>
        static T divide(T a, T b) { return a / b; }
};