import java.util.ArrayList;
import java.util.List;

public class HardWareStore {
	List<Tool> inventory = new ArrayList<Tool>();
	//List<ActiveRentals> activeRentals = new ArrayList<ActiveRentals>();
	int day = 0;
	
	public HardWareStore() {
		// Populate with tools
		ConcreteToolFactory concreteToolFactory = new ConcreteToolFactory();
		PaintToolFactory paintToolFactory = new PaintToolFactory();
		PlumbingToolFactory plumbingToolFactory = new PlumbingToolFactory();
		WoodWorkToolFactory woodWorkToolFactory = new WoodWorkToolFactory();
		YardWorkToolFactory yardWorkToolFactory = new YardWorkToolFactory();
		inventory.add(concreteToolFactory.instantiateTool("1"));
		inventory.add(concreteToolFactory.instantiateTool("2"));
		inventory.add(concreteToolFactory.instantiateTool("3"));
		inventory.add(concreteToolFactory.instantiateTool("4"));
		inventory.add(concreteToolFactory.instantiateTool("5"));
		inventory.add(paintToolFactory.instantiateTool("1"));
		inventory.add(paintToolFactory.instantiateTool("2"));
		inventory.add(paintToolFactory.instantiateTool("3"));
		inventory.add(paintToolFactory.instantiateTool("4"));
		inventory.add(paintToolFactory.instantiateTool("5"));
		inventory.add(plumbingToolFactory.instantiateTool("1"));
		inventory.add(plumbingToolFactory.instantiateTool("2"));
		inventory.add(plumbingToolFactory.instantiateTool("3"));
		inventory.add(plumbingToolFactory.instantiateTool("4"));
		inventory.add(plumbingToolFactory.instantiateTool("5"));
		inventory.add(woodWorkToolFactory.instantiateTool("1"));
		inventory.add(woodWorkToolFactory.instantiateTool("2"));
		inventory.add(woodWorkToolFactory.instantiateTool("3"));
		inventory.add(woodWorkToolFactory.instantiateTool("4"));
		inventory.add(yardWorkToolFactory.instantiateTool("1"));
		inventory.add(yardWorkToolFactory.instantiateTool("2"));
		inventory.add(yardWorkToolFactory.instantiateTool("3"));
		inventory.add(yardWorkToolFactory.instantiateTool("4"));
		inventory.add(yardWorkToolFactory.instantiateTool("5"));
	}
	
	public void requestRental() {
		;
	}
	
}
