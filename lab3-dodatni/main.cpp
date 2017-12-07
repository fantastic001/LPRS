#include <freehdl/kernel.h>
#include <freehdl/std.h>


/* External declarations */
/* Definitions for enumeration type :IEEE:std_logic_1164:std_ulogic */
class L4ieee_Q14std_logic_1164_I10std_ulogic:public enum_info_base{
   static const char *values[];
public:
   L4ieee_Q14std_logic_1164_I10std_ulogic():enum_info_base(0,8,values) {};
   static const char **get_values() { return values; }
   static int low() { return 0; }
   static int high() { return 8; }
   static int left() { return 0; }
   static int right() { return 8; }
};
extern L4ieee_Q14std_logic_1164_I10std_ulogic L4ieee_Q14std_logic_1164_I10std_ulogic_INFO;
/** Enumeration info class :IEEE:std_logic_1164:std_logic */
class L4ieee_Q14std_logic_1164_I9std_logic:public enum_info_base{
   static const char **values;
public:
   L4ieee_Q14std_logic_1164_I9std_logic():enum_info_base(0,8,values) {};
   static const char **get_values() { return values; }
   static int low() { return 0; }
   static int high() { return 8; }
   static int left() { return 0; }
   static int right() { return 8; }
};
extern L4ieee_Q14std_logic_1164_I9std_logic L4ieee_Q14std_logic_1164_I9std_logic_INFO;
extern array_info L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO;
#define L4ieee_Q14std_logic_1164_T16std_logic_vector array_type<enumeration >
#define L4ieee_Q14std_logic_1164_I16std_logic_vector array_info

/* End of external declarations */
extern array_info L4work_E7dodatni_I3_t0_INFO;
#define L4work_E7dodatni_T3_t0 array_type<enumeration >
#define L4work_E7dodatni_I3_t0 array_info

extern array_info L4work_E7dodatni_I3_t1_INFO;
#define L4work_E7dodatni_T3_t1 array_type<enumeration >
#define L4work_E7dodatni_I3_t1 array_info

extern array_info L4work_E7dodatni_I3_t2_INFO;
#define L4work_E7dodatni_T3_t2 array_type<enumeration >
#define L4work_E7dodatni_I3_t2 array_info

extern array_info L4work_E7dodatni_I3_t3_INFO;
#define L4work_E7dodatni_T3_t3 array_type<enumeration >
#define L4work_E7dodatni_I3_t3 array_info

/* Entity class declaration */
class L4work_E7dodatni {
public:
   void *father_component;
  L4work_E7dodatni (name_stack &iname, map_list *mlist, void *father);
  ~L4work_E7dodatni() {};
  sig_info<L4work_E7dodatni_T3_t0> *L4work_E7dodatni_S2ia;
  sig_info<L4work_E7dodatni_T3_t1> *L4work_E7dodatni_S2ib;
  sig_info<L4work_E7dodatni_T3_t2> *L4work_E7dodatni_S4isel;
  sig_info<L4work_E7dodatni_T3_t3> *L4work_E7dodatni_S2oy;
  sig_info<enumeration> *L4work_E7dodatni_S5ozero;
};

L4work_E7dodatni_I3_t0 L4work_E7dodatni_I3_t0_INFO;
L4work_E7dodatni_I3_t1 L4work_E7dodatni_I3_t1_INFO;
L4work_E7dodatni_I3_t2 L4work_E7dodatni_I3_t2_INFO;
L4work_E7dodatni_I3_t3 L4work_E7dodatni_I3_t3_INFO;
/* Implementation of entity methods */
L4work_E7dodatni::
L4work_E7dodatni(name_stack &iname, map_list *mlist, void *father) {
    father_component = father;
    iname.push("");
    L4work_E7dodatni_S2ia=new sig_info<L4work_E7dodatni_T3_t0>(iname,":ia",":work:dodatni",mlist,(&L4work_E7dodatni_I3_t0_INFO),vIN,this);
    L4work_E7dodatni_S2ib=new sig_info<L4work_E7dodatni_T3_t1>(iname,":ib",":work:dodatni",mlist,(&L4work_E7dodatni_I3_t1_INFO),vIN,this);
    L4work_E7dodatni_S4isel=new sig_info<L4work_E7dodatni_T3_t2>(iname,":isel",":work:dodatni",mlist,(&L4work_E7dodatni_I3_t2_INFO),vIN,this);
    L4work_E7dodatni_S2oy=new sig_info<L4work_E7dodatni_T3_t3>(iname,":oy",":work:dodatni",mlist,(&L4work_E7dodatni_I3_t3_INFO),vOUT,this);
    L4work_E7dodatni_S5ozero=new sig_info<enumeration>(iname,":ozero",":work:dodatni",mlist,(&L4ieee_Q14std_logic_1164_I9std_logic_INFO),vOUT,this);
    iname.pop();
};


/* Initialization function for entity :work:dodatni */
int L3std_Q8standard_init ();
int L4ieee_Q18std_logic_unsigned_init ();
int L4ieee_Q14std_logic_1164_init ();
bool L4work_E7dodatni_init_done = false;
int L4work_E7dodatni_init(){
if (L4work_E7dodatni_init_done) return 1;
L4work_E7dodatni_init_done=true;
L3std_Q8standard_init ();
L4ieee_Q18std_logic_unsigned_init ();
L4ieee_Q14std_logic_1164_init ();
register_source_file("/home/stefan/data/Research and development/LPRS/lab3-dodatni/zadatak3.vhd","zadatak3.vhd");
name_stack iname;
iname.push("");
L4work_E7dodatni_I3_t0_INFO.set((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,parray_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO))->index_type,7,downto,0,-1).register_type(":work:dodatni",":work:dodatni:_t0",":_t0",NULL);
L4work_E7dodatni_I3_t1_INFO.set((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,parray_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO))->index_type,2,downto,0,-1).register_type(":work:dodatni",":work:dodatni:_t1",":_t1",NULL);
L4work_E7dodatni_I3_t2_INFO.set((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,parray_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO))->index_type,1,downto,0,-1).register_type(":work:dodatni",":work:dodatni:_t2",":_t2",NULL);
L4work_E7dodatni_I3_t3_INFO.set((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,parray_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO))->index_type,3,downto,0,-1).register_type(":work:dodatni",":work:dodatni:_t3",":_t3",NULL);
iname.pop();
return 1;
}

/* end of L4work_E7dodatni Entity */
/* External declarations */
/* Prototype for predefined function :IEEE:std_logic_1164:"=" */
/* Prototype for predefined function :IEEE:std_logic_1164:"&" */
/* No header for IIR_EnumerationLiteral */
/* Prototype for predefined function :IEEE:std_logic_1164:"&" */
/* Prototype for subprogram :IEEE:std_logic_unsigned:"+" */
L4ieee_Q14std_logic_1164_T16std_logic_vector L4ieee_Q18std_logic_unsigned_Y7op_plus_i9(const L4ieee_Q14std_logic_1164_T16std_logic_vector &,const L4ieee_Q14std_logic_1164_T16std_logic_vector &);
/* No header for IIR_EnumerationLiteral */
/* Prototype for predefined function :IEEE:std_logic_1164:"=" */
/* End of external declarations */
extern array_info L4work_E7dodatni_A10behavioral_I3_t4_INFO;
#define L4work_E7dodatni_A10behavioral_T3_t4 array_type<enumeration >
#define L4work_E7dodatni_A10behavioral_I3_t4 array_info

extern array_info L4work_E7dodatni_A10behavioral_I3_t5_INFO;
#define L4work_E7dodatni_A10behavioral_T3_t5 array_type<enumeration >
#define L4work_E7dodatni_A10behavioral_I3_t5 array_info

extern array_info L4work_E7dodatni_A10behavioral_I3_t6_INFO;
#define L4work_E7dodatni_A10behavioral_T3_t6 array_type<enumeration >
#define L4work_E7dodatni_A10behavioral_I3_t6 array_info

extern array_info L4work_E7dodatni_A10behavioral_I3_t7_INFO;
#define L4work_E7dodatni_A10behavioral_T3_t7 array_type<enumeration >
#define L4work_E7dodatni_A10behavioral_I3_t7 array_info

extern array_info L4work_E7dodatni_A10behavioral_I3_t8_INFO;
#define L4work_E7dodatni_A10behavioral_T3_t8 array_type<enumeration >
#define L4work_E7dodatni_A10behavioral_I3_t8 array_info

/* Architecture class declaration */
class L4work_E7dodatni_A10behavioral : public L4work_E7dodatni {
public:
  L4work_E7dodatni_A10behavioral (name_stack &iname, map_list *mlist, void *father, int level);
  ~L4work_E7dodatni_A10behavioral();
  sig_info<L4work_E7dodatni_A10behavioral_T3_t4> *L4work_E7dodatni_A10behavioral_S6ia_dec;
  sig_info<L4work_E7dodatni_A10behavioral_T3_t5> *L4work_E7dodatni_A10behavioral_S5szbir;
  sig_info<L4work_E7dodatni_A10behavioral_T3_t6> *L4work_E7dodatni_A10behavioral_S7szbir_s;
  sig_info<L4work_E7dodatni_A10behavioral_T3_t7> *L4work_E7dodatni_A10behavioral_S4sdec;
  sig_info<L4work_E7dodatni_A10behavioral_T3_t8> *L4work_E7dodatni_A10behavioral_S2so;
};

/* Concurrent statement class declaration(s) */


/* Class decl. process _9pn */
class L4work_E7dodatni_A10behavioral_P4_9pn : public process_base {
public:
  L4work_E7dodatni_A10behavioral_P4_9pn(L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname);
  ~L4work_E7dodatni_A10behavioral_P4_9pn() {};
  bool execute();
  L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP;
  driver_info *L4work_E7dodatni_A10behavioral_D6ia_dec;
  L4work_E7dodatni_T3_t0 *L4work_E7dodatni_R2ia;
  sig_info<L4work_E7dodatni_T3_t0> *L4work_E7dodatni_S2ia;
  winfo_item winfo[1];
  L4work_E7dodatni_A10behavioral *arch;
};

/* Class decl. process _10pn */
class L4work_E7dodatni_A10behavioral_P5_10pn : public process_base {
public:
  L4work_E7dodatni_A10behavioral_P5_10pn(L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname);
  ~L4work_E7dodatni_A10behavioral_P5_10pn() {};
  bool execute();
  L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP;
  driver_info *L4work_E7dodatni_A10behavioral_D5szbir;
  L4work_E7dodatni_A10behavioral_T3_t4 *L4work_E7dodatni_A10behavioral_R6ia_dec;
  L4work_E7dodatni_T3_t1 *L4work_E7dodatni_R2ib;
  sig_info<L4work_E7dodatni_A10behavioral_T3_t4> *L4work_E7dodatni_A10behavioral_S6ia_dec;
  sig_info<L4work_E7dodatni_T3_t1> *L4work_E7dodatni_S2ib;
  winfo_item winfo[1];
  L4work_E7dodatni_A10behavioral *arch;
};

/* Class decl. process _11pn */
class L4work_E7dodatni_A10behavioral_P5_11pn : public process_base {
public:
  L4work_E7dodatni_A10behavioral_P5_11pn(L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname);
  ~L4work_E7dodatni_A10behavioral_P5_11pn() {};
  bool execute();
  L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP;
  driver_info *L4work_E7dodatni_A10behavioral_D7szbir_s;
  L4work_E7dodatni_A10behavioral_T3_t5 *L4work_E7dodatni_A10behavioral_R5szbir;
  sig_info<L4work_E7dodatni_A10behavioral_T3_t5> *L4work_E7dodatni_A10behavioral_S5szbir;
  winfo_item winfo[1];
  L4work_E7dodatni_A10behavioral *arch;
};

/* Class decl. process _12pn */
class L4work_E7dodatni_A10behavioral_P5_12pn : public process_base {
public:
  L4work_E7dodatni_A10behavioral_P5_12pn(L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname);
  ~L4work_E7dodatni_A10behavioral_P5_12pn() {};
  bool execute();
  L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP;
  driver_info *L4work_E7dodatni_A10behavioral_D4sdec;
  L4work_E7dodatni_T3_t1 *L4work_E7dodatni_R2ib;
  sig_info<L4work_E7dodatni_T3_t1> *L4work_E7dodatni_S2ib;
  winfo_item winfo[1];
  L4work_E7dodatni_A10behavioral *arch;
};

/* Class decl. process _13pn */
class L4work_E7dodatni_A10behavioral_P5_13pn : public process_base {
public:
  L4work_E7dodatni_A10behavioral_P5_13pn(L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname);
  ~L4work_E7dodatni_A10behavioral_P5_13pn() {};
  bool execute();
  L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP;
  driver_info *L4work_E7dodatni_A10behavioral_D2so;
  L4work_E7dodatni_T3_t2 *L4work_E7dodatni_R4isel;
  L4work_E7dodatni_A10behavioral_T3_t5 *L4work_E7dodatni_A10behavioral_R5szbir;
  L4work_E7dodatni_A10behavioral_T3_t6 *L4work_E7dodatni_A10behavioral_R7szbir_s;
  L4work_E7dodatni_A10behavioral_T3_t7 *L4work_E7dodatni_A10behavioral_R4sdec;
  sig_info<L4work_E7dodatni_A10behavioral_T3_t5> *L4work_E7dodatni_A10behavioral_S5szbir;
  sig_info<L4work_E7dodatni_T3_t2> *L4work_E7dodatni_S4isel;
  sig_info<L4work_E7dodatni_A10behavioral_T3_t6> *L4work_E7dodatni_A10behavioral_S7szbir_s;
  sig_info<L4work_E7dodatni_A10behavioral_T3_t7> *L4work_E7dodatni_A10behavioral_S4sdec;
  winfo_item winfo[1];
  L4work_E7dodatni_A10behavioral *arch;
};

/* Class decl. process _14pn */
class L4work_E7dodatni_A10behavioral_P5_14pn : public process_base {
public:
  L4work_E7dodatni_A10behavioral_P5_14pn(L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname);
  ~L4work_E7dodatni_A10behavioral_P5_14pn() {};
  bool execute();
  L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP;
  driver_info *L4work_E7dodatni_D5ozero;
  L4work_E7dodatni_A10behavioral_T3_t8 *L4work_E7dodatni_A10behavioral_R2so;
  sig_info<L4work_E7dodatni_A10behavioral_T3_t8> *L4work_E7dodatni_A10behavioral_S2so;
  winfo_item winfo[1];
  L4work_E7dodatni_A10behavioral *arch;
};

/* Class decl. process _15pn */
class L4work_E7dodatni_A10behavioral_P5_15pn : public process_base {
public:
  L4work_E7dodatni_A10behavioral_P5_15pn(L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname);
  ~L4work_E7dodatni_A10behavioral_P5_15pn() {};
  bool execute();
  L4work_E7dodatni_A10behavioral* L4work_E7dodatni_A10behavioral_AP;
  driver_info *L4work_E7dodatni_D2oy;
  L4work_E7dodatni_A10behavioral_T3_t8 *L4work_E7dodatni_A10behavioral_R2so;
  sig_info<L4work_E7dodatni_A10behavioral_T3_t8> *L4work_E7dodatni_A10behavioral_S2so;
  winfo_item winfo[1];
  L4work_E7dodatni_A10behavioral *arch;
};
L4work_E7dodatni_A10behavioral_I3_t4 L4work_E7dodatni_A10behavioral_I3_t4_INFO;
L4work_E7dodatni_A10behavioral_I3_t5 L4work_E7dodatni_A10behavioral_I3_t5_INFO;
L4work_E7dodatni_A10behavioral_I3_t6 L4work_E7dodatni_A10behavioral_I3_t6_INFO;
L4work_E7dodatni_A10behavioral_I3_t7 L4work_E7dodatni_A10behavioral_I3_t7_INFO;
L4work_E7dodatni_A10behavioral_I3_t8 L4work_E7dodatni_A10behavioral_I3_t8_INFO;
enumeration L4work_E7dodatni_A10behavioral_itn9_lit[]={2,2,2};
enumeration L4work_E7dodatni_A10behavioral_itn10_lit[]={2,2,3};
enumeration L4work_E7dodatni_A10behavioral_itn11_lit[]={2,3,2};
enumeration L4work_E7dodatni_A10behavioral_itn12_lit[]={2,3,3};
enumeration L4work_E7dodatni_A10behavioral_itn13_lit[]={3,2,2};
enumeration L4work_E7dodatni_A10behavioral_itn14_lit[]={3,2,3};
enumeration L4work_E7dodatni_A10behavioral_itn15_lit[]={3,3,2};
enumeration L4work_E7dodatni_A10behavioral_itn16_lit[]={3,3,3};
enumeration L4work_E7dodatni_A10behavioral_itn17_lit[]={2,2};
enumeration L4work_E7dodatni_A10behavioral_itn18_lit[]={2,2,2};
enumeration L4work_E7dodatni_A10behavioral_itn19_lit[]={2,2,2,2,2,2,2,3};
enumeration L4work_E7dodatni_A10behavioral_itn20_lit[]={2,2,3};
enumeration L4work_E7dodatni_A10behavioral_itn21_lit[]={2,2,2,2,2,2,3,2};
enumeration L4work_E7dodatni_A10behavioral_itn22_lit[]={2,3,2};
enumeration L4work_E7dodatni_A10behavioral_itn23_lit[]={2,2,2,2,2,3,2,2};
enumeration L4work_E7dodatni_A10behavioral_itn24_lit[]={2,3,3};
enumeration L4work_E7dodatni_A10behavioral_itn25_lit[]={2,2,2,2,3,2,2,2};
enumeration L4work_E7dodatni_A10behavioral_itn26_lit[]={3,2,2};
enumeration L4work_E7dodatni_A10behavioral_itn27_lit[]={2,2,2,3,2,2,2,2};
enumeration L4work_E7dodatni_A10behavioral_itn28_lit[]={3,2,3};
enumeration L4work_E7dodatni_A10behavioral_itn29_lit[]={2,2,3,2,2,2,2,2};
enumeration L4work_E7dodatni_A10behavioral_itn30_lit[]={3,3,2};
enumeration L4work_E7dodatni_A10behavioral_itn31_lit[]={2,3,2,2,2,2,2,2};
enumeration L4work_E7dodatni_A10behavioral_itn32_lit[]={3,2,2,2,2,2,2,2};
enumeration L4work_E7dodatni_A10behavioral_itn33_lit[]={2,2};
enumeration L4work_E7dodatni_A10behavioral_itn34_lit[]={2,3};
enumeration L4work_E7dodatni_A10behavioral_itn35_lit[]={3,2};
enumeration L4work_E7dodatni_A10behavioral_itn36_lit[]={2,2,2,2};
  /* Implementation of process :work:dodatni(behavioral):_9pn methods */
L4work_E7dodatni_A10behavioral_P4_9pn::
L4work_E7dodatni_A10behavioral_P4_9pn(L4work_E7dodatni_A10behavioral *L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname) : process_base(iname) {
    L4work_E7dodatni_A10behavioral_AP=L4work_E7dodatni_A10behavioral_AP_PAR;
    L4work_E7dodatni_S2ia=L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ia;
    L4work_E7dodatni_R2ia=&L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ia->reader();
    L4work_E7dodatni_A10behavioral_D6ia_dec=kernel.get_driver(this,L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S6ia_dec);
    {
     sigacl_list sal(7);
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ia,&(tmpacl->clear()<<0));
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ia,&(tmpacl->clear()<<1));
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ia,&(tmpacl->clear()<<2));
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ia,&(tmpacl->clear()<<3));
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ia,&(tmpacl->clear()<<4));
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ia,&(tmpacl->clear()<<5));
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ia,&(tmpacl->clear()<<6));
     winfo[0]=kernel.setup_wait_info(sal,this);
    }
}
bool L4work_E7dodatni_A10behavioral_P4_9pn::execute() {
    if(((*L4work_E7dodatni_R2ia)[0]==enumeration(3))) {
      L4work_E7dodatni_A10behavioral_D6ia_dec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t4 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,2,downto,0,0),L4work_E7dodatni_A10behavioral_itn9_lit),0,vtime(0));
    } else {
      if(((*L4work_E7dodatni_R2ia)[1]==enumeration(3))) {
        L4work_E7dodatni_A10behavioral_D6ia_dec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t4 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,2,downto,0,0),L4work_E7dodatni_A10behavioral_itn10_lit),0,vtime(0));
      } else {
        if(((*L4work_E7dodatni_R2ia)[2]==enumeration(3))) {
          L4work_E7dodatni_A10behavioral_D6ia_dec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t4 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,2,downto,0,0),L4work_E7dodatni_A10behavioral_itn11_lit),0,vtime(0));
        } else {
          if(((*L4work_E7dodatni_R2ia)[3]==enumeration(3))) {
            L4work_E7dodatni_A10behavioral_D6ia_dec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t4 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,2,downto,0,0),L4work_E7dodatni_A10behavioral_itn12_lit),0,vtime(0));
          } else {
            if(((*L4work_E7dodatni_R2ia)[4]==enumeration(3))) {
              L4work_E7dodatni_A10behavioral_D6ia_dec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t4 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,2,downto,0,0),L4work_E7dodatni_A10behavioral_itn13_lit),0,vtime(0));
            } else {
              if(((*L4work_E7dodatni_R2ia)[5]==enumeration(3))) {
                L4work_E7dodatni_A10behavioral_D6ia_dec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t4 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,2,downto,0,0),L4work_E7dodatni_A10behavioral_itn14_lit),0,vtime(0));
              } else {
                if(((*L4work_E7dodatni_R2ia)[6]==enumeration(3))) {
                  L4work_E7dodatni_A10behavioral_D6ia_dec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t4 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,2,downto,0,0),L4work_E7dodatni_A10behavioral_itn15_lit),0,vtime(0));
                } else {
                  L4work_E7dodatni_A10behavioral_D6ia_dec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t4 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,2,downto,0,0),L4work_E7dodatni_A10behavioral_itn16_lit),0,vtime(0));
                }
              }
            }
          }
        }
      }
    }
    return true;
}

  /* Implementation of process :work:dodatni(behavioral):_10pn methods */
L4work_E7dodatni_A10behavioral_P5_10pn::
L4work_E7dodatni_A10behavioral_P5_10pn(L4work_E7dodatni_A10behavioral *L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname) : process_base(iname) {
    L4work_E7dodatni_A10behavioral_AP=L4work_E7dodatni_A10behavioral_AP_PAR;
    L4work_E7dodatni_A10behavioral_S6ia_dec=L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S6ia_dec;
    L4work_E7dodatni_S2ib=L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ib;
    L4work_E7dodatni_A10behavioral_R6ia_dec=&L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S6ia_dec->reader();
    L4work_E7dodatni_R2ib=&L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ib->reader();
    L4work_E7dodatni_A10behavioral_D5szbir=kernel.get_driver(this,L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S5szbir);
    {
     sigacl_list sal(2);
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S6ia_dec);
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ib);
     winfo[0]=kernel.setup_wait_info(sal,this);
    }
}
bool L4work_E7dodatni_A10behavioral_P5_10pn::execute() {
    L4work_E7dodatni_A10behavioral_D5szbir->inertial_assign(L4ieee_Q18std_logic_unsigned_Y7op_plus_i9 (concat<L4ieee_Q14std_logic_1164_T16std_logic_vector,enumeration>(L4ieee_Q14std_logic_1164_T16std_logic_vector(new array_info(L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO.element_type,L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO.index_type,0,to,0,0),enumeration(2)),(*L4work_E7dodatni_A10behavioral_R6ia_dec)),concat<L4ieee_Q14std_logic_1164_T16std_logic_vector,enumeration>(L4ieee_Q14std_logic_1164_T16std_logic_vector(new array_info(L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO.element_type,L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO.index_type,0,to,0,0),enumeration(2)),(*L4work_E7dodatni_R2ib))),0,vtime(0));
    return true;
}

  /* Implementation of process :work:dodatni(behavioral):_11pn methods */
L4work_E7dodatni_A10behavioral_P5_11pn::
L4work_E7dodatni_A10behavioral_P5_11pn(L4work_E7dodatni_A10behavioral *L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname) : process_base(iname) {
    L4work_E7dodatni_A10behavioral_AP=L4work_E7dodatni_A10behavioral_AP_PAR;
    L4work_E7dodatni_A10behavioral_S5szbir=L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S5szbir;
    L4work_E7dodatni_A10behavioral_R5szbir=&L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S5szbir->reader();
    L4work_E7dodatni_A10behavioral_D7szbir_s=kernel.get_driver(this,L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S7szbir_s);
    {
     sigacl_list sal(1);
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S5szbir,&(tmpacl->clear()<<ACL_RANGE<<3<<downto<<2));
     winfo[0]=kernel.setup_wait_info(sal,this);
    }
}
bool L4work_E7dodatni_A10behavioral_P5_11pn::execute() {
    L4work_E7dodatni_A10behavioral_D7szbir_s->inertial_assign(concat<L4ieee_Q14std_logic_1164_T16std_logic_vector,enumeration>(array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+1,0),L4work_E7dodatni_A10behavioral_itn17_lit),array_alias<L4work_E7dodatni_A10behavioral_T3_t5 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,3,downto,2,0),&(*L4work_E7dodatni_A10behavioral_R5szbir)[3])),0,vtime(0));
    return true;
}

  /* Implementation of process :work:dodatni(behavioral):_12pn methods */
L4work_E7dodatni_A10behavioral_P5_12pn::
L4work_E7dodatni_A10behavioral_P5_12pn(L4work_E7dodatni_A10behavioral *L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname) : process_base(iname) {
    L4work_E7dodatni_A10behavioral_AP=L4work_E7dodatni_A10behavioral_AP_PAR;
    L4work_E7dodatni_S2ib=L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ib;
    L4work_E7dodatni_R2ib=&L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ib->reader();
    L4work_E7dodatni_A10behavioral_D4sdec=kernel.get_driver(this,L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S4sdec);
    {
     sigacl_list sal(1);
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2ib);
     winfo[0]=kernel.setup_wait_info(sal,this);
    }
}
bool L4work_E7dodatni_A10behavioral_P5_12pn::execute() {
    if(((*L4work_E7dodatni_R2ib)==array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+2,0),L4work_E7dodatni_A10behavioral_itn18_lit))) {
      L4work_E7dodatni_A10behavioral_D4sdec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t7 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,7,downto,0,0),L4work_E7dodatni_A10behavioral_itn19_lit),0,vtime(0));
    } else {
      if(((*L4work_E7dodatni_R2ib)==array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+2,0),L4work_E7dodatni_A10behavioral_itn20_lit))) {
        L4work_E7dodatni_A10behavioral_D4sdec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t7 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,7,downto,0,0),L4work_E7dodatni_A10behavioral_itn21_lit),0,vtime(0));
      } else {
        if(((*L4work_E7dodatni_R2ib)==array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+2,0),L4work_E7dodatni_A10behavioral_itn22_lit))) {
          L4work_E7dodatni_A10behavioral_D4sdec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t7 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,7,downto,0,0),L4work_E7dodatni_A10behavioral_itn23_lit),0,vtime(0));
        } else {
          if(((*L4work_E7dodatni_R2ib)==array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+2,0),L4work_E7dodatni_A10behavioral_itn24_lit))) {
            L4work_E7dodatni_A10behavioral_D4sdec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t7 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,7,downto,0,0),L4work_E7dodatni_A10behavioral_itn25_lit),0,vtime(0));
          } else {
            if(((*L4work_E7dodatni_R2ib)==array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+2,0),L4work_E7dodatni_A10behavioral_itn26_lit))) {
              L4work_E7dodatni_A10behavioral_D4sdec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t7 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,7,downto,0,0),L4work_E7dodatni_A10behavioral_itn27_lit),0,vtime(0));
            } else {
              if(((*L4work_E7dodatni_R2ib)==array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+2,0),L4work_E7dodatni_A10behavioral_itn28_lit))) {
                L4work_E7dodatni_A10behavioral_D4sdec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t7 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,7,downto,0,0),L4work_E7dodatni_A10behavioral_itn29_lit),0,vtime(0));
              } else {
                if(((*L4work_E7dodatni_R2ib)==array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+2,0),L4work_E7dodatni_A10behavioral_itn30_lit))) {
                  L4work_E7dodatni_A10behavioral_D4sdec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t7 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,7,downto,0,0),L4work_E7dodatni_A10behavioral_itn31_lit),0,vtime(0));
                } else {
                  L4work_E7dodatni_A10behavioral_D4sdec->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t7 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,7,downto,0,0),L4work_E7dodatni_A10behavioral_itn32_lit),0,vtime(0));
                }
              }
            }
          }
        }
      }
    }
    return true;
}

  /* Implementation of process :work:dodatni(behavioral):_13pn methods */
L4work_E7dodatni_A10behavioral_P5_13pn::
L4work_E7dodatni_A10behavioral_P5_13pn(L4work_E7dodatni_A10behavioral *L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname) : process_base(iname) {
    L4work_E7dodatni_A10behavioral_AP=L4work_E7dodatni_A10behavioral_AP_PAR;
    L4work_E7dodatni_A10behavioral_S5szbir=L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S5szbir;
    L4work_E7dodatni_S4isel=L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S4isel;
    L4work_E7dodatni_A10behavioral_S7szbir_s=L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S7szbir_s;
    L4work_E7dodatni_A10behavioral_S4sdec=L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S4sdec;
    L4work_E7dodatni_R4isel=&L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S4isel->reader();
    L4work_E7dodatni_A10behavioral_R5szbir=&L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S5szbir->reader();
    L4work_E7dodatni_A10behavioral_R7szbir_s=&L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S7szbir_s->reader();
    L4work_E7dodatni_A10behavioral_R4sdec=&L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S4sdec->reader();
    L4work_E7dodatni_A10behavioral_D2so=kernel.get_driver(this,L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S2so);
    {
     sigacl_list sal(5);
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S5szbir);
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S4isel);
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S7szbir_s);
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S4sdec,&(tmpacl->clear()<<ACL_RANGE<<7<<downto<<4));
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S4sdec,&(tmpacl->clear()<<ACL_RANGE<<3<<downto<<0));
     winfo[0]=kernel.setup_wait_info(sal,this);
    }
}
bool L4work_E7dodatni_A10behavioral_P5_13pn::execute() {
    if(((*L4work_E7dodatni_R4isel)==array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+1,0),L4work_E7dodatni_A10behavioral_itn33_lit))) {
      L4work_E7dodatni_A10behavioral_D2so->inertial_assign((*L4work_E7dodatni_A10behavioral_R5szbir),0,vtime(0));
    } else {
      if(((*L4work_E7dodatni_R4isel)==array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+1,0),L4work_E7dodatni_A10behavioral_itn34_lit))) {
        L4work_E7dodatni_A10behavioral_D2so->inertial_assign((*L4work_E7dodatni_A10behavioral_R7szbir_s),0,vtime(0));
      } else {
        if(((*L4work_E7dodatni_R4isel)==array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+1,0),L4work_E7dodatni_A10behavioral_itn35_lit))) {
          L4work_E7dodatni_A10behavioral_D2so->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t7 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,7,downto,4,0),&(*L4work_E7dodatni_A10behavioral_R4sdec)[7]),0,vtime(0));
        } else {
          L4work_E7dodatni_A10behavioral_D2so->inertial_assign(array_alias<L4work_E7dodatni_A10behavioral_T3_t7 >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,3,downto,0,0),&(*L4work_E7dodatni_A10behavioral_R4sdec)[3]),0,vtime(0));
        }
      }
    }
    return true;
}

  /* Implementation of process :work:dodatni(behavioral):_14pn methods */
L4work_E7dodatni_A10behavioral_P5_14pn::
L4work_E7dodatni_A10behavioral_P5_14pn(L4work_E7dodatni_A10behavioral *L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname) : process_base(iname) {
    L4work_E7dodatni_A10behavioral_AP=L4work_E7dodatni_A10behavioral_AP_PAR;
    L4work_E7dodatni_A10behavioral_S2so=L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S2so;
    L4work_E7dodatni_A10behavioral_R2so=&L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S2so->reader();
    L4work_E7dodatni_D5ozero=kernel.get_driver(this,L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S5ozero);
    {
     sigacl_list sal(1);
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S2so);
     winfo[0]=kernel.setup_wait_info(sal,this);
    }
}
bool L4work_E7dodatni_A10behavioral_P5_14pn::execute() {
    if(((*L4work_E7dodatni_A10behavioral_R2so)==array_alias<L4ieee_Q14std_logic_1164_T16std_logic_vector >(new array_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,(&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->index_type,0,to,0+3,0),L4work_E7dodatni_A10behavioral_itn36_lit))) {
      L4work_E7dodatni_D5ozero->inertial_assign(enumeration(3),vtime(0));
    } else {
      L4work_E7dodatni_D5ozero->inertial_assign(enumeration(2),vtime(0));
    }
    return true;
}

  /* Implementation of process :work:dodatni(behavioral):_15pn methods */
L4work_E7dodatni_A10behavioral_P5_15pn::
L4work_E7dodatni_A10behavioral_P5_15pn(L4work_E7dodatni_A10behavioral *L4work_E7dodatni_A10behavioral_AP_PAR,name_stack &iname) : process_base(iname) {
    L4work_E7dodatni_A10behavioral_AP=L4work_E7dodatni_A10behavioral_AP_PAR;
    L4work_E7dodatni_A10behavioral_S2so=L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S2so;
    L4work_E7dodatni_A10behavioral_R2so=&L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S2so->reader();
    L4work_E7dodatni_D2oy=kernel.get_driver(this,L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_S2oy);
    {
     sigacl_list sal(1);
     sal.add(L4work_E7dodatni_A10behavioral_AP->L4work_E7dodatni_A10behavioral_S2so);
     winfo[0]=kernel.setup_wait_info(sal,this);
    }
}
bool L4work_E7dodatni_A10behavioral_P5_15pn::execute() {
    L4work_E7dodatni_D2oy->inertial_assign((*L4work_E7dodatni_A10behavioral_R2so),0,vtime(0));
    return true;
}

/* handle for simulator to find architecture */
void*
L4work_E7dodatni_A10behavioral_handle(name_stack &iname, map_list *mlist, void *father, int level) {
 REPORT(cout << "Starting constructor L4work_E7dodatni_A10behavioral ..." << endl);
 return new L4work_E7dodatni_A10behavioral(iname, mlist, father, level);
};
extern int L4work_E7dodatni_A10behavioral_init ();
handle_info *L4work_E7dodatni_A10behavioral_hinfo =
  add_handle("work","dodatni","behavioral",&L4work_E7dodatni_A10behavioral_handle,&L4work_E7dodatni_A10behavioral_init);
/* Architecture Constructor */
L4work_E7dodatni_A10behavioral::
L4work_E7dodatni_A10behavioral(name_stack &iname, map_list *mlist, void *father, int level) :
  L4work_E7dodatni(iname, mlist, father) {
    iname.push(":behavioral");
    iname.push("");
    L4work_E7dodatni_A10behavioral_S6ia_dec=new sig_info<L4work_E7dodatni_A10behavioral_T3_t4 > (iname, ":ia_dec",":work:dodatni(behavioral)",(&L4work_E7dodatni_A10behavioral_I3_t4_INFO),vREGISTER,this);
    L4work_E7dodatni_A10behavioral_S5szbir=new sig_info<L4work_E7dodatni_A10behavioral_T3_t5 > (iname, ":szbir",":work:dodatni(behavioral)",(&L4work_E7dodatni_A10behavioral_I3_t5_INFO),vREGISTER,this);
    L4work_E7dodatni_A10behavioral_S7szbir_s=new sig_info<L4work_E7dodatni_A10behavioral_T3_t6 > (iname, ":szbir_s",":work:dodatni(behavioral)",(&L4work_E7dodatni_A10behavioral_I3_t6_INFO),vREGISTER,this);
    L4work_E7dodatni_A10behavioral_S4sdec=new sig_info<L4work_E7dodatni_A10behavioral_T3_t7 > (iname, ":sdec",":work:dodatni(behavioral)",(&L4work_E7dodatni_A10behavioral_I3_t7_INFO),vREGISTER,this);
    L4work_E7dodatni_A10behavioral_S2so=new sig_info<L4work_E7dodatni_A10behavioral_T3_t8 > (iname, ":so",":work:dodatni(behavioral)",(&L4work_E7dodatni_A10behavioral_I3_t8_INFO),vREGISTER,this);
    kernel.add_process(new L4work_E7dodatni_A10behavioral_P4_9pn(this,iname.set(":_9pn")),":work:dodatni(behavioral)",":_9pn",this);
    kernel.add_process(new L4work_E7dodatni_A10behavioral_P5_10pn(this,iname.set(":_10pn")),":work:dodatni(behavioral)",":_10pn",this);
    kernel.add_process(new L4work_E7dodatni_A10behavioral_P5_11pn(this,iname.set(":_11pn")),":work:dodatni(behavioral)",":_11pn",this);
    kernel.add_process(new L4work_E7dodatni_A10behavioral_P5_12pn(this,iname.set(":_12pn")),":work:dodatni(behavioral)",":_12pn",this);
    kernel.add_process(new L4work_E7dodatni_A10behavioral_P5_13pn(this,iname.set(":_13pn")),":work:dodatni(behavioral)",":_13pn",this);
    kernel.add_process(new L4work_E7dodatni_A10behavioral_P5_14pn(this,iname.set(":_14pn")),":work:dodatni(behavioral)",":_14pn",this);
    kernel.add_process(new L4work_E7dodatni_A10behavioral_P5_15pn(this,iname.set(":_15pn")),":work:dodatni(behavioral)",":_15pn",this);
    iname.pop(); /* pop last declaration from name stack */ iname.pop(); /* pop architecture from name stack */
};

/* Initialization function for architecture :work:dodatni(behavioral) */
int L4work_E7dodatni_init ();
int L3std_Q8standard_init ();
bool L4work_E7dodatni_A10behavioral_init_done = false;
int L4work_E7dodatni_A10behavioral_init(){
if (L4work_E7dodatni_A10behavioral_init_done) return 1;
L4work_E7dodatni_A10behavioral_init_done=true;
L4work_E7dodatni_init ();
L3std_Q8standard_init ();
register_source_file("/home/stefan/data/Research and development/LPRS/lab3-dodatni/zadatak3.vhd","zadatak3.vhd");
name_stack iname;
iname.push("");
L4work_E7dodatni_A10behavioral_I3_t4_INFO.set((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,parray_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO))->index_type,2,downto,0,-1).register_type(":work:dodatni(behavioral)",":work:dodatni(behavioral):_t4",":_t4",NULL);
L4work_E7dodatni_A10behavioral_I3_t5_INFO.set((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,parray_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO))->index_type,3,downto,0,-1).register_type(":work:dodatni(behavioral)",":work:dodatni(behavioral):_t5",":_t5",NULL);
L4work_E7dodatni_A10behavioral_I3_t6_INFO.set((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,parray_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO))->index_type,3,downto,0,-1).register_type(":work:dodatni(behavioral)",":work:dodatni(behavioral):_t6",":_t6",NULL);
L4work_E7dodatni_A10behavioral_I3_t7_INFO.set((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,parray_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO))->index_type,7,downto,0,-1).register_type(":work:dodatni(behavioral)",":work:dodatni(behavioral):_t7",":_t7",NULL);
L4work_E7dodatni_A10behavioral_I3_t8_INFO.set((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO)->element_type,parray_info((&L4ieee_Q14std_logic_1164_I16std_logic_vector_INFO))->index_type,3,downto,0,-1).register_type(":work:dodatni(behavioral)",":work:dodatni(behavioral):_t8",":_t8",NULL);
iname.pop();
return 1;
}

/* end of :work:dodatni(behavioral) Architecture */
