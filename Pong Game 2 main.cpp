#include <raylib.h>
#include <string>
struct Paddle
{
	float x, y;
	float speed;
	float width, height;
	Rectangle GetRectangle()
	{
		return Rectangle { x - width / 2, y - height / 2,300,10};
	}
	void Draw() {
		DrawRectangleRec(GetRectangle(), WHITE);
	}
};
struct Ball 
{
	float x, y;
	float speedX, speedY;
	float Radius;
	void Draw()
	{
		DrawCircle(x, y, Radius, WHITE);
	}
};
struct Brick
{
	float x, y;
	float width, height;
	Rectangle GetRectangle()
	{
		return Rectangle{ x - width / 2, y - height / 2,width,height };
	}
	void Draw() {
		DrawRectangleRec(GetRectangle(), RED);
	}
};
int main() {

		InitWindow(800, 600, "Pong Game 2");
		SetWindowState(FLAG_VSYNC_HINT);
		Paddle bottom_paddle;
		Paddle middle_paddle;
		Brick brick1;
		Ball ball;
		Brick brick2;
		Brick brick3;
		Brick brick4;
		Brick brick5;
		Brick brick6;
		Brick brick7;
		Brick brick8;
		Brick brick9;
		Brick brick10;
		Brick brick11;
		Brick brick12;
		Brick brick13;
		Brick brick14;
		Brick brick15;
		Brick brick16;
		Brick brick17;
		Brick brick18;
		Brick brick19;
		Brick brick20;
		Brick brick21;
		Brick brick22;
		Brick brick23;
		Brick brick24;
		Brick brick25;
		Brick brick26;
		const char* WinorLoseText = nullptr;
		ball.x = GetScreenWidth() / 2.0f;
		ball.y = GetScreenHeight() / 2.0f;
		ball.Radius = 5;
		ball.speedY = 300;
		ball.speedX = 300;

		bottom_paddle.x = 500;
		bottom_paddle.y = 550;
		bottom_paddle.width = 300;
		bottom_paddle.height = 10;
		bottom_paddle.speed = 500;

		brick1.x = 25;
		brick1.y = 10;
		brick1.width = 50;
		brick1.height = 10;
		int brick1Case = 0;

		brick2.x = 90;
		brick2.y = 10;
		brick2.width = 50;
		brick2.height = 10;
		int brick2Case = 0;

		brick3.x = 155;
		brick3.y = 10;
		brick3.width = 50;
		brick3.height = 10;
		int brick3Case = 0;

		brick4.x = 220;
		brick4.y = 10;
		brick4.width = 50;
		brick4.height = 10;
		int brick4Case = 0;

		brick5.x = 285;
		brick5.y = 10;
		brick5.width = 50;
		brick5.height = 10;
		int brick5Case = 0;

		brick6.x = 350;
		brick6.y = 10;
		brick6.width = 50;
		brick6.height = 10;
		int brick6Case = 0;

		brick7.x = 415;
		brick7.y = 10;
		brick7.width = 50;
		brick7.height = 10;
		int brick7Case = 0;

		brick8.x = 480;
		brick8.y = 10;
		brick8.width = 50;
		brick8.height = 10;
		int brick8Case = 0;
		
		brick9.x = 545;
		brick9.y = 10;
		brick9.width = 50;
		brick9.height = 10;
		int brick9Case = 0;

		brick10.x = 610;
		brick10.y = 10;
		brick10.width = 50;
		brick10.height = 10;
		int brick10Case = 0;

		brick11.x = 675;
		brick11 .y = 10;
		brick11.width = 50;
		brick11.height = 10;
		int brick11Case = 0;

		brick12.x = 740;
		brick12.y = 10;
		brick12.width = 50;
		brick12.height = 10;
		int brick12Case = 0;

		brick13.x = 805;
		brick13.y = 10;
		brick13.width = 50;
		brick13.height = 10;
		int brick13Case = 0;

		brick14.x = 25;
		brick14.y = 40;
		brick14.width = 50;
		brick14.height = 10;
		int brick14Case = 0;
		
		brick15.x = 90;
		brick15.y = 40;
		brick15.width = 50;
		brick15.height = 10;
		int brick15Case = 0;

		brick16.x = 155;
		brick16.y = 40;
		brick16.width = 50;
		brick16.height = 10;
		int brick16Case = 0;

		brick17.x = 220;
		brick17.y = 40;
		brick17.width = 50;
		brick17.height = 10;
		int brick17Case = 0;

		brick18.x = 285;
		brick18.y = 40;
		brick18.width = 50;
		brick18.height = 10;
		int brick18Case = 0;
		
		brick19.x = 350;
		brick19.y = 40;
		brick19.width = 50;
		brick19.height = 10;
		int brick19Case = 0;

		brick20.x = 415;
		brick20.y = 40;
		brick20.width = 50;
		brick20.height = 10;
		int brick20Case = 0;

		brick21.x = 480;
		brick21.y = 40;
		brick21.width = 50;
		brick21.height = 10;
		int brick21Case = 0;\

		brick22.x = 545;
		brick22.y = 40;
		brick22.width = 50;
		brick22.height = 10;
		int brick22Case = 0;

		brick23.x = 610;
		brick23.y = 40;
		brick23.width = 50;
		brick23.height = 10;
		int brick23Case = 0;

		brick24.x = 675;
		brick24.y = 40;
		brick24.width = 50;
		brick24.height = 10;
		int brick24Case = 0;

		brick25.x = 740;
		brick25.y = 40;
		brick25.width = 50;
		brick25.height = 10;
		int brick25Case = 0;

		brick26.x = 805;
		brick26.y = 40;
		brick26.width = 50;
		brick26.height = 10;
		int brick26Case = 0;

		middle_paddle.x = GetScreenWidth()/2;
		middle_paddle.y = (GetScreenHeight()/2) - 20;
		middle_paddle.width = 300;
		middle_paddle.height = 10;
		middle_paddle.speed = 200;

		while (!WindowShouldClose()) 
		{
			ball.x += ball.speedX * GetFrameTime();
			ball.y += ball.speedY * GetFrameTime();
			middle_paddle.x += middle_paddle.speed * GetFrameTime();

			if (middle_paddle.x > GetScreenWidth())
			{
				middle_paddle.speed *= -1;
			}
			if (middle_paddle.x < 0)
			{
				middle_paddle.speed *= -1;
			}
			if (IsKeyDown(KEY_D))
			{
				bottom_paddle.x += bottom_paddle.speed * GetFrameTime();
			}
			if (IsKeyDown(KEY_A))
			{
				bottom_paddle.x -= bottom_paddle.speed * GetFrameTime();
			}
			
			BeginDrawing();
			ClearBackground(BLACK);
			EndDrawing();
			DrawFPS(720, 10);
			bottom_paddle.Draw();
			ball.Draw();
			middle_paddle.Draw();
			if (brick1Case == 0)
			{
				brick1.Draw();
			}
			if (brick2Case == 0)
			{
				brick2.Draw();
			}
			if (brick3Case == 0) {
				brick3.Draw();
			}
			if (brick4Case == 0) 
			{
				brick4.Draw();
			}
			if (brick5Case == 0)
			{
				brick5.Draw();
			}
			if (brick6Case == 0)
			{
				brick6.Draw();
			}
			if (brick7Case == 0)
			{
				brick7.Draw();
			}
			if (brick8Case == 0)
			{
				brick8.Draw();
			}
			if (brick9Case == 0)
			{
				brick9.Draw();
			}
			if (brick10Case == 0)
			{
				brick10.Draw();
			}
			if (brick11Case == 0)
			{
				brick11.Draw();
			}
			if (brick12Case == 0)
			{
				brick12.Draw();
			}
			if (brick13Case == 0)
			{
				brick13.Draw();
			}
			if (brick14Case == 0)
			{
				brick14.Draw();
			}
			if (brick15Case == 0) {
				brick15.Draw();
			}
			if (brick16Case == 0) {
				brick16.Draw();
			}
			if (brick17Case == 0) {
				brick17.Draw();
			}
			if (brick18Case == 0) {
				brick18.Draw();
			}
			if (brick19Case == 0) {
				brick19.Draw();
			}
			if (brick20Case == 0) {
				brick20.Draw();
			}
			if (brick21Case == 0) {
				brick21.Draw();
			}
			if (brick22Case == 0) {
				brick22.Draw();
			}
			if (brick23Case == 0) {
				brick23.Draw();
			}
			if (brick24Case == 0) {
				brick24.Draw();
			}
			if (brick25Case == 0) {
				brick25.Draw();
			}
			if (brick26Case == 0) {
				brick26.Draw();
			}
			if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick1.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick1Case = 1;
				brick1.width = 0;
				brick1.height = 0;
			}
			if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, middle_paddle.GetRectangle()))
			{
				ball.speedY *= -1;
			}
			if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick2.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick2Case = 1;
				brick2.width = 0;
				brick2.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick3.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick3Case = 1;
				brick3.width = 0;
				brick3.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick4.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick4Case = 1;
				brick4.width = 0;
				brick4.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick5.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick5Case = 1;
				brick5.width = 0;
				brick5.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick6.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick6Case = 1;
				brick6.width = 0;
				brick6.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick7.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick7Case = 1;
				brick7.width = 0;
				brick7.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick8.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick8Case = 1;
				brick8.width = 0;
				brick8.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick9.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick9Case = 1;
				brick9.width = 0;
				brick9.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick10.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick10Case = 1;
				brick10.width = 0;
				brick10.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick11.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick11Case = 1;
				brick11.width = 0;
				brick11.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick12.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick12Case = 1;
				brick12.width = 0;
				brick12.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick13.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick13Case = 1;
				brick13.width = 0;
				brick13.height = 0;
			}
			if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick14.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick14Case = 1;
				brick14.width = 0;
				brick14.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick15.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick15Case = 1;
				brick15.width = 0;
				brick15.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick16.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick16Case = 1;
				brick16.width = 0;
				brick16.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick17.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick17Case = 1;
				brick17.width = 0;
				brick17.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick18.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick18Case = 1;
				brick18.width = 0;
				brick18.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick19.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick19Case = 1;
				brick19.width = 0;
				brick19.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick20.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick20Case = 1;
				brick20.width = 0;
				brick20.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick21.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick21Case = 1;
				brick21.width = 0;
				brick21.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick22.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick22Case = 1;
				brick22.width = 0;
				brick22.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick23.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick23Case = 1;
				brick23.width = 0;
				brick23.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick24.GetRectangle()))
			{
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick24Case = 1;
				brick24.width = 0;
				brick24.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick25.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick25Case = 1;
				brick25.width = 0;
				brick25.height = 0;
			}if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, brick26.GetRectangle()))
			{
				
				ball.speedY *= -1;
				//(ball.y - brick1.y) / (brick1.height / 2);
				brick26Case = 1;
				brick26.width = 0;
				brick26.height = 0;
			}

			if (CheckCollisionCircleRec(Vector2{ ball.x,ball.y }, ball.Radius, bottom_paddle.GetRectangle()))
			{
				ball.speedY *= -1;

			}
			if (ball.x > GetScreenWidth())
			{
				ball.speedX *= -1;
			}
			if (ball.x < 0)
			{
				ball.speedX *= -1;
			}
			if (ball.y < 0)
			{
				ball.speedY *= -1;
			}
			if (ball.y > GetScreenHeight() && WinorLoseText != " You Win") {
				WinorLoseText = " You Lose";
				int textwidth = MeasureText(WinorLoseText, 60);
				DrawText(WinorLoseText, GetScreenWidth() / 2 - textwidth / 2, GetScreenHeight() / 2 - 30, 60, SKYBLUE);
			}
			if (brick1Case == 1 && brick2Case == 1 && brick3Case == 1 && brick4Case == 1 && brick5Case == 1 && brick6Case == 1 && brick7Case == 1 && brick8Case == 1 && brick9Case == 1 && brick10Case == 1 && brick11Case == 1 && brick12Case == 1 && brick13Case == 1 && brick14Case == 1 && brick15Case == 1 && brick16Case == 1 && brick17Case == 1 && brick18Case == 1 && brick19Case == 1 && brick20Case == 1 && brick21Case == 1 && brick22Case == 1 && brick23Case == 1 && brick24Case == 1 && brick25Case == 1 && brick26Case == 1)
			{
				WinorLoseText = " You Win";
				int textwidth = MeasureText(WinorLoseText, 60);
				DrawText(WinorLoseText, GetScreenWidth() / 2 - textwidth / 2, GetScreenHeight() / 2 - 30, 60, SKYBLUE);
			}
			if (WinorLoseText && IsKeyPressed(KEY_SPACE)) {
				ball.x = GetScreenWidth() / 2.0f;
				ball.y = GetScreenHeight() / 2.0f;
				ball.Radius = 5;
				ball.speedY = 300;
				ball.speedX = 300;
			}
		}
		CloseWindow();
	return 0;
}