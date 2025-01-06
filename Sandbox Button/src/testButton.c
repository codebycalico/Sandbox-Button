// using UnityEngine;
// using System.Collections;
// using System.Collections.Generic;
// using System.IO.Ports;

// public class TestButton : MonoBehaviour
// {
//     bool buttonPressed = false;
//     public GameObject rain;

//     void Update()
//     {
//         if(Input.GetKey("up"))
//         {
//             if(!buttonPressed)
//             {
//                 buttonPressed = true;
//                 rain.SetActive(true);
//             } else if(buttonPressed)
//             {
//                 buttonPressed = false;
//                 rain.SetActive(false);
//             }
//         }
//     }
// }