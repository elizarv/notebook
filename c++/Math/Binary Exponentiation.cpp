Realiza a^b y retorna el resultado módulo c. Si se elimina el módulo c, debe tenerse precaución para no exceder el límite


int binaryExponentiation(int a, int b, int c){
    if (b == 0){
    	return 1;
    } 
    if (b % 2 == 0){
        int temp = binaryExponentiation(a,b/2, c);
        return ((long long)(temp) * temp) % c;
    }else{
        int temp = binaryExponentiation(a, b-1, c);
        return ((long long)(temp) * a) % c;
    }
}
