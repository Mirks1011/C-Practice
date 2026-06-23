template<typename T, typename U>
auto FindMax(T num1, U num2){
    return (num1>num2) ? num1:num2;
}

template<typename V, typename X>
auto FindMin(V num1, X num2){
    if (num1<num2)
    {
        return num1;
    }
    return num2;
}