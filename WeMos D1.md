WeMos d1 某宝上最便宜的esp8266的Arduino支持安装教程 （本教程能解决官方下不动的问题~）
虽然某宝买了这个板子卖家会提供免安装版本的Arduino IDE ，但是对于已经装了很多库很多板子支持的我可不想因为一个WeMos d1 就把我用了n年的Arduino给卸载重装。所以，这个教程出现了。

第一步：打开Arduino，选择“文件/首选项”


第二步：http://arduino.esp8266.com/stable/package_esp8266com_index.json
这个json地址键入下图所示开发板网址管理器的位置，点击“好”



第三步：到开发板管理器安装

在开发板管理器搜索8266就能找到要的支持文件了





第四步：安装就完事了

什么？你发现下不动？ 别慌这有我已经下载好的支持文件

百度网盘链接：https://pan.baidu.com/s/1q2-czwNR5xhUaqP12dNqKw

提取码：p26y

用网盘下载好文件后把文件解压到

C:\Users\你电脑的用户名\AppData\Local\Arduino15\staging\packages

解压好之后重复上面四步就会发现Arduino认为它已经把东西下载好了直接开始安装，然后就搞定了。

什么？你觉得百度网盘还是太慢？ 还有个方法

用浏览器访问这个网址

http://arduino.esp8266.com/stable/package_esp8266com_index.json

找到你要下载的文件 url后面的就是下载链接

用迅雷添加下载

把文件下载好放到

C:\Users\你电脑的用户名\AppData\Local\Arduino15\staging\packages

接着重复上面四步就好

举个例子如果要安装2.4.0版本的支持需要下载一个支持文件和三个安装工具分别如下图所示

————————————————
版权声明：本文为CSDN博主「超级大砖家」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/kirito____/article/details/86665625
