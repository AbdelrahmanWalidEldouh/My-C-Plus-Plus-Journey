// Automating Electric Energy Purchases.h

class ElectricBill {
public:
    explicit ElectricBill (double paid)
    {
        amountPaid = 0;
        if (paid > 0) { amountPaid = paid; }
    }

    void setAmountPaid (double paid)  
    {
        amountPaid = 0;
        if (paid > 0) { amountPaid = paid; }
    }

    double getAmountPaid() const { return amountPaid; }

    double getVAT() const { return amountPaid * 0.18; }

    double getEWURA() const { return amountPaid * 0.01; }

    double getREA() const { return amountPaid * 0.03; }

    double getUnits() const { 
        double totalAmount; // Remaining amount after all deductions
        double VAT = amountPaid * 0.18;
        double EWURA = amountPaid * 0.01;
        double REA = amountPaid * 0.03;
        int fixedMonthlyService = 5000;

        totalAmount = amountPaid - VAT - EWURA - REA - fixedMonthlyService;

        return totalAmount / 295;
     }

private:
    double amountPaid; 
};