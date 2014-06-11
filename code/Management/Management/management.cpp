#include "management.h"
#include "associator.h"
#include "depot.h"
#include "employee.h"
#include "goods.h"
#include "present.h"
#include "right.h"
#include "sell.h"
#include "specialOP.h"
#include "stock.h"
#include "dataClass.h"

Management::Management(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
}

Management::~Management()
{

}


void Management::on_depot_CLBTN_clicked()
{
	Depot depotUI;
	depotUI.exec();
}

void Management::on_present_CLBTN_clicked()
{
	Present presentUI;
	presentUI.exec();
}

void Management::on_stock_CLBTN_clicked()
{
	Stock stockUI;
	stockUI.exec();
}

void Management::on_sell_CLBTN_clicked()
{
	Sell sellUI;
	sellUI.exec();
}

void Management::on_right_CLBTN_clicked()
{
	Right rightUI;
	rightUI.exec();
}

void Management::on_specialOP_CLBTN_clicked()
{
	SpecialOP specialOPUI;
	specialOPUI.exec();
}

void Management::on_employee_CLBTN_clicked()
{
	Employee employeeUI;
	employeeUI.exec();
}

void Management::on_goods_CLBTN_clicked()
{
	Goods goodsUI;
	goodsUI.exec();
}

void Management::on_associator_CLBTN_clicked()
{
	Associator associatorUI;
	associatorUI.exec();
}