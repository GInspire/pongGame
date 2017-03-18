package ;
import openfl.display.Sprite;

class Platform extends Sprite
{

	public function new() 
	{
		super();
		this.graphics.beginFill(0xffffff);
		this.graphics.drawRect(0, 0, 100, 350);
		this.graphics.endFill();
	}
	
}