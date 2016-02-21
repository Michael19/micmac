// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistDxDy_DRad_PPaEqPPs.h"


cREgDistDxDy_DRad_PPaEqPPs::cREgDistDxDy_DRad_PPaEqPPs():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,8));
   Close(false);
}



void cREgDistDxDy_DRad_PPaEqPPs::ComputeVal()
{
   double tmp0_ = mCompCoord[1];
   double tmp1_ = mLocRegDistxy1_x - tmp0_;
   double tmp2_ = mCompCoord[2];
   double tmp3_ = mLocRegDistxy1_y - tmp2_;
   double tmp4_ = (tmp1_) * (tmp1_);
   double tmp5_ = (tmp3_) * (tmp3_);
   double tmp6_ = tmp4_ + tmp5_;
   double tmp7_ = (tmp6_) * (tmp6_);
   double tmp8_ = tmp7_ * (tmp6_);
   double tmp9_ = tmp8_ * (tmp6_);
   double tmp10_ = mCompCoord[3];
   double tmp11_ = mLocRegDistxy2_x - tmp0_;
   double tmp12_ = mLocRegDistxy2_y - tmp2_;
   double tmp13_ = mCompCoord[4];
   double tmp14_ = (tmp11_) * (tmp11_);
   double tmp15_ = (tmp12_) * (tmp12_);
   double tmp16_ = tmp14_ + tmp15_;
   double tmp17_ = mCompCoord[5];
   double tmp18_ = (tmp16_) * (tmp16_);
   double tmp19_ = mCompCoord[6];
   double tmp20_ = tmp18_ * (tmp16_);
   double tmp21_ = mCompCoord[7];
   double tmp22_ = tmp20_ * (tmp16_);
   double tmp23_ = mLocRegDistxy3_x - tmp0_;
   double tmp24_ = mLocRegDistxy3_y - tmp2_;
   double tmp25_ = (tmp23_) * (tmp23_);
   double tmp26_ = (tmp24_) * (tmp24_);
   double tmp27_ = tmp25_ + tmp26_;
   double tmp28_ = (tmp27_) * (tmp27_);
   double tmp29_ = tmp28_ * (tmp27_);
   double tmp30_ = tmp29_ * (tmp27_);
   double tmp31_ = mLocRegDistxy4_x - tmp0_;
   double tmp32_ = mLocRegDistxy4_y - tmp2_;
   double tmp33_ = (tmp31_) * (tmp31_);
   double tmp34_ = (tmp32_) * (tmp32_);
   double tmp35_ = tmp33_ + tmp34_;
   double tmp36_ = (tmp35_) * (tmp35_);
   double tmp37_ = tmp36_ * (tmp35_);
   double tmp38_ = tmp37_ * (tmp35_);
   double tmp39_ = tmp10_ * (tmp6_);
   double tmp40_ = tmp13_ * tmp7_;
   double tmp41_ = tmp39_ + tmp40_;
   double tmp42_ = tmp17_ * tmp8_;
   double tmp43_ = tmp41_ + tmp42_;
   double tmp44_ = tmp19_ * tmp9_;
   double tmp45_ = tmp43_ + tmp44_;
   double tmp46_ = tmp9_ * (tmp6_);
   double tmp47_ = tmp21_ * tmp46_;
   double tmp48_ = tmp45_ + tmp47_;
   double tmp49_ = tmp10_ * (tmp16_);
   double tmp50_ = tmp13_ * tmp18_;
   double tmp51_ = tmp49_ + tmp50_;
   double tmp52_ = tmp17_ * tmp20_;
   double tmp53_ = tmp51_ + tmp52_;
   double tmp54_ = tmp19_ * tmp22_;
   double tmp55_ = tmp53_ + tmp54_;
   double tmp56_ = tmp22_ * (tmp16_);
   double tmp57_ = tmp21_ * tmp56_;
   double tmp58_ = tmp55_ + tmp57_;
   double tmp59_ = tmp10_ * (tmp27_);
   double tmp60_ = tmp13_ * tmp28_;
   double tmp61_ = tmp59_ + tmp60_;
   double tmp62_ = tmp17_ * tmp29_;
   double tmp63_ = tmp61_ + tmp62_;
   double tmp64_ = tmp19_ * tmp30_;
   double tmp65_ = tmp63_ + tmp64_;
   double tmp66_ = tmp30_ * (tmp27_);
   double tmp67_ = tmp21_ * tmp66_;
   double tmp68_ = tmp65_ + tmp67_;
   double tmp69_ = tmp10_ * (tmp35_);
   double tmp70_ = tmp13_ * tmp36_;
   double tmp71_ = tmp69_ + tmp70_;
   double tmp72_ = tmp17_ * tmp37_;
   double tmp73_ = tmp71_ + tmp72_;
   double tmp74_ = tmp19_ * tmp38_;
   double tmp75_ = tmp73_ + tmp74_;
   double tmp76_ = tmp38_ * (tmp35_);
   double tmp77_ = tmp21_ * tmp76_;
   double tmp78_ = tmp75_ + tmp77_;

  mVal[0] = (mLocRegDistxy1_x + (tmp1_) * (tmp48_) + mLocRegDistxy2_x + (tmp11_) * (tmp58_)) - (mLocRegDistxy3_x + (tmp23_) * (tmp68_) + mLocRegDistxy4_x + (tmp31_) * (tmp78_));

  mVal[1] = (mLocRegDistxy1_y + (tmp3_) * (tmp48_) + mLocRegDistxy2_y + (tmp12_) * (tmp58_)) - (mLocRegDistxy3_y + (tmp24_) * (tmp68_) + mLocRegDistxy4_y + (tmp32_) * (tmp78_));

}


void cREgDistDxDy_DRad_PPaEqPPs::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[1];
   double tmp1_ = mLocRegDistxy1_x - tmp0_;
   double tmp2_ = mCompCoord[2];
   double tmp3_ = mLocRegDistxy1_y - tmp2_;
   double tmp4_ = (tmp1_) * (tmp1_);
   double tmp5_ = (tmp3_) * (tmp3_);
   double tmp6_ = tmp4_ + tmp5_;
   double tmp7_ = (tmp6_) * (tmp6_);
   double tmp8_ = tmp7_ * (tmp6_);
   double tmp9_ = tmp8_ * (tmp6_);
   double tmp10_ = mCompCoord[3];
   double tmp11_ = mLocRegDistxy2_x - tmp0_;
   double tmp12_ = mLocRegDistxy2_y - tmp2_;
   double tmp13_ = mCompCoord[4];
   double tmp14_ = (tmp11_) * (tmp11_);
   double tmp15_ = (tmp12_) * (tmp12_);
   double tmp16_ = tmp14_ + tmp15_;
   double tmp17_ = mCompCoord[5];
   double tmp18_ = (tmp16_) * (tmp16_);
   double tmp19_ = mCompCoord[6];
   double tmp20_ = tmp18_ * (tmp16_);
   double tmp21_ = mCompCoord[7];
   double tmp22_ = tmp20_ * (tmp16_);
   double tmp23_ = mLocRegDistxy3_x - tmp0_;
   double tmp24_ = mLocRegDistxy3_y - tmp2_;
   double tmp25_ = (tmp23_) * (tmp23_);
   double tmp26_ = (tmp24_) * (tmp24_);
   double tmp27_ = tmp25_ + tmp26_;
   double tmp28_ = (tmp27_) * (tmp27_);
   double tmp29_ = tmp28_ * (tmp27_);
   double tmp30_ = tmp29_ * (tmp27_);
   double tmp31_ = mLocRegDistxy4_x - tmp0_;
   double tmp32_ = mLocRegDistxy4_y - tmp2_;
   double tmp33_ = (tmp31_) * (tmp31_);
   double tmp34_ = (tmp32_) * (tmp32_);
   double tmp35_ = tmp33_ + tmp34_;
   double tmp36_ = (tmp35_) * (tmp35_);
   double tmp37_ = tmp36_ * (tmp35_);
   double tmp38_ = tmp37_ * (tmp35_);
   double tmp39_ = tmp10_ * (tmp6_);
   double tmp40_ = tmp13_ * tmp7_;
   double tmp41_ = tmp39_ + tmp40_;
   double tmp42_ = tmp17_ * tmp8_;
   double tmp43_ = tmp41_ + tmp42_;
   double tmp44_ = tmp19_ * tmp9_;
   double tmp45_ = tmp43_ + tmp44_;
   double tmp46_ = tmp9_ * (tmp6_);
   double tmp47_ = tmp21_ * tmp46_;
   double tmp48_ = tmp45_ + tmp47_;
   double tmp49_ = -(1);
   double tmp50_ = tmp49_ * (tmp1_);
   double tmp51_ = tmp50_ + tmp50_;
   double tmp52_ = (tmp51_) * (tmp6_);
   double tmp53_ = tmp52_ + tmp52_;
   double tmp54_ = (tmp53_) * (tmp6_);
   double tmp55_ = (tmp51_) * tmp7_;
   double tmp56_ = tmp54_ + tmp55_;
   double tmp57_ = (tmp56_) * (tmp6_);
   double tmp58_ = (tmp51_) * tmp8_;
   double tmp59_ = tmp57_ + tmp58_;
   double tmp60_ = tmp10_ * (tmp16_);
   double tmp61_ = tmp13_ * tmp18_;
   double tmp62_ = tmp60_ + tmp61_;
   double tmp63_ = tmp17_ * tmp20_;
   double tmp64_ = tmp62_ + tmp63_;
   double tmp65_ = tmp19_ * tmp22_;
   double tmp66_ = tmp64_ + tmp65_;
   double tmp67_ = tmp22_ * (tmp16_);
   double tmp68_ = tmp21_ * tmp67_;
   double tmp69_ = tmp66_ + tmp68_;
   double tmp70_ = tmp49_ * (tmp11_);
   double tmp71_ = tmp70_ + tmp70_;
   double tmp72_ = (tmp71_) * (tmp16_);
   double tmp73_ = tmp72_ + tmp72_;
   double tmp74_ = (tmp73_) * (tmp16_);
   double tmp75_ = (tmp71_) * tmp18_;
   double tmp76_ = tmp74_ + tmp75_;
   double tmp77_ = (tmp76_) * (tmp16_);
   double tmp78_ = (tmp71_) * tmp20_;
   double tmp79_ = tmp77_ + tmp78_;
   double tmp80_ = tmp10_ * (tmp27_);
   double tmp81_ = tmp13_ * tmp28_;
   double tmp82_ = tmp80_ + tmp81_;
   double tmp83_ = tmp17_ * tmp29_;
   double tmp84_ = tmp82_ + tmp83_;
   double tmp85_ = tmp19_ * tmp30_;
   double tmp86_ = tmp84_ + tmp85_;
   double tmp87_ = tmp30_ * (tmp27_);
   double tmp88_ = tmp21_ * tmp87_;
   double tmp89_ = tmp86_ + tmp88_;
   double tmp90_ = tmp49_ * (tmp23_);
   double tmp91_ = tmp90_ + tmp90_;
   double tmp92_ = (tmp91_) * (tmp27_);
   double tmp93_ = tmp92_ + tmp92_;
   double tmp94_ = (tmp93_) * (tmp27_);
   double tmp95_ = (tmp91_) * tmp28_;
   double tmp96_ = tmp94_ + tmp95_;
   double tmp97_ = (tmp96_) * (tmp27_);
   double tmp98_ = (tmp91_) * tmp29_;
   double tmp99_ = tmp97_ + tmp98_;
   double tmp100_ = tmp10_ * (tmp35_);
   double tmp101_ = tmp13_ * tmp36_;
   double tmp102_ = tmp100_ + tmp101_;
   double tmp103_ = tmp17_ * tmp37_;
   double tmp104_ = tmp102_ + tmp103_;
   double tmp105_ = tmp19_ * tmp38_;
   double tmp106_ = tmp104_ + tmp105_;
   double tmp107_ = tmp38_ * (tmp35_);
   double tmp108_ = tmp21_ * tmp107_;
   double tmp109_ = tmp106_ + tmp108_;
   double tmp110_ = tmp49_ * (tmp31_);
   double tmp111_ = tmp110_ + tmp110_;
   double tmp112_ = (tmp111_) * (tmp35_);
   double tmp113_ = tmp112_ + tmp112_;
   double tmp114_ = (tmp113_) * (tmp35_);
   double tmp115_ = (tmp111_) * tmp36_;
   double tmp116_ = tmp114_ + tmp115_;
   double tmp117_ = (tmp116_) * (tmp35_);
   double tmp118_ = (tmp111_) * tmp37_;
   double tmp119_ = tmp117_ + tmp118_;
   double tmp120_ = tmp49_ * (tmp3_);
   double tmp121_ = tmp120_ + tmp120_;
   double tmp122_ = (tmp121_) * (tmp6_);
   double tmp123_ = tmp122_ + tmp122_;
   double tmp124_ = (tmp123_) * (tmp6_);
   double tmp125_ = (tmp121_) * tmp7_;
   double tmp126_ = tmp124_ + tmp125_;
   double tmp127_ = (tmp126_) * (tmp6_);
   double tmp128_ = (tmp121_) * tmp8_;
   double tmp129_ = tmp127_ + tmp128_;
   double tmp130_ = tmp49_ * (tmp12_);
   double tmp131_ = tmp130_ + tmp130_;
   double tmp132_ = (tmp131_) * (tmp16_);
   double tmp133_ = tmp132_ + tmp132_;
   double tmp134_ = (tmp133_) * (tmp16_);
   double tmp135_ = (tmp131_) * tmp18_;
   double tmp136_ = tmp134_ + tmp135_;
   double tmp137_ = (tmp136_) * (tmp16_);
   double tmp138_ = (tmp131_) * tmp20_;
   double tmp139_ = tmp137_ + tmp138_;
   double tmp140_ = tmp49_ * (tmp24_);
   double tmp141_ = tmp140_ + tmp140_;
   double tmp142_ = (tmp141_) * (tmp27_);
   double tmp143_ = tmp142_ + tmp142_;
   double tmp144_ = (tmp143_) * (tmp27_);
   double tmp145_ = (tmp141_) * tmp28_;
   double tmp146_ = tmp144_ + tmp145_;
   double tmp147_ = (tmp146_) * (tmp27_);
   double tmp148_ = (tmp141_) * tmp29_;
   double tmp149_ = tmp147_ + tmp148_;
   double tmp150_ = tmp49_ * (tmp32_);
   double tmp151_ = tmp150_ + tmp150_;
   double tmp152_ = (tmp151_) * (tmp35_);
   double tmp153_ = tmp152_ + tmp152_;
   double tmp154_ = (tmp153_) * (tmp35_);
   double tmp155_ = (tmp151_) * tmp36_;
   double tmp156_ = tmp154_ + tmp155_;
   double tmp157_ = (tmp156_) * (tmp35_);
   double tmp158_ = (tmp151_) * tmp37_;
   double tmp159_ = tmp157_ + tmp158_;
   double tmp160_ = (tmp51_) * tmp10_;
   double tmp161_ = (tmp53_) * tmp13_;
   double tmp162_ = tmp160_ + tmp161_;
   double tmp163_ = (tmp56_) * tmp17_;
   double tmp164_ = tmp162_ + tmp163_;
   double tmp165_ = (tmp59_) * tmp19_;
   double tmp166_ = tmp164_ + tmp165_;
   double tmp167_ = (tmp59_) * (tmp6_);
   double tmp168_ = (tmp51_) * tmp9_;
   double tmp169_ = tmp167_ + tmp168_;
   double tmp170_ = (tmp169_) * tmp21_;
   double tmp171_ = tmp166_ + tmp170_;
   double tmp172_ = (tmp71_) * tmp10_;
   double tmp173_ = (tmp73_) * tmp13_;
   double tmp174_ = tmp172_ + tmp173_;
   double tmp175_ = (tmp76_) * tmp17_;
   double tmp176_ = tmp174_ + tmp175_;
   double tmp177_ = (tmp79_) * tmp19_;
   double tmp178_ = tmp176_ + tmp177_;
   double tmp179_ = (tmp79_) * (tmp16_);
   double tmp180_ = (tmp71_) * tmp22_;
   double tmp181_ = tmp179_ + tmp180_;
   double tmp182_ = (tmp181_) * tmp21_;
   double tmp183_ = tmp178_ + tmp182_;
   double tmp184_ = (tmp91_) * tmp10_;
   double tmp185_ = (tmp93_) * tmp13_;
   double tmp186_ = tmp184_ + tmp185_;
   double tmp187_ = (tmp96_) * tmp17_;
   double tmp188_ = tmp186_ + tmp187_;
   double tmp189_ = (tmp99_) * tmp19_;
   double tmp190_ = tmp188_ + tmp189_;
   double tmp191_ = (tmp99_) * (tmp27_);
   double tmp192_ = (tmp91_) * tmp30_;
   double tmp193_ = tmp191_ + tmp192_;
   double tmp194_ = (tmp193_) * tmp21_;
   double tmp195_ = tmp190_ + tmp194_;
   double tmp196_ = (tmp111_) * tmp10_;
   double tmp197_ = (tmp113_) * tmp13_;
   double tmp198_ = tmp196_ + tmp197_;
   double tmp199_ = (tmp116_) * tmp17_;
   double tmp200_ = tmp198_ + tmp199_;
   double tmp201_ = (tmp119_) * tmp19_;
   double tmp202_ = tmp200_ + tmp201_;
   double tmp203_ = (tmp119_) * (tmp35_);
   double tmp204_ = (tmp111_) * tmp38_;
   double tmp205_ = tmp203_ + tmp204_;
   double tmp206_ = (tmp205_) * tmp21_;
   double tmp207_ = tmp202_ + tmp206_;
   double tmp208_ = tmp49_ * (tmp48_);
   double tmp209_ = (tmp121_) * tmp10_;
   double tmp210_ = (tmp123_) * tmp13_;
   double tmp211_ = tmp209_ + tmp210_;
   double tmp212_ = (tmp126_) * tmp17_;
   double tmp213_ = tmp211_ + tmp212_;
   double tmp214_ = (tmp129_) * tmp19_;
   double tmp215_ = tmp213_ + tmp214_;
   double tmp216_ = (tmp129_) * (tmp6_);
   double tmp217_ = (tmp121_) * tmp9_;
   double tmp218_ = tmp216_ + tmp217_;
   double tmp219_ = (tmp218_) * tmp21_;
   double tmp220_ = tmp215_ + tmp219_;
   double tmp221_ = tmp49_ * (tmp69_);
   double tmp222_ = (tmp131_) * tmp10_;
   double tmp223_ = (tmp133_) * tmp13_;
   double tmp224_ = tmp222_ + tmp223_;
   double tmp225_ = (tmp136_) * tmp17_;
   double tmp226_ = tmp224_ + tmp225_;
   double tmp227_ = (tmp139_) * tmp19_;
   double tmp228_ = tmp226_ + tmp227_;
   double tmp229_ = (tmp139_) * (tmp16_);
   double tmp230_ = (tmp131_) * tmp22_;
   double tmp231_ = tmp229_ + tmp230_;
   double tmp232_ = (tmp231_) * tmp21_;
   double tmp233_ = tmp228_ + tmp232_;
   double tmp234_ = tmp49_ * (tmp89_);
   double tmp235_ = (tmp141_) * tmp10_;
   double tmp236_ = (tmp143_) * tmp13_;
   double tmp237_ = tmp235_ + tmp236_;
   double tmp238_ = (tmp146_) * tmp17_;
   double tmp239_ = tmp237_ + tmp238_;
   double tmp240_ = (tmp149_) * tmp19_;
   double tmp241_ = tmp239_ + tmp240_;
   double tmp242_ = (tmp149_) * (tmp27_);
   double tmp243_ = (tmp141_) * tmp30_;
   double tmp244_ = tmp242_ + tmp243_;
   double tmp245_ = (tmp244_) * tmp21_;
   double tmp246_ = tmp241_ + tmp245_;
   double tmp247_ = tmp49_ * (tmp109_);
   double tmp248_ = (tmp151_) * tmp10_;
   double tmp249_ = (tmp153_) * tmp13_;
   double tmp250_ = tmp248_ + tmp249_;
   double tmp251_ = (tmp156_) * tmp17_;
   double tmp252_ = tmp250_ + tmp251_;
   double tmp253_ = (tmp159_) * tmp19_;
   double tmp254_ = tmp252_ + tmp253_;
   double tmp255_ = (tmp159_) * (tmp35_);
   double tmp256_ = (tmp151_) * tmp38_;
   double tmp257_ = tmp255_ + tmp256_;
   double tmp258_ = (tmp257_) * tmp21_;
   double tmp259_ = tmp254_ + tmp258_;

  mVal[0] = (mLocRegDistxy1_x + (tmp1_) * (tmp48_) + mLocRegDistxy2_x + (tmp11_) * (tmp69_)) - (mLocRegDistxy3_x + (tmp23_) * (tmp89_) + mLocRegDistxy4_x + (tmp31_) * (tmp109_));

  mCompDer[0][0] = 0;
  mCompDer[0][1] = (tmp208_ + (tmp171_) * (tmp1_) + tmp221_ + (tmp183_) * (tmp11_)) - (tmp234_ + (tmp195_) * (tmp23_) + tmp247_ + (tmp207_) * (tmp31_));
  mCompDer[0][2] = ((tmp220_) * (tmp1_) + (tmp233_) * (tmp11_)) - ((tmp246_) * (tmp23_) + (tmp259_) * (tmp31_));
  mCompDer[0][3] = ((tmp6_) * (tmp1_) + (tmp16_) * (tmp11_)) - ((tmp27_) * (tmp23_) + (tmp35_) * (tmp31_));
  mCompDer[0][4] = (tmp7_ * (tmp1_) + tmp18_ * (tmp11_)) - (tmp28_ * (tmp23_) + tmp36_ * (tmp31_));
  mCompDer[0][5] = (tmp8_ * (tmp1_) + tmp20_ * (tmp11_)) - (tmp29_ * (tmp23_) + tmp37_ * (tmp31_));
  mCompDer[0][6] = (tmp9_ * (tmp1_) + tmp22_ * (tmp11_)) - (tmp30_ * (tmp23_) + tmp38_ * (tmp31_));
  mCompDer[0][7] = (tmp46_ * (tmp1_) + tmp67_ * (tmp11_)) - (tmp87_ * (tmp23_) + tmp107_ * (tmp31_));
  mVal[1] = (mLocRegDistxy1_y + (tmp3_) * (tmp48_) + mLocRegDistxy2_y + (tmp12_) * (tmp69_)) - (mLocRegDistxy3_y + (tmp24_) * (tmp89_) + mLocRegDistxy4_y + (tmp32_) * (tmp109_));

  mCompDer[1][0] = 0;
  mCompDer[1][1] = ((tmp171_) * (tmp3_) + (tmp183_) * (tmp12_)) - ((tmp195_) * (tmp24_) + (tmp207_) * (tmp32_));
  mCompDer[1][2] = (tmp208_ + (tmp220_) * (tmp3_) + tmp221_ + (tmp233_) * (tmp12_)) - (tmp234_ + (tmp246_) * (tmp24_) + tmp247_ + (tmp259_) * (tmp32_));
  mCompDer[1][3] = ((tmp6_) * (tmp3_) + (tmp16_) * (tmp12_)) - ((tmp27_) * (tmp24_) + (tmp35_) * (tmp32_));
  mCompDer[1][4] = (tmp7_ * (tmp3_) + tmp18_ * (tmp12_)) - (tmp28_ * (tmp24_) + tmp36_ * (tmp32_));
  mCompDer[1][5] = (tmp8_ * (tmp3_) + tmp20_ * (tmp12_)) - (tmp29_ * (tmp24_) + tmp37_ * (tmp32_));
  mCompDer[1][6] = (tmp9_ * (tmp3_) + tmp22_ * (tmp12_)) - (tmp30_ * (tmp24_) + tmp38_ * (tmp32_));
  mCompDer[1][7] = (tmp46_ * (tmp3_) + tmp67_ * (tmp12_)) - (tmp87_ * (tmp24_) + tmp107_ * (tmp32_));
}


void cREgDistDxDy_DRad_PPaEqPPs::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistDxDy_DRad_PPaEqPPs Has no Der Sec");
}

void cREgDistDxDy_DRad_PPaEqPPs::SetRegDistxy1_x(double aVal){ mLocRegDistxy1_x = aVal;}
void cREgDistDxDy_DRad_PPaEqPPs::SetRegDistxy1_y(double aVal){ mLocRegDistxy1_y = aVal;}
void cREgDistDxDy_DRad_PPaEqPPs::SetRegDistxy2_x(double aVal){ mLocRegDistxy2_x = aVal;}
void cREgDistDxDy_DRad_PPaEqPPs::SetRegDistxy2_y(double aVal){ mLocRegDistxy2_y = aVal;}
void cREgDistDxDy_DRad_PPaEqPPs::SetRegDistxy3_x(double aVal){ mLocRegDistxy3_x = aVal;}
void cREgDistDxDy_DRad_PPaEqPPs::SetRegDistxy3_y(double aVal){ mLocRegDistxy3_y = aVal;}
void cREgDistDxDy_DRad_PPaEqPPs::SetRegDistxy4_x(double aVal){ mLocRegDistxy4_x = aVal;}
void cREgDistDxDy_DRad_PPaEqPPs::SetRegDistxy4_y(double aVal){ mLocRegDistxy4_y = aVal;}



double * cREgDistDxDy_DRad_PPaEqPPs::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "RegDistxy1_x") return & mLocRegDistxy1_x;
   if (aName == "RegDistxy1_y") return & mLocRegDistxy1_y;
   if (aName == "RegDistxy2_x") return & mLocRegDistxy2_x;
   if (aName == "RegDistxy2_y") return & mLocRegDistxy2_y;
   if (aName == "RegDistxy3_x") return & mLocRegDistxy3_x;
   if (aName == "RegDistxy3_y") return & mLocRegDistxy3_y;
   if (aName == "RegDistxy4_x") return & mLocRegDistxy4_x;
   if (aName == "RegDistxy4_y") return & mLocRegDistxy4_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistDxDy_DRad_PPaEqPPs::mTheAuto("cREgDistDxDy_DRad_PPaEqPPs",cREgDistDxDy_DRad_PPaEqPPs::Alloc);


cElCompiledFonc *  cREgDistDxDy_DRad_PPaEqPPs::Alloc()
{  return new cREgDistDxDy_DRad_PPaEqPPs();
}


