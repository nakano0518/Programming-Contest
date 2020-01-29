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


