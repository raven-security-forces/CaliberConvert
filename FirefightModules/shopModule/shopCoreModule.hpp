class s39_shopCoreModule: Module_F
{

	// Standard object definitions
	scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
	displayName = "Shop Core Module"; // Name displayed in the menu
	category = "s39_shopModule";

	// Name of function triggered once conditions are met
	function = "s39_fnc_initShopModule";
	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
	functionPriority = 2;
	// 0 for server only execution, 1 for global execution, 2 for persistent global execution
	isGlobal = 1;
	// 1 for module waiting until all synced triggers are activated
	isTriggerActivated = 0;
	// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work)
	isDisposable = 1;
	// // 1 to run init function in Eden Editor as well
	is3DEN = 0;

	// Menu displayed when the module is placed or double-clicked on by Zeus
	curatorInfoType = "";

	// Module attributes, uses https://community.bistudio.com/wiki/Eden_Editor:_Configuring_Attributes#Entity_Specific
	class Attributes: AttributesBase
	{

		class InitWallet: Checkbox
			{
				property = "s39_shopCoreModule_initWallet";
				displayName = "Init wallet system (experimental): ";
				tooltip = "";
				typeName = "BOOL";
				defaultValue = false;
			};

			class InitArmory: Checkbox
				{
					property = "s39_shopCoreModule_initArmory";
					displayName = "Add Armory: ";
					tooltip = "";
					typeName = "BOOL";
					defaultValue = true;
				};

				class InitQMaster: Checkbox
					{
						property = "s39_shopCoreModule_initQMaster";
						displayName = "Add Quartermaster: ";
						tooltip = "";
						typeName = "BOOL";
						defaultValue = true;
					};

					class InitRecruit: Checkbox
						{
							property = "s39_shopCoreModule_initRecruit";
							displayName = "Add recruiting display: ";
							tooltip = "";
							typeName = "BOOL";
							defaultValue = false;
						};

		class ModuleDescription: ModuleDescription {}; // Module description should be shown last
	};

	// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
	class ModuleDescription: ModuleDescription
	{
		description="Initializes the shop system. Sync objects to this to designate storefront. The first synced box will be used to store purchased items. Also initializes the 'Wallet' system. Armory adds purchasable weapons, quartermaster is for uniforms/support items, recruit display is to get AI helpers.";
		position=0;
		duplicate=0;
	};
};
