# turbo-eureka
Verklegt námskeið 1

### Hugmynd að sauðakóða
class Record {
    private string Name;
    private string OtherName;
    
    public construct(string Name_, string OtherName_) {
        this.Name = Name_;
        this.OtherName = OtherName_;
    }   
    
}   

class RecordManager {
    private Vector<Record> ListOfRecords;

    public construct() {
        this.ListOfRecords = new List<Record>();
    }
    
    public AddNew(Name, OtherName) {
        Record rec = new Record(Name, OtherName);
        for (Record tmp_rec in this.ListOfRecords) {
            // úps, það er nú þegar til í ListOfRecords
            if (tmp_rec == rec) {
                return false;
            }
        }
        this.ListOfRecords.add(rec);
        return true;
    }
}   

//Notkun

int main() {
    RecordManager rm = new RecordManager();
    int action;

    while(;;) {
        cout >> "1. skrá inn nýja færslu, 2. lista færslur, 3. lista færslur eftir nafni" >> endl;
        cin >> action;

        if (action == 1) {
            cout >> "Nafn : ";
            cin >> tmp_name;
            cout >> "Nafn 2: ";
            cin >> tmp_othername;
            bool ret = rm.AddNew(tmp_name, tmp_othername);
            if (!ret) { 
                cout << "færsla nú þegar til..";
            }
            else {
                cout << "Færsla skráð.";
            }
        }
    }
}

##Verkefnalýsing

 
Skil 1

Í þessum hluta skal skrifa console forrit með eftirfarandi kröfur til virkni:

(10%) Notandi skal geta skráð þekktar persónur úr sögu tölvunarfræðinnar. Að lágmarki skal vera hægt að skrá eftirfarandi gögn um sérhverja persónu: nafn, kyn, fæðingarár og dánarár (ef við á).
(10%) Forritið skal geta birt lista af þeim persónum sem skráðar hafa verið, þannig að öll gögn um persónurnar birtist á notendavænan hátt.
(10%) Forritið skal geyma listann, þannig að hann týnist ekki þó forritinu sé lokað.
(10%) Hægt skal vera að leita í listanum.
(10%) Notandi ætti að geta ráðið því hvernig listinn er raðaður.
Þá eru gerðar eftirfarandi kröfur að auki:

(10%) Kóðinn skal vera lesanlegur, vel formaður, vel skjalaður, og viðhaldanlegur.
(10%) Kóðinn skal hýstur með Git (GitHub, Bitbucket, etc.) Ath. að dæmatímakennarar/skósveinar þurfa að hafa aðgang að git geymslunni frá byrjun.
(10%) Þátttaka hópmeðlima skal vera eins jöfn og frekast er unnt.
(20%) Hópar hafa svigrúm til að bæta við uppgefnar kröfur, einnig er hægt að vinna sér inn stig með sérlega vel útfærðum lausnum.
Nota skal Qt Creator við útfærslu. Nota skal lagskipta högun við útfærslu kerfisins. Misbrestur á því gæti þýtt umtalsverðan frádrátt frá einkunn.

Skila skal lokaútgáfu kóðans í einni .zip/.rar skrá, ásamt upplýsingum um það hvar kóðann er að finna, þ.e. á GitHub/BitBucket etc. Þá skal fylgja með keyranleg útgáfa kerfisins, ásamt gagnaskrá með a.m.k. 10 færslum.
