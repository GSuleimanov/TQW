## Напоминание

  ![skin_preview](https://raw.githubusercontent.com/Mahamadovich/TQW/master/Installation/main.png)

  Обложка для рабочего стола со стильными часами, временем молитв, временной гистограммой загруженности процессора и сборником хадисов.

### Ссылка для скачивания

  [Загрузить обложку TQW](https://github.com/Mahamadovich/TQW/releases/latest/download/TQW.rmskin)

### Как пользоваться

  Для работы обложки вам понадобится:
  1. [Установить Rainmeter](https://www.rainmeter.net/) (программа, позволяющая применять обложки для рабочего стола)
  2. Установить TQW

### Время молитв

  *Rainmeter* не предлагает простого способа определения местоположения, поэтому координаты придётся ввести вручную:

```praytimes.ini
...
[Variables]
lat=45.000    // Широта - достаём из гугл/яндекс карты
lon=45.000    // Долгота - достаём из гугл/яндекс карты
gmt=180       // Часовой пояс (180 это +3 часа по МСК, т.е. +1 час = 60. Пример: +5 часов = 300; -5 часов = -300)
method=3      // Метод расчёта времени молитв:
// University of Islamic Sciences, Karachi: 1
// ISNA: 2
// Muslim World League: 3
// Umm Al Qura: 4
// Egyptian Authority of Survey: 5
// Мне ни один с точностью не подошел, лишь приблизительно. 
// В планах - возможность ручной корректировки.
...
```

### 99 имен

  В удобном для запоминания формате.

![skin_preview_names](https://raw.githubusercontent.com/Mahamadovich/TQW/master/Installation/names.gif)

### Сахих аль-Бухари

  Сборник достоверных хадисов всегда под рукой.

![skin_preview_hadith](https://raw.githubusercontent.com/Mahamadovich/TQW/master/Installation/hadis.gif)
