
public class WoodWorkToolFactory extends HardWareStoreFactory{
	
	// Instantiate which tool based on string input
	public Tool instantiateTool(String type) {
		if(type.equals("1")) {
			return new WoodWorkTool1();
		}
		else if(type.equals("2")) {
			return new WoodWorkTool2();
		}
		else if(type.equals("3")) {
			return new WoodWorkTool3();
		}
		else {
			return new WoodWorkTool4();
		}
	}
}

