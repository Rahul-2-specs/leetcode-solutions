int maxProfit(int* p, int ps) {
    if (ps==0)return 0;
    int hold=-p[0];
    int sold=0;
    int rest=0;
    for(int i=1;i<ps;i++)
    {
        int prev_hold=hold;
        int prev_sold=sold;
        int prev_rest=rest;
        hold=(prev_hold>prev_rest-p[i])?prev_hold:prev_rest-p[i];
        sold=prev_hold+p[i];
        rest=(prev_rest>prev_sold)?prev_rest:prev_sold;
    }
    return (sold>rest)?sold:rest;
}