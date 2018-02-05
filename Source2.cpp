//#include <stdio.h>
//#include <allegro5/allegro.h>
//#include<allegro5/allegro_primitives.h>
//
//const float FPS = 60;
//const int SCREEN_W = 640;
//const int SCREEN_H = 480;
//const int BOUNCER_SIZE = 32;
//
//int main() {
//	ALLEGRO_DISPLAY *display = NULL;
//	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
//	ALLEGRO_TIMER *timer = NULL;
//	ALLEGRO_BITMAP *bouncer = NULL;
//	ALLEGRO_BITMAP *bouncer2 = NULL;
//	//position of first bouncer
//	float bouncer_x = SCREEN_W / 2.0 - BOUNCER_SIZE / 2.0;
//	float bouncer_y = SCREEN_H / 2.0 - BOUNCER_SIZE / 2.0;
//	float bouncer_dx = -4.0, bouncer_dy = 4.0;
//
//	//position of second bouncer
//	float bouncer2_x = 50;
//	float bouncer2_y = 10;
//	float bouncer2_dx = -4.0, bouncer2_dy = 4.0;
//	bool redraw = true;
//
//	if (!al_init()) {
//		fprintf(stderr, "failed to initialize allegro!\n");
//		return -1;
//	}
//	al_init_primitives_addon();
//	timer = al_create_timer(1.0 / FPS);
//	if (!timer) {
//		fprintf(stderr, "failed to create timer!\n");
//		return -1;
//	}
//
//	display = al_create_display(SCREEN_W, SCREEN_H);
//	if (!display) {
//		fprintf(stderr, "failed to create display!\n");
//		al_destroy_timer(timer);
//		return -1;
//	}
//
//	bouncer = al_create_bitmap(BOUNCER_SIZE, BOUNCER_SIZE);
//	if (!bouncer) {
//		fprintf(stderr, "failed to create bouncer bitmap!\n");
//		al_destroy_display(display);
//		al_destroy_timer(timer);
//		return -1;
//	}
//	bouncer2 = al_create_bitmap(BOUNCER_SIZE, BOUNCER_SIZE);
//	al_set_target_bitmap(bouncer);
//
//	al_clear_to_color(al_map_rgb(255, 0, 255));
//
//	al_set_target_bitmap(bouncer2);
//
//	al_clear_to_color(al_map_rgb(255, 200, 255));
//
//	al_set_target_bitmap(al_get_backbuffer(display));
//
//	event_queue = al_create_event_queue();
//	if (!event_queue) {
//		fprintf(stderr, "failed to create event_queue!\n");
//		al_destroy_bitmap(bouncer);
//		al_destroy_display(display);
//		al_destroy_timer(timer);
//		return -1;
//	}
//
//	al_register_event_source(event_queue, al_get_display_event_source(display));
//
//	al_register_event_source(event_queue, al_get_timer_event_source(timer));
//
//	al_clear_to_color(al_map_rgb(0, 0, 0));
//
//	al_flip_display();
//
//	al_start_timer(timer);
//
//	while (1)
//	{
//		ALLEGRO_EVENT ev;
//		al_wait_for_event(event_queue, &ev);
//
//		if (ev.type == ALLEGRO_EVENT_TIMER) {
//			if (bouncer_x < 0 || bouncer_x > SCREEN_W - BOUNCER_SIZE) {
//				bouncer_dx = -bouncer_dx;
//			}
//
//			if (bouncer_y < 0 || bouncer_y > SCREEN_H - BOUNCER_SIZE) {
//				bouncer_dy = -bouncer_dy;
//			}
//
//			bouncer_x += bouncer_dx;
//			bouncer_y += bouncer_dy;
//
//			if (bouncer2_x < 0 || bouncer2_x > SCREEN_W - BOUNCER_SIZE) {
//				bouncer2_dx = -bouncer2_dx;
//			}
//
//			if (bouncer2_y < 0 || bouncer2_y > SCREEN_H - BOUNCER_SIZE) {
//				bouncer2_dy = -bouncer2_dy;
//			}
//
//			bouncer2_x += bouncer2_dx;
//			bouncer2_y += bouncer2_dy;
//
//			redraw = true;
//		}
//		else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
//			break;
//		}
//
//		if (redraw && al_is_event_queue_empty(event_queue)) {
//			redraw = false;
//
//			//al_clear_to_color(al_map_rgb(0, 0, 0));
//
//			//al_draw_bitmap(bouncer, bouncer_x, bouncer_y, 0);
//			//al_draw_bitmap(bouncer2, bouncer2_x, bouncer2_y, 0);
//
//			al_draw_filled_circle(bouncer_x, bouncer_y, 20, al_map_rgb(rand(), 0, 0));
//			al_draw_filled_circle(bouncer2_x, bouncer_y, 20, al_map_rgb(rand(), 50, 50));
//			//al_draw_filled_circle(bouncer2_x, bouncer2_y, 20, al_map_rgb(50, rand(), 50));
//			//al_draw_filled_circle(bouncer_x, bouncer2_y, 20, al_map_rgb(50, 50, rand()));
//			al_flip_display();
//		}
//	}
//
//	al_destroy_bitmap(bouncer);
//	al_destroy_timer(timer);
//	al_destroy_display(display);
//	al_destroy_event_queue(event_queue);
//
//	return 0;
//}