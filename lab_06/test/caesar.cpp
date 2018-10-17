#include "catch.hpp"
#include "main.hpp"

TEST_CASE("Shift character") {
  REQUIRE(shiftChar('a',     1) == 'b');
  REQUIRE(shiftChar('b',     1) == 'c');
  REQUIRE(shiftChar('c',     1) == 'd');
  REQUIRE(shiftChar('d',     1) == 'e');
  REQUIRE(shiftChar('e',     1) == 'f');
  REQUIRE(shiftChar('f',     1) == 'g');
  REQUIRE(shiftChar('g',     1) == 'h');
  REQUIRE(shiftChar('h',     1) == 'i');
  REQUIRE(shiftChar('i',     1) == 'j');
  REQUIRE(shiftChar('j',     1) == 'k');
  REQUIRE(shiftChar('k',     1) == 'l');
  REQUIRE(shiftChar('l',     1) == 'm');
  REQUIRE(shiftChar('m',     1) == 'n');
  REQUIRE(shiftChar('n',     1) == 'o');
  REQUIRE(shiftChar('o',     1) == 'p');
  REQUIRE(shiftChar('p',     1) == 'q');
  REQUIRE(shiftChar('q',     1) == 'r');
  REQUIRE(shiftChar('r',     1) == 's');
  REQUIRE(shiftChar('s',     1) == 't');
  REQUIRE(shiftChar('t',     1) == 'u');
  REQUIRE(shiftChar('u',     1) == 'v');
  REQUIRE(shiftChar('v',     1) == 'w');
  REQUIRE(shiftChar('w',     1) == 'x');
  REQUIRE(shiftChar('x',     1) == 'y');
  REQUIRE(shiftChar('y',     1) == 'z');
  REQUIRE(shiftChar('z',     1) == 'a');
  REQUIRE(shiftChar('b',    -1) == 'a');
  REQUIRE(shiftChar('b',   -26) == 'b');
  REQUIRE(shiftChar('b',   -27) == 'a');
  REQUIRE(shiftChar('z',    -1) == 'y');
  REQUIRE(shiftChar('a',    -1) == 'z');
  REQUIRE(shiftChar('a',    26) == 'a');
  REQUIRE(shiftChar('a', 26000) == 'a');
}

TEST_CASE("Encrypt Caesar") {
  REQUIRE(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
  REQUIRE(encryptCaesar("The quick brown fox jumps over the lazy dog.", 13) == "Gur dhvpx oebja sbk whzcf bire gur ynml qbt.");
  REQUIRE(encryptCaesar("Gur dhvpx oebja sbk whzcf bire gur ynml qbt.", 13) == "The quick brown fox jumps over the lazy dog.");
  REQUIRE(encryptCaesar("0>ju9+rR4(rqoFOM^0YlBv(Y{-:*L*Ff2=EqQbf{nSbBxH)Kd^336R#8di=42PS<7c7EUh=I39j8!2HB*$Sp3y*+RP60ia*k<$U-n0Rz_2m?|xL09)J_pChzp)kr7dpkG?Gky#KyB4}K893N(2HkPIw+C>kC?)nA_%wEZ%bZ?hoi1iR}OO8cGQ{Y1mzJiN<fDK_5X!y{U*reshy82z8glC>3%(X2yk@Z+xB+QE|qC)BT=Y::lOwbeXbY<IxzoraKxr_nE))kl=^%wm3PSF@uZ8T0w&^Q@$H_EEPyjP7T7#tqDxKB{SJglKTq-t+u:)z$0TsI<L%L0sFa0il?g1OFs(fCCg_lK>(v>Gt+Phy(Vpb9IyY{FKWseA|3+2$9@JW4FPjmCel!&Fel=q|Vr4+_6!aMx4@MVK4owYZ!!%%+FRWMbH&!6E)zf{7@TE%40{&-#m2)mnyfBmvX8P3Y^fEuGE{u!aTF<OFx#N-n35-s4ah0Vb9|5^>v8mv%dH*<z?DHP|<{:TUmOkv&G?b>BFD0SXr9iXOf}g1+f|T!6DW@mD:_u%rGgGP5ksm3KT^MatQ+paIxM6ebho}13_<8w-&m?%m+:bO}@%CTGQJ$vZ#LI!oO0m&Fh|!Qi-Fl8?I>8:^912Fjv>6JjI-g3_ZBTx_z8<V9_9<wX!u7YLqP)bcs%Jb3CBE#7^P9BK>A)EkSrV1SsFGAgGFer}C3injI_@cTOlDVL8Q{-1#_JTufJ_cXQe(HIe:7j(E^nsKRGb-RxC3hAsx>f{GRltq&AD:4xQ1Z08Ydi9t_J>7Av8akNA>WB<g-!8l-_lf!@*_Zt6ooh_TdJAG$|zUgeUnl%oF#q%C8oKEm1q&OxTs?W_DUGP@&^2K_IKFaC^-|m{SLYZX6+RDl<FSe}*-N<Gm0?sj2QIKjCeB%ZLV|:9k|Nq)tQ5sIO#k=C7AHv!zBzvx%wp3svH_:+<Awid1+)BZc7{+33eqMpv:vqn5W1$ep@%N#cKcb", 12) == "0>vg9+dD4(dcaRAY^0KxNh(K{-:*X*Rr2=QcCnr{zEnNjT)Wp^336D#8pu=42BE<7o7QGt=U39v8!2TN*$Eb3k*+DB60um*w<$G-z0Dl_2y?|jX09)V_bOtlb)wd7pbwS?Swk#WkN4}W893Z(2TwBUi+O>wO?)zM_%iQL%nL?tau1uD}AA8oSC{K1ylVuZ<rPW_5J!k{G*dqetk82l8sxO>3%(J2kw@L+jN+CQ|cO)NF=K::xAinqJnK<UjladmWjd_zQ))wx=^%iy3BER@gL8F0i&^C@$T_QQBkvB7F7#fcPjWN{EVsxWFc-f+g:)l$0FeU<X%X0eRm0ux?s1ARe(rOOs_xW>(h>Sf+Btk(Hbn9UkK{RWIeqM|3+2$9@VI4RBvyOqx!&Rqx=c|Hd4+_6!mYj4@YHW4aiKL!!%%+RDIYnT&!6Q)lr{7@FQ%40{&-#y2)yzkrNyhJ8B3K^rQgSQ{g!mFR<ARj#Z-z35-e4mt0Hn9|5^>h8yh%pT*<l?PTB|<{:FGyAwh&S?n>NRP0EJd9uJAr}s1+r|F!6PI@yP:_g%dSsSB5wey3WF^YmfC+bmUjY6qnta}13_<8i-&y?%y+:nA}@%OFSCV$hL#XU!aA0y&Rt|!Cu-Rx8?U>8:^912Rvh>6VvU-s3_LNFj_l8<H9_9<iJ!g7KXcB)noe%Vn3ONQ#7^B9NW>M)QwEdH1EeRSMsSRqd}O3uzvU_@oFAxPHX8C{-1#_VFgrV_oJCq(TUq:7v(Q^zeWDSn-DjO3tMej>r{SDxfc&MP:4jC1L08Kpu9f_V>7Mh8mwZM>IN<s-!8x-_xr!@*_Lf6aat_FpVMS$|lGsqGzx%aR#c%O8aWQy1c&AjFe?I_PGSB@&^2W_UWRmO^-|y{EXKLJ6+DPx<REq}*-Z<Sy0?ev2CUWvOqN%LXH|:9w|Zc)fC5eUA#w=O7MTh!lNlhj%ib3ehT_:+<Miup1+)NLo7{+33qcYbh:hcz5I1$qb@%Z#oWon");
}

