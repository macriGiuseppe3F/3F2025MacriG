class Nodo{
 int val;
 Nodo next;

Nodo(int v){
    val=v;
    next=null;
}
}
public class Lista{
   Nodo head;
}

public void inserisci(int v){
    Nodo nuovo=new Nodo(v);
    nuovo.next=head;
    head=nuovo;
}

public void stampa(){
    Nodo curr=head;
    while(curr!=null){
        System.out.println(curr.val+" -> ");
        curr=curr.next;
    }
    System.out.println("Null");
}

public void rimuoviDuplcati(){
    Nodo curr=head;
    
    while(curr!=null){
        Nodo tmp=curr;

        while(tmp.next!=null){
            if(tmp.next.val==curr.val){
                tmp.next=tmp.next.next;
            }else{
                tmp=tmp.next;
            }
        }
        curr=curr.next;
    }
}


public static void main (String args[]){
    1.
}