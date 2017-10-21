import re
f = open("1017.txt")             # 返回一个文件对象
output = open('output.txt','w')
line = f.readline()             # 调用文件的 readline()方法
while line:
    p1 = re.compile(r'(?<![\.\d])(?:\d{1,3}\.){3}\d{1,3}(?![\.\d])');
    p2 = re.compile(r'Internet Protocol Version');
    if(p1.search(line)):
        if(p2.search(line)):
            pass
        else:
            output.write(line),
            print (line,end='');
      #  print (line),                 # 后面跟 ',' 将忽略换行符
    #print(line, end = '')　　　# 在 Python 3中使用
    line = f.readline()
output.close()
f.close()
