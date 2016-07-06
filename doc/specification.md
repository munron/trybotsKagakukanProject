# もるペンの詳細仕様  

##簡易スペック表
| 機能 | 説明 | 
|:-----------:|:------------:|
| 重量      |        ? |
| 全長 | ? |
| 進行方向     |　前進、左右旋回 |
| 旋回半径       | ? |
| 通信         | 有線 |
| 電源 |       有線 |
| 制御装置  |     arduino |
| 駆動系 | Tamiya 540モーター(dc) |
| 防水性能 | [詳細](## 防水性能仕様) |


# 機体構成部品

##駆動系仕様   
[タミヤ540モーター](http://www.tamiya.com/japan/robocon/robo_parts/g_motor/g_motor_zumen.htm)  
ギアヘッドにはk150(減速比150)を採用している  
![タミヤ540モータ](http://www.tamiya.com/japan/robocon/robo_parts/g_motor/g_motor540.jpg)  

|   |   |  
|---|---|  
| 最大効率時のトルク | 24kg・cm |
| 無負荷時回転数 | 110rpm |
| 電源定格 | 7.2V |


|   |   |   |   |
|---|---|---|---|  
| ![](https://github.com/muro-tani/trybotsKagakukanProject/blob/master/picture/P_20160705_225120.jpg)| ![](https://github.com/muro-tani/trybotsKagakukanProject/blob/master/picture/P_20160705_225217.jpg) | ![](https://github.com/muro-tani/trybotsKagakukanProject/blob/master/picture/P_20160705_225143.jpg) | ![](https://github.com/muro-tani/trybotsKagakukanProject/blob/master/picture/P_20160705_225229.jpg) 

モーターには防水加工を施している。  
アクリルパイプと塩ビキャップでモーターを覆っている。  
アクリルパイプと塩ビキャップの接合には液状ガスケット、アクリルパイプとアクリル板の接着には  
アクリサンデーを使用している。  
回転軸の防水にはOリング方式を採用し内径6mmのOリングを利用している。  
電源に接続するためのケーブル及び防水コネクタが設けられている。

## 機体構造仕様  

## 羽ばたき機構仕様  

## フリッパー仕様  

## 足仕様  

## 制御系統仕様  

## 防水性能仕様

本製品は電源及び制御系統をすべて地上に設置することでモーターのみを防水加工する仕様となっている。  
モーターは防水加工してあるが水中に長時間沈めた時の動作は保証できない。  
また本製品は潜水機能は有しておらず水面に浮かべた状態での動作を想定して作られている。  
**無理に本製品を水中に沈めた状態を長時間続けるとモーターの防水性能が損なわれる危険性がある。**  
