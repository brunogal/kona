extern K KFIXED;
K cd(K a);
void finally();
extern I PG;
#if defined(DEBUG)
extern V krec[1000000];
extern I kreci;
#endif
I lsz(I k);
I repool(V v,I r);
#if defined(DEBUG)
void tf(N n);
#endif
I attend();
void boilerplate();
I kinit();
int main(int argc,S *argv);
K show(K a);
extern S vm_s[];
extern S vd_s[];
extern S vt_s[];
K _i();
void printAtDepth(V u,K a,I d,I x,I vdep,I b);
K kapn(K *a,V v,I n);
I args(int n,S *v);
int splitprint(V u,const char *s,...);
I VA(V p);
I valence(V p);
I adverbClass(V p);
extern I vn_ct,vm_ct,vd_ct,vt_ct;
extern V vt_[];
extern V vd_[];
extern V vm_[];
I sva(V p);
I charsAdverb(C c);
C adverbsChar(V p);
I charsVerb(C c);
I isCharVerb(C c);
C verbsChar(V p);
I charpos(S s,C c);
I stringHasChar(S s,C c);
extern S IFP[3];
extern S IFS[3];
extern V addressSSR,addressWhat,addressAt,addressDot,addressColon;
extern V vd0[];
extern V vm0[];
extern V vd[];
extern V vm[];
K _6d(K a,K b);
K _5d(K x,K y);
K _4d(K x,K y);
K _3d(K x,K y);
K _2d(K a,K b);
K _1d(K x,K y);
K _0d(K a,K b);
K _6m(K x);
K _5m(K x);
K _4m(K x);
K _3m(K x);
K _2m(K a);
K _1m(K x);
K _0m(K a);
K colon_dyadic(K a,K b);
K dot(K a,K b);
K dollar(K a,K b);
K take_reshape(K a,K b);
K join(K a,K b);
K drop_cut(K a,K b);
K what(K x,K y);
K at(K x,K y);
K match(K a,K b);
K equals(K a,K b);
K more(K a,K b);
K less(K a,K b);
K rotate_mod(K a,K b);
K power(K a,K b);
K min_and(K a,K b);
K max_or(K a,K b);
K divide(K a,K b);
K times(K a,K b);
K minus(K a,K b);
K plus(K a,K b);
K colon_monadic(K a);
K dot_monadic(K x);
K format(K a);
K count(K a);
K enlist(K x);
K floor_verb(K a);
K range(K a);
K atom(K a);
K not_attribute(K a);
K group(K x);
K grade_down(K a);
K grade_up(K a);
K enumerate(K a);
K shape(K a);
K where(K x);
K reverse(K a);
K reciprocal(K x);
K first(K a);
K negate(K x);
K flip(K a);
extern C vc[];
extern V adverbs[];
K eachpair();
K eachleft();
K eachright();
K each();
K scan();
K over();
extern C ac[];
I bk(V p);
extern V ends[];
K end();
I simpleString(S a);
F FF(F f);
S CSK(K x);
K KX(K x);
K wd(S s,I n);
K ex(K a);
K X(S s);
I min(I a,I b);
I max(I a,I b);
extern C PPON;
extern I PPMAX;
extern I PP;
extern S LS;
extern K NIL;
extern S PORT;
extern S __d;
extern I SEED;
extern K KTREE;
extern N SYMBOLS;
K kerr(cS s);
extern C errmsg[256];
