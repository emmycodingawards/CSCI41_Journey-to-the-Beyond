using UnityEngine;
using System.Collections;

public class MovementControls : MonoBehaviour //movement class
{
	public float speed;
	public float turnSpeed;


	void Update ()
	{
		Movement();
	}


	void Movement ()
	{
		float forwardMovement = Input.GetAxis("Vertical") * speed * Time.deltaTime;
		float turnMovement = Input.GetAxis("Horizontal") * turnSpeed * Time.deltaTime;

		transform.Translate(Vector3.forward * forwardMovement);
		transform.Rotate(Vector3.up * turnMovement);
	}
}

public class ExampleClass : MonoBehaviour { //acceleration class
    public float speed = 10.0F;
    void Update() {
        Vector3 dir = Vector3.zero;
        dir.x = -Input.acceleration.y;
        dir.z = Input.acceleration.x;
        if (dir.sqrMagnitude > 1)
            dir.Normalize();
        
        dir *= Time.deltaTime;
        transform.Translate(dir * speed);
    }
}
