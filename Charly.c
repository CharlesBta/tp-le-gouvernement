

double Taxes(float value){
    if(value>=15000 && value<50000){
        return 0.30*value;
    }else if(value>=50000)return 0.50*value;
    return 0;
}

int age(int value){
    return 2023-value;
}
