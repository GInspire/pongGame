package ;
import openfl.display.Sprite;

class Ball extends Sprite
{

	public function new() 
	{
		super();
		this.graphics.beginFill(0xffffff);
		this.graphics.drawCircle(0, 0, 60);
		this.graphics.endFill();
	}
	
}