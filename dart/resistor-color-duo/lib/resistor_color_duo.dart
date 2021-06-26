class ResistorColorDuo {

final colors = [
  'black',
  'brown',
  'red',
  'orange',
  'yellow',
  'green',
  'blue',
  'violet',
  'grey',
  'white',
  ];

  int value(List<String> colors){
    return (this.colors.indexOf(colors[0])) * 10 + (this.colors.indexOf(colors[1]));
  }
}
