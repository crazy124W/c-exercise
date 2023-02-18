# GitHub无法访问、443 Operation timed out的解决办法
## 打开梯子，在网页上可以正常访问github，但是在git环境中无法访问，报443 Operation timed out错误

## 本次在win11环境中主要采用修改hosts文件的方式解决
- 1.打开hosts文件，路径为C:\Windows\System32\drivers\etc\hosts
- 2.打开https://github.com.ipaddress.com/获取ip地址，在hosts文件中添加 IP github.com 
- 3.打开https://fastly.net.ipaddress.com/github.global.ssl.fastly.net#ipinfo 获取ip 地址，在hosts文件中添加 IP github.global.ssl.fastly.net
- 4.打开https://github.com.ipaddress.com/assets-cdn.github.com 获取4个ip 地址,在hosts文件中添加 IP assets-cdn.github.com
- 5.保存hosts文件，重启git环境，此时就可以在git环境中正常访问github.