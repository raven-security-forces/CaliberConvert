class s39_firefightPositionModule: Module_F
{

	// Standard object definitions
	scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
	displayName = "Firefight Position Module"; // Name displayed in the menu
	category = "s39_firefightModules";

	// Name of function triggered once conditions are met
	function = "s39_fnc_initFirefightPositionModule";
	// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
	functionPriority = 1;
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
		class Name: Edit
			{
			property = "s39_firefightLoctionName"
			displayName = "Display Name:";
			tooltip = "Name of the firefight location.";
			// Default text filled in the input box
			// Because it's an expression, to return a String one must have a string within a string
			defaultValue = """Unnamed""";
		};
		class ModuleDescription: ModuleDescription {}; // Module description should be shown last
	};

	// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
	class ModuleDescription: ModuleDescription
	{
		description="Designate a potential firefight location. It is suggested you use an urban area.";
		position=1;
		duplicate=1;
	};
};
