int faz_conta_direito(int parcelas, char op){
   int valor_passado;
    int valor_atual;
    scanf("%d",&valor_atual);
    for (int i = 1; i < parcelas; i++) {
        scanf("%d", &valor_passado);
        if (op == '+') {
                valor_atual += valor_passado;
        } else {
            valor_atual -= valor_passado;
        }
    }
    return valor_atual;
}