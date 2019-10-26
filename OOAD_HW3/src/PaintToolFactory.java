
public class PaintToolFactory extends HardWareStoreFactory {
	
	// Instantiate which tool based on string input
	public Tool instantiateTool(String type) {
		if(type.equals("1")) {
			return new PaintTool1();
		}
		else if(type.equals("2")) {
			return new PaintTool2();
		}
		else if(type.equals("3")) {
			return new PaintTool3();
		}
		else if(type.equals("4")) {
			return new PaintTool4();
		}
		else {
			return new PaintTool5();
		}
	}
}
