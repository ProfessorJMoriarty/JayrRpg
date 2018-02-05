//#include <iostream> //library
//#include <allegro5\allegro.h>
//#include <allegro5\allegro_image.h>
//using namespace std; //cheat code
//
//
//int main() { //starting point
//			 //baka
//	ALLEGRO_DISPLAY *display = NULL;
//	al_init();
//	al_init_image_addon();
//	display = al_create_display(700, 500);
//	//loads bitmaps from folder
//	ALLEGRO_BITMAP *image = al_load_bitmap("garfield.png");
//	//png files have automatic transparency, jnps and other files types do not
//	int Ana = 0; //declare variables
//	int Dva = 0;
//	int Lucio = 0;
//	int Soldier = 0;
//	char input1;
//	al_clear_to_color(al_map_rgb(255, 255, 255));
//	al_draw_bitmap(image, 0, 0, 0);
//	al_flip_display();
//	cout << "What Overwatch character are you?" << endl;
//	cout << "What is your favorite quote?" << endl;
//	cout << "a-Give yourself to the rhythm., b-No hacks required., c-Justice delivered., d-Not on my watch." << endl;
//	cin >> input1;
//	if (input1 == 'd') //if input equals to a letter 
//		Ana++; // it add points to the character
//	else if (input1 == 'b')
//		Dva++;
//	else if (input1 == 'a')
//		Lucio++;
//	else if (input1 == 'c')
//		Soldier++;
//
//	al_clear_to_color(al_map_rgb(255, 255, 255));
//	image = al_load_bitmap("Jayr.png");//reload image
//	al_draw_bitmap(image, 0, 0, 0);//draw it to memory
//	al_flip_display();//draw to screen
//
//	char input2;//this isn't needed; you could just recycle input1!
//	cout << "What is your favorite color?" << endl;
//	cout << "a-green, b-black, c-blue, d-pink" << endl;
//	cin >> input2;
//	if (input2 == 'c')
//		Ana++;
//	else if (input2 == 'd')
//		Dva++;
//	else if (input2 == 'a')
//		Lucio++;
//	else if (input2 == 'b')
//		Soldier++;
//	char input3;
//
//	al_clear_to_color(al_map_rgb(255, 255, 255));
//	image = al_load_bitmap("goomba.png");//reload image
//	al_draw_bitmap(image, 0, 0, 0);//draw it to memory
//	al_flip_display();//draw to screen
//
//
//	cout << "Where would you like to live?" << endl;
//	cout << "a-Egypt, b-South Korea, c-Brazil, d-Where I am at home" << endl;
//	cin >> input3;
//	if (input3 == 'a')
//		Ana++;
//	else if (input3 == 'b')
//		Dva++;
//	else if (input3 == 'c')
//		Lucio++;
//	else if (input3 == 'd')
//		Soldier++;
//	char input4;
//	cout << "What would you describe yourself?" << endl;
//	cout << "a-independent, b-compassionate, c-knowledgeable, d-cheerful" << endl;
//	cin >> input4;
//	if (input4 == 'c')
//		Ana++;
//	else if (input4 == 'd')
//		Dva++;
//	else if (input4 == 'b')
//		Lucio++;
//	else if (input4 == 'a')
//		Soldier++;
//	char input5;
//	cout << "What's most important to you?" << endl;
//	cout << "a-video games, b-children, c-citizens/people, d-music" << endl;
//	cin >> input5;
//	if (input5 == 'b')
//		Ana++;
//	else if (input5 == 'a')
//		Dva++;
//	else if (input5 == 'd')
//		Lucio++;
//	else if (input5 == 'c')
//		Soldier++;
//	char input6;
//	cout << "What is your favorite food?" << endl;
//	cout << "a-hamburger, b-doritos and mountaindew, c-oatmeal, d-pizza" << endl;
//	cin >> input6;
//	if (input6 == 'c')
//		Ana++;
//	else if (input6 == 'b')
//		Dva++;
//	else if (input6 == 'd')
//		Lucio++;
//	else if (input6 == 'a')
//		Soldier++;
//	char input7;
//	cout << "What kind of ice cream do you like?" << endl;
//	cout << "a-chocolate, b-mint, c-strawberry, d-vanilla" << endl;
//	cin >> input7;
//	if (input7 == 'd')
//		Ana++;
//	else if (input7 == 'c')
//		Dva++;
//	else if (input7 == 'b')
//		Lucio++;
//	else if (input7 == 'a')
//		Soldier++;
//	char input8;
//	cout << "What music do you like to listen?" << endl;
//	cout << "a-classical, b-pop, c-rap, d-country" << endl;
//	cin >> input8;
//	if (input8 == 'a')
//		Ana++;
//	else if (input8 == 'b')
//		Dva++;
//	else if (input8 == 'c')
//		Lucio++;
//	else if (input8 == 'd')
//		Soldier++;
//	char input9;
//	cout << "What's your spirit animal?" << endl;
//	cout << "a-rabbit, b-dog, c-bird, d-frog" << endl;
//	cin >> input9;
//	if (input9 == 'c')
//		Ana++;
//	else if (input9 == 'a')
//		Dva++;
//	 else if (input9 == 'd')
//	  Lucio++;
//	 else if (input9 == 'b')
//	  Soldier++;
//	 char input10;
//	 cout << "What's your favorite social media?" << endl;
//	 cout << "a-snapchat, b-twitter, c-instagram, d-facebook" << endl;
//	 cin >> input10;
//	 if (input10 == 'b')
//	  Ana++;
//	 else if (input10 == 'd')
//	  Dva++;
//	 else if (input10 == 'c')
//	  Lucio++;
//	 else if (input10 == 'a')
//	  Soldier++;
//	 if (Ana > Dva && Ana > Lucio && Ana > Soldier) // find the largest #
//	  cout << "You are Ana." << endl; //print
//	 else if (Dva > Ana && Dva > Lucio && Dva > Soldier)
//	  cout << "You are D.va." << endl;
//	 else if (Lucio > Ana && Lucio > Dva && Lucio > Soldier)
//	  cout << "You are Lucio." << endl;
//	 else
//	  cout << "You are Solder 76." << endl;
//	
//	 al_destroy_display(display); //clear memory
//	}