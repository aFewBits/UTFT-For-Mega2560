case ILI9327:
#ifdef ILI9327_8BIT
		LCD_Write_COM(0x2a);
  	LCD_Write_DATA(x1>>8);
  	LCD_Write_DATA(x1);
  	LCD_Write_DATA(x2>>8);
  	LCD_Write_DATA(x2);
  	LCD_Write_COM(0x2b);
  	LCD_Write_DATA(y1>>8);
  	LCD_Write_DATA(y1);
  	LCD_Write_DATA(y2>>8);
  	LCD_Write_DATA(y2);
  	LCD_Write_COM(0x2c); 							 
#else
    LCD_Write_COM(0x2a);
  	LCD_Write_DATA(0x00,x1>>8);
  	LCD_Write_DATA(0x00,x1);
  	LCD_Write_DATA(0x00,x2>>8);
  	LCD_Write_DATA(0x00,x2);
  	LCD_Write_COM(0x2b);
  	LCD_Write_DATA(0x00,y1>>8);
  	LCD_Write_DATA(0x00,y1);
  	LCD_Write_DATA(0x00,y2>>8);
  	LCD_Write_DATA(0x00,y2);
  	LCD_Write_COM(0x2c); 							 
#endif
	break;
