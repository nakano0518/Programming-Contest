//チェイン法によるハッシュ

public class ChainHash<K, V> {
    //チェインハッシュを構成するノード
    class Node<K, V> {
        private K key;
        private V data;
        private Node<K, V> next;    
        
        Node(K key, V data, Node<K, V> next) {
            this.key = key;
            this.data = data;
            this.next = next;
        }
        
        K getkey(){
            return key;
        }
        
        V getValue() {
            return data;
        }
        
        public int hashCode() {
            return key.hashCode();
        }
        
        
        //チェインハッシュクラスのフィールド、コンストラクタおよびメソッド
        //フィールド
        private int size;//ハッシュ表の大きさ(要素数)
        private Node<K, V>[]  table;//ハッシュ表
        //コンストラクタ
        public ChainHash(int capacity) {
            try{//空のハッシュ表を生成
                table = new Node[capacity];
                this.size = capacity;
            }catch(OutOfMemoryError e){//記憶域の確保に失敗した場合
                this.size = 0;
            }
        }
        //ハッシュ値を求めるメソッド
        public int hashValue(Object key) {
            return key.hashCode() % size;
        }
        //キー値keyを持つ要素を探索し、データを返却
        public V search(K key) {
            int hash = hashValue(key);//探索するkey値をハッシュ値に変換
            Node<K, V> p = table[hash];//ハッシュ値をインデックスとするバケット。
            while(p != null) {
                if(p.getkey().equals(key)) {
                    return p.getValue();//探索成功
                }
                p = p.next;//後続ノードへ移動
            }
            return null;//探索失敗
        }
        //キー値key・データdataを持つ要素の追加
        public int add(K key, V data) {
            int hash = hashValue(key);
            Node<K, V> p = table[hash];
            //キー値と同じ値が既に存在するか線形探索
            while(p != null) {
                if(p.getKey().equals(key)) {
                    return 1;//このキーは登録済み
                }
                p = p.next;
            }
            //キー値と同じ値が既に存在しなければ、リストの先頭位置にノード挿入
            Node<K, V> temp = new Node<K, V>(key, data, table[hash]);
            table[hash] = temp;
            return 0;
            
            //!途中!
            
        }
    }
    
    
    
}