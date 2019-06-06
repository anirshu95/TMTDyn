function r_jtip = rjtipF(in1,in2,s)
%RJTIPF
%    R_JTIP = RJTIPF(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    06-Feb-2019 23:10:20

q1 = in2(:,1);
q2 = in2(:,2);
q3 = in2(:,3);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
q7 = in2(:,7);
q8 = in2(:,8);
q9 = in2(:,9);
q10 = in2(:,10);
q11 = in2(:,11);
q12 = in2(:,12);
q13 = in2(:,13);
q14 = in2(:,14);
q15 = in2(:,15);
q16 = in2(:,16);
q17 = in2(:,17);
q18 = in2(:,18);
q19 = in2(:,19);
q20 = in2(:,20);
q21 = in2(:,21);
q22 = in2(:,22);
q23 = in2(:,23);
q24 = in2(:,24);
t2 = q9+1.0./8.0e1;
t3 = q4.*q8.*(1.0./2.0);
t11 = q5.*q7.*(1.0./2.0);
t4 = q9+t3-t11+1.0./8.0e1;
t5 = q6.*q7.*(1.0./2.0);
t6 = q4.*q7.*(1.0./2.0);
t7 = q5.*q8.*(1.0./2.0);
t8 = q6.*t2.*(1.0./2.0);
t9 = t6+t7+t8;
t10 = q5.*t2.*(1.0./2.0);
t17 = q4.*t2.*(1.0./2.0);
t12 = q8+t5-t17;
t15 = q6.*q8.*(1.0./2.0);
t13 = q7+t10-t15;
t14 = q5.*t4.*(1.0./2.0);
t16 = q4.*t9.*(1.0./2.0);
t18 = q4.*q10.*(1.0./4.0);
t19 = q5.*q11.*(1.0./4.0);
t20 = q6.*q12.*(1.0./4.0);
t21 = t18+t19+t20-1.0;
t22 = q4.*(1.0./1.6e2);
t23 = q10.*(1.0./1.6e2);
t24 = q5.*q12.*(1.0./3.2e2);
t54 = q6.*q11.*(1.0./3.2e2);
t25 = t22+t23+t24-t54;
t26 = q4.*q10.*(1.0./3.2e2);
t27 = q5.*q11.*(1.0./3.2e2);
t28 = q6.*q12.*(1.0./3.2e2);
t29 = t26+t27+t28-1.0./8.0e1;
t30 = q4.*(1.0./2.0);
t31 = q10.*(1.0./2.0);
t32 = q5.*q12.*(1.0./4.0);
t53 = q6.*q11.*(1.0./4.0);
t33 = t30+t31+t32-t53;
t34 = q5.*t9.*(1.0./2.0);
t35 = q5.*(1.0./2.0);
t36 = q11.*(1.0./2.0);
t37 = q6.*q10.*(1.0./4.0);
t55 = q4.*q12.*(1.0./4.0);
t38 = t35+t36+t37-t55;
t39 = q6.*(1.0./1.6e2);
t40 = q12.*(1.0./1.6e2);
t41 = q4.*q11.*(1.0./3.2e2);
t58 = q5.*q10.*(1.0./3.2e2);
t42 = t39+t40+t41-t58;
t43 = q6.*(1.0./2.0);
t44 = q12.*(1.0./2.0);
t45 = q4.*q11.*(1.0./4.0);
t57 = q5.*q10.*(1.0./4.0);
t46 = t43+t44+t45-t57;
t47 = q5.*(1.0./1.6e2);
t48 = q11.*(1.0./1.6e2);
t49 = q6.*q10.*(1.0./3.2e2);
t56 = q4.*q12.*(1.0./3.2e2);
t50 = t47+t48+t49-t56;
t51 = q6.*t13.*(1.0./2.0);
t52 = q6.*t9.*(1.0./2.0);
t59 = q4.*t12.*(1.0./2.0);
t60 = q15+1.0./8.0e1;
t61 = q13.*t38;
t62 = t21.*t60;
t76 = q14.*t33;
t63 = t61+t62-t76;
t64 = q14.*t46;
t65 = q13.*t21;
t74 = t38.*t60;
t66 = t64+t65-t74;
t67 = q13.*t33;
t68 = q14.*t38;
t69 = t46.*t60;
t70 = t67+t68+t69;
t71 = t33.*t60;
t72 = q14.*t21;
t75 = q13.*t46;
t73 = t71+t72-t75;
t77 = t46.*t73;
t78 = t33.*t70;
t79 = t21.*t66;
t80 = t33.*t63;
t81 = t38.*t70;
t82 = q16.*t46.*(1.0./2.0);
t109 = q18.*t33.*(1.0./2.0);
t110 = q17.*t21.*(1.0./2.0);
t83 = t35+t36+t37-t55+t82-t109-t110;
t84 = q17.*t33.*(1.0./1.6e2);
t115 = q16.*t38.*(1.0./1.6e2);
t116 = q18.*t21.*(1.0./1.6e2);
t85 = t39+t40+t41-t58+t84-t115-t116;
t86 = q17.*t33.*(1.0./2.0);
t113 = q16.*t38.*(1.0./2.0);
t114 = q18.*t21.*(1.0./2.0);
t87 = t43+t44+t45-t57+t86-t113-t114;
t88 = q16.*t46.*(1.0./1.6e2);
t111 = q18.*t33.*(1.0./1.6e2);
t112 = q17.*t21.*(1.0./1.6e2);
t89 = t47+t48+t49-t56+t88-t111-t112;
t90 = q16.*t33.*(1.0./2.0);
t91 = q17.*t38.*(1.0./2.0);
t92 = q18.*t46.*(1.0./2.0);
t93 = t18+t19+t20+t90+t91+t92-1.0;
t94 = q18.*t38.*(1.0./1.6e2);
t107 = q17.*t46.*(1.0./1.6e2);
t108 = q16.*t21.*(1.0./1.6e2);
t95 = t22+t23+t24-t54+t94-t107-t108;
t96 = q18.*t38.*(1.0./2.0);
t105 = q17.*t46.*(1.0./2.0);
t106 = q16.*t21.*(1.0./2.0);
t97 = t30+t31+t32-t53+t96-t105-t106;
t98 = q16.*t33.*(1.0./1.6e2);
t99 = q17.*t38.*(1.0./1.6e2);
t100 = q18.*t46.*(1.0./1.6e2);
t101 = t26+t27+t28+t98+t99+t100-1.0./8.0e1;
t102 = t21.*t73;
t103 = t38.*t66;
t104 = t46.*t70;
t117 = t21.*t63;
t118 = q21+1.0./8.0e1;
t119 = t87.*t118;
t120 = q19.*t97;
t121 = q20.*t83;
t122 = t119+t120+t121;
t123 = t97.*t118;
t124 = q20.*t93;
t132 = q19.*t87;
t125 = t123+t124-t132;
t126 = t93.*t118;
t127 = q19.*t83;
t133 = q20.*t97;
t128 = t126+t127-t133;
t129 = q19.*t93;
t130 = q20.*t87;
t134 = t83.*t118;
t131 = t129+t130-t134;
t135 = t97.*t122;
t136 = t87.*t125;
t137 = t93.*t131;
t138 = t83.*t122;
t139 = t93.*t125;
t140 = t97.*t128;
t141 = q22.*t87.*(1.0./2.0);
t168 = q23.*t93.*(1.0./2.0);
t169 = q24.*t97.*(1.0./2.0);
t142 = t35+t36+t37-t55+t82-t109-t110+t141-t168-t169;
t143 = q23.*t97.*(1.0./1.6e2);
t174 = q22.*t83.*(1.0./1.6e2);
t175 = q24.*t93.*(1.0./1.6e2);
t144 = t39+t40+t41-t58+t84-t115-t116+t143-t174-t175;
t145 = q23.*t97.*(1.0./2.0);
t172 = q22.*t83.*(1.0./2.0);
t173 = q24.*t93.*(1.0./2.0);
t146 = t43+t44+t45-t57+t86-t113-t114+t145-t172-t173;
t147 = q22.*t87.*(1.0./1.6e2);
t170 = q23.*t93.*(1.0./1.6e2);
t171 = q24.*t97.*(1.0./1.6e2);
t148 = t47+t48+t49-t56+t88-t111-t112+t147-t170-t171;
t149 = q22.*t97.*(1.0./2.0);
t150 = q23.*t83.*(1.0./2.0);
t151 = q24.*t87.*(1.0./2.0);
t152 = t18+t19+t20+t90+t91+t92+t149+t150+t151-1.0;
t153 = q24.*t83.*(1.0./1.6e2);
t166 = q22.*t93.*(1.0./1.6e2);
t167 = q23.*t87.*(1.0./1.6e2);
t154 = t22+t23+t24-t54+t94-t107-t108+t153-t166-t167;
t155 = q24.*t83.*(1.0./2.0);
t164 = q22.*t93.*(1.0./2.0);
t165 = q23.*t87.*(1.0./2.0);
t156 = t30+t31+t32-t53+t96-t105-t106+t155-t164-t165;
t157 = q22.*t97.*(1.0./1.6e2);
t158 = q23.*t83.*(1.0./1.6e2);
t159 = q24.*t87.*(1.0./1.6e2);
t160 = t26+t27+t28+t98+t99+t100+t157+t158+t159-1.0./8.0e1;
t161 = t87.*t122;
t162 = t93.*t128;
t163 = t83.*t131;
t179 = t83.*t128;
t180 = t38.*t63;
t181 = q6.*t12.*(1.0./2.0);
t176 = q1+q7+t10+t14-t15+t16+t77+t78+t79+t135+t136+t137-t179-t180-t181;
t182 = t87.*t131;
t183 = q4.*t4.*(1.0./2.0);
t212 = t46.*t66;
t177 = q2+q8+t5-t17+t34+t51+t80+t81+t102+t138+t139+t140-t182-t183-t212;
t213 = t97.*t125;
t229 = t33.*t73;
t230 = q5.*t13.*(1.0./2.0);
t178 = q3+q9+t3-t11+t52+t59+t103+t104+t117+t161+t162+t163-t213-t229-t230+1.0./4.0e1;
t184 = q6.*7.25e-3;
t185 = q12.*7.25e-3;
t186 = q4.*q11.*3.625e-3;
t187 = q17.*t33.*7.25e-3;
t188 = q23.*t97.*7.25e-3;
t224 = q5.*q10.*3.625e-3;
t225 = q16.*t38.*7.25e-3;
t226 = q22.*t83.*7.25e-3;
t227 = q24.*t93.*7.25e-3;
t228 = q18.*t21.*7.25e-3;
t189 = t184+t185+t186+t187+t188-t224-t225-t226-t227-t228;
t190 = q5.*7.25e-3;
t191 = q11.*7.25e-3;
t192 = q6.*q10.*3.625e-3;
t193 = q16.*t46.*7.25e-3;
t194 = q22.*t87.*7.25e-3;
t219 = q4.*q12.*3.625e-3;
t220 = q18.*t33.*7.25e-3;
t221 = q23.*t93.*7.25e-3;
t222 = q24.*t97.*7.25e-3;
t223 = q17.*t21.*7.25e-3;
t195 = t190+t191+t192+t193+t194-t219-t220-t221-t222-t223;
t196 = q4.*7.25e-3;
t197 = q10.*7.25e-3;
t198 = q5.*q12.*3.625e-3;
t199 = q18.*t38.*7.25e-3;
t200 = q24.*t83.*7.25e-3;
t214 = q6.*q11.*3.625e-3;
t215 = q17.*t46.*7.25e-3;
t216 = q22.*t93.*7.25e-3;
t217 = q23.*t87.*7.25e-3;
t218 = q16.*t21.*7.25e-3;
t201 = t196+t197+t198+t199+t200-t214-t215-t216-t217-t218;
t202 = q4.*q10.*3.625e-3;
t203 = q5.*q11.*3.625e-3;
t204 = q6.*q12.*3.625e-3;
t205 = q16.*t33.*7.25e-3;
t206 = q17.*t38.*7.25e-3;
t207 = q18.*t46.*7.25e-3;
t208 = q22.*t97.*7.25e-3;
t209 = q23.*t83.*7.25e-3;
t210 = q24.*t87.*7.25e-3;
t211 = t202+t203+t204+t205+t206+t207+t208+t209+t210-1.45e-2;
r_jtip = reshape([q1,q1+q7+t10+t14+t16-q6.*q8.*(1.0./2.0)-q6.*t12.*(1.0./2.0),q1+q7+t10+t14-t15+t16+t77+t78+t79-q6.*t12.*(1.0./2.0)-t38.*t63,t176,t176,q2,q2+q8+t5+t34+t51-q4.*t2.*(1.0./2.0)-q4.*t4.*(1.0./2.0),q2+q8+t5-t17+t34+t51+t80+t81+t102-q4.*t4.*(1.0./2.0)-t46.*t66,t177,t177,q3+1.0./8.0e1,q3+q9+t3-t11+t52+t59-q5.*t13.*(1.0./2.0)+1.0./4.0e1,q3+q9+t3-t11+t52+t59+t103+t104+t117-q5.*t13.*(1.0./2.0)-t33.*t73+1.0./4.0e1,t178,t178,q1+q5.*(1.0./8.0e1)+q4.*q6.*(1.0./1.6e2),q1+q7+t10+t14-t15+t16-q6.*t12.*(1.0./2.0)-t29.*t38-t21.*t50+t25.*t46+t33.*t42,q1+q7+t10+t14-t15+t16+t77+t78+t79-q6.*t12.*(1.0./2.0)-t38.*t63+t85.*t97+t87.*t95-t89.*t93-t83.*t101,q1+q7+t10+t14-t15+t16+t77+t78+t79+t135+t136+t137-q6.*t12.*(1.0./2.0)-t38.*t63-t83.*t128+t144.*t156+t146.*t154-t148.*t152-t142.*t160,q1+q7+t10+t14-t15+t16+t77+t78+t79+t135+t136+t137-t179-t180-t181+t156.*t189+t146.*t201-t152.*t195-t142.*t211,q2-q4.*(1.0./8.0e1)+q5.*q6.*(1.0./1.6e2),q2+q8+t5-t17+t34+t51-q4.*t4.*(1.0./2.0)+t21.*t25+t29.*t33+t38.*t42+t46.*t50,q2+q8+t5-t17+t34+t51+t80+t81+t102-q4.*t4.*(1.0./2.0)-t46.*t66+t83.*t85+t87.*t89+t93.*t95+t97.*t101,q2+q8+t5-t17+t34+t51+t80+t81+t102+t138+t139+t140-q4.*t4.*(1.0./2.0)-t46.*t66-t87.*t131+t142.*t144+t146.*t148+t152.*t154+t156.*t160,q2+q8+t5-t17+t34+t51+t80+t81+t102+t138+t139+t140-t182-t183-t212+t142.*t189+t146.*t195+t152.*t201+t156.*t211,q3-q4.^2.*(1.0./3.2e2)-q5.^2.*(1.0./3.2e2)+q6.^2.*(1.0./3.2e2)+1.0./4.0e1,q3+q9+t3-t11+t52+t59-q5.*t13.*(1.0./2.0)+t21.*t29-t25.*t33-t38.*t50+t42.*t46+1.0./4.0e1,q3+q9+t3-t11+t52+t59+t103+t104+t117-q5.*t13.*(1.0./2.0)-t33.*t73-t83.*t89+t85.*t87-t95.*t97+t93.*t101+1.0./4.0e1,q3+q9+t3-t11+t52+t59+t103+t104+t117+t161+t162+t163-q5.*t13.*(1.0./2.0)-t33.*t73-t97.*t125-t142.*t148+t144.*t146-t154.*t156+t152.*t160+1.0./4.0e1,q3+q9+t3-t11+t52+t59+t103+t104+t117+t161+t162+t163-t213-t229-t230+t146.*t189-t142.*t195-t156.*t201+t152.*t211+1.0./4.0e1],[5,6]);