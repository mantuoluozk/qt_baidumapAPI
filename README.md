# qt_baidumapAPI
在qt creator5中使用百度地图api  
* 新建一个窗体工程，继承自QMainWindow,z用Qt界面设计器打开界面文件，在界面上放入一个QWebView控件，用来展示html界面  
* 在工程文件中.pro中加入webkitwidgets,```QT += webkitwidgets```  
* 单独写一个html文件，里面是调用百度地图API的语句及页面展示  
* 在mainwindow.cpp中加入  
```QUrl url("file:/C:/Users/pc/Desktop/qt_baidumapAPI/myweb.html");```写入html的地址  
```ui->webView->setUrl(url);```
