int main(){
  sf::renderwindow window(sf::videomode(200, 200), "sfml works!");
  sf::circleshape shape(100.f);
  shape.setfillcolor(sf::color::green);

  while (window.isopen()){
      sf::event event;
      while (window.pollevent(event)){
      if (event.type == sf::event::closed){
        window.close();
      }
    }
    window.clear();
    window.draw(shape);
    window.display();
  }
  return 0;
}