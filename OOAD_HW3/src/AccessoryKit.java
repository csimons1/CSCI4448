
public class AccessoryKit extends OptionsDecorator {
	
	// Tool to add options to
	Tool tool;
	
	// Constructor
	public AccessoryKit(Tool tool) {
		this.tool = tool;
	}
	// Add options to the tool's description
	public String getDescription() {
		return tool.getDescription() + " w/ Accessory Kit";
	}
	
	public String getStockName() {
		return tool.getStockName();
	}
	
	// Price of the option
	public int price() {
		return tool.price() + 6;
	}
}
