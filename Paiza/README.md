# paiza's ToDoList  
## answer by Java

### 20200120 answeing paiza's question  
D142/D139/D133/D130/D109/D101/D086/D084/D071/D055/D035/D033/D029/D010/D005/D004/D003/D002  
C051/C016  
⇒Rank D→C, Rating 1439±100, max Rating 1588    
notice：  
・まず標準入力で詰まらないようにする  
・基本のアルゴリズムはメソッド化し蓄積しておくべき  
・HashMapなど基本文法で弱いところある⇒文法要復習

### 20200121 answeing paiza's question  
D120/D014/D024/D115/D047/D027/D012/D031  
C019/C056  
⇒Rank C, Rating 1470±100, max Rating 1588     
notice：  
・D問題はウォーミングアップ的に使う  

### 20200122 answeing paiza's question  
D038/D048/D077/D008/D009/D016/D110/D60  
C024  
⇒Rank C, Rating 1463±100, max Rating 1588      
notice：  
・ネトゲなので時間決めて行う  
・型変換、文字列操作  

### 20200123 answeing paiza's question  
D135/D095/D088/D052/D070/D019  
C074  
⇒Rank C, Rating 1452±100, max Rating 1588      
noteice：  
・入力が複数の文字列であるとき、文字列単位で出力してみるとよい。確認のため。  
⇒ Scanner sc = new java.util.Scanner(System.in);String S = sc.nextLine();System.out.println(S);  

### 20200124 answeing paiza's question  
D146/D102/D028    
C055/C067      
⇒Rank C, Rating 1416±100, max Rating 1588        
noteice：  
・標準入力で時間かかるのもったいない。  
・length()とlength  
・文字列比較はequals()  

### 20200125 answeing paiza's question  
D042/D081/D016      
C070/C034  
B021  
⇒Rank C→B, Rating 1391±100, max Rating 1588        
noteice：  
・char型からint型変換：Character.getNumericValue(c); //cはchar型の変数  

### 20200126 answeing paiza's question  
C049/C035
B021  
⇒Rank B, Rating 1391±100, max Rating 1588        
noteice：  
・String型を半角スペースで分割し配列化：String型変数.split(" ");  
・next()かnextLine()か:入力例において、  
1行あたり1単語与えられた場合next()、1行当たり半角スペースで区切り複数単語与えられた場合、nextLine()  
★配列の場合の標準入力→コピペで対応(時間節約のため)    
Scanner sc = new Scanner(System.in);  
int N = sc.nextInt();//与要素数  
String[] s = new String[N];  
for(int i = 0; i < N; i++) {//iの範囲は出題に合わせる  
    s[i] = sc.next();//あるいはnextLine()  
    System.out.println(s[i]);//入力例と同じか確認→確認後コメントアウト    
}  

### 20200127 answeing paiza's question  
D111/D112/D056/D123  
C061    
⇒Rank B, Rating 1400±100, max Rating 1588        
noteice：  
・わからない場合、具体例(入力例)を用いて流れを書いてみる    
→ 抽象化(標準入力の変数で置き換える)    
・数値型から文字列変換  
→ String.valueOf(int n)  

### 20200128 answeing paiza's question  
A031  
⇒Rank B, Rating 1396±100, max Rating 1588          
noteice：  
・Math.pow(基数, 乗数);  

### 20200129 answeing paiza's question  
C058/C048    
⇒Rank B, Rating 1479±100, max Rating 1588          
noteice：  
・AやB問題を解いてからC問題解くと解くスピードが上がることを実感  
→ レベルの高い問題を解く時間を作る。  

### 20200130 answeing paiza's question  
C022/C064      
⇒Rank B, Rating 1439±100, max Rating 1588            
noteice：    
・int n = Math.max(int a, int b); //aとbのmax値  
・int n = Math.min(int a, int b); //aとbのmin値  
・double n = Math.floor(double a); //aの小数切り捨て  
・double n = Math.ceil(double a); //aの小数切り上げ  
・テストケースが1,2個通らないことがある。原因としてはコードがきれいではない。  
コードをもっときれいに書けるように経験を積む。常にできるだけきれいなコードを書くよう意識。  
狙われそうなテストケースを自分で書いて試せればいい。テストの知識必要か。

### 20200131 answeing paiza's question     
D136/D126/D099  
⇒Rank B, Rating 1450±100, max Rating 1588              

### 20200201 answeing paiza's question     
D107/D137/D067  
⇒Rank B, Rating 1462±100, max Rating 1588   

### 20200202 answeing paiza's question     
C075      
⇒Rank B, Rating 1482±100, max Rating 1588   

### 20200203 answeing paiza's question     
A017          
⇒Rank B, Rating 1480±100, max Rating 1588   

### 20200204 answeing paiza's question     
D022            
⇒Rank B, Rating 1482±100, max Rating 1588   

### 20200205 answeing paiza's question     
D041              
⇒Rank B, Rating 1485±100, max Rating 1588   

### 20200206 answeing paiza's question     
D091  
⇒Rank B, Rating 1492±100, max Rating 1588 

### 20200207 answeing paiza's question     
D147   
⇒Rank B, Rating 1505±100, max Rating 1588   

### 20200208 answeing paiza's question     
D105     
⇒Rank B, Rating 1513±100, max Rating 1588   

### 20200209 answeing paiza's question     
D103       
⇒Rank B, Rating 1430±100, max Rating 1588   

### 20200210 answeing paiza's question     
D036, D132, D043, D032         
⇒Rank B, Rating 1473±100, max Rating 1588  
notice:  
s.replaceAll("変換前文字列",　"変換後文字列")　//文字列置き換えすべて(sはString型の変換する文字列)  

### 20200211 answeing paiza's question     
D118           
⇒Rank B, Rating 1478±100, max Rating 1588  

### 20200212 answeing paiza's question     
D104             
⇒Rank B, Rating 1487±100, max Rating 1588  

### 20200213 answeing paiza's question     
D121               
⇒Rank B, Rating 1493±100, max Rating 1588   
notice:
s.contains("文字列") //文字列を含む(boolean)  

### 20200214 answeing paiza's question     
D045                 
⇒Rank B, Rating 1494±100, max Rating 1588    

### 20200215 answeing paiza's question     
D057                 
⇒Rank B, Rating 1500±100, max Rating 1588    
