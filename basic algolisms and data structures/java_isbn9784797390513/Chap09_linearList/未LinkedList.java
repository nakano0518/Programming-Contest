//線形リストのクラスを定義

import.java.util.Comparator;

public class LinkedList<E> {//データの型Eはジェネリクス。利用する側で型指定できる。
    //フィールド
    class Node<E> {//クラスフィールド
        private E data;//データ(の参照)
        private Node<E> next;//後続ノードへの参照
        //コンストラクタ
        Node(E data, Node<E> next){
            this.data = data;
            this.next = next;
        }
    }
    private Node<E> head;//先頭ノードの参照
    private Node<E> crnt;//着目ノードの参照
    
    //コンストラクタ
    public LinkedList() {
        head = crnt = null;//先頭ノードの参照を空にしておく。着目ノードも空。
    }
    
    //ノードを線形探索
    public E search(E obj, Comparator<? super E> c) {
        Node<E> ptr = head;
        while(ptr != null){
            if(c.compare(obj, ptr.data) == 0) {
                crnt = ptr;
                return ptr.data;
            }
            ptr = ptr.next;
        }
        return null;
    }
    
    //先頭にノード挿入
    public void addFirst(E obj) {
        Node<E> ptr = head;//挿入前の先頭ノード(Aとする)を参照するポインタをptrに保存
        //挿入するノード(G)：ノードのデータはobj,後続ポインタの参照はptr(ノードA)
        //生成したノード(G)を参照するようにheadを更新
        head = crnt = new Node<E>(obj, ptr);
    }
    
    //末尾にノードを挿入
    public void addLast(E obj) {
        if(head == null) {//リストが空である場合
            addFirst(obj);//先頭に挿入
        }else {
            Node<E> ptr = head;
            while(ptr.next !== null) {
                ptr = ptr.next;
            }//while文終了時、ptrは末端ノードを参照する
            ptr.next = crnt = new Node<E>(obj, null);
        }
    }
    
    //先端ノードの削除
    public void removeFirst() {
        if(head != null) {
            head = crnt = head.next;
        }
    }
    
    //末尾ノードの削除
    pubic void removeLast() {
        if(head != null) {
            
        }
    }
}