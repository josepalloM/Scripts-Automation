//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Trx01-URL");
	truclient_step("1", "Navigate to http://34.133.139.146/", "snapshot=Action_1.inf");
	lr_end_transaction("Trx01-URL",0);
	lr_start_transaction("Trx02-Product-One");
	truclient_step("2", "Click on Link Link", "snapshot=Action_2.inf");
	lr_end_transaction("Trx02-Product-One",0);
	lr_start_transaction("Trx03-Add-To-Car");
	truclient_step("3", "Click on Add To Cart Button", "snapshot=Action_3.inf");
	lr_end_transaction("Trx03-Add-To-Car",0);
	truclient_step("4", "Click on Continue Shopping Link", "snapshot=Action_4.inf");
	truclient_step("5", "Wait 3 Seconds", "snapshot=Action_5.inf");
	lr_start_transaction("Trx04-Product-Two");
	truclient_step("6", "Click on Link DogNotebook Link", "snapshot=Action_6.inf");
	lr_end_transaction("Trx04-Product-Two",0);
	truclient_step("7", "Select 10 from Dog Notebook $19.99 The... ListBox", "snapshot=Action_7.inf");
	lr_start_transaction("Trx05-Add-To-Car-Two");
	truclient_step("8", "Click on Add To Cart Button", "snapshot=Action_8.inf");
	lr_end_transaction("Trx05-Add-To-Car-Two",0);
	truclient_step("9", "Select January from Month ListBox", "snapshot=Action_9.inf");
	truclient_step("10", "Select 2027 from Year ListBox", "snapshot=Action_10.inf");
	lr_start_transaction("Trx06-Pay");
	truclient_step("11", "Click on Place Order Button", "snapshot=Action_11.inf");
	truclient_step("12", "Verify if Your order is complete! Heading's VisibleText Contain                         ...                ", "snapshot=Action_12.inf");
	lr_end_transaction("Trx06-Pay",0);
	lr_start_transaction("Trx07-Continue-Shopping");
	truclient_step("13", "Click on Continue Shopping Link", "snapshot=Action_13.inf");
	lr_end_transaction("Trx07-Continue-Shopping",0);
	return 0;
}
