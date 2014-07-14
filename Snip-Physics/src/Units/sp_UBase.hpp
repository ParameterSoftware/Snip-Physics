#ifndef SP_UBASE
#ifndef sp_ubase
#define SP_UBASE
#define sp_ubase

class sp_UBase {
	protected:
		static double base = 1;
		double GetBase();
		double amount;
	public:
		sp_UBase(double amount);
		double Convert(sp_UBase from);
};

#endif
#endif
