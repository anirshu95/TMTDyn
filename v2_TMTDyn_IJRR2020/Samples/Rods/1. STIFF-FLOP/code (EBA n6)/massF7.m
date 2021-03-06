function [out1,out2,out3,out4] = massF7(in1,in2,s)
%MASSF7
%    [OUT1,OUT2,OUT3,OUT4] = MASSF7(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    30-Jan-2019 18:12:44

g_xsym = in1(:,13);
g_ysym = in1(:,14);
g_zsym = in1(:,15);
l_f_sym = in1(:,17);
m_f_sym = in1(:,16);
q34 = in2(:,34);
q35 = in2(:,35);
q36 = in2(:,36);
r_f_sym = in1(:,18);
u34 = in2(:,70);
u35 = in2(:,71);
u36 = in2(:,72);
t2 = l_f_sym.^2;
t3 = r_f_sym.^2;
t4 = t3.*3.0;
t5 = t2+t4;
t6 = m_f_sym.*t5.*(1.0./1.2e1);
t7 = m_f_sym.*t2.*(1.0./4.0);
t8 = t6+t7;
out1 = reshape([m_f_sym,0.0,0.0,0.0,0.0,0.0,0.0,m_f_sym,0.0,0.0,0.0,0.0,0.0,0.0,m_f_sym,0.0,0.0,0.0,0.0,0.0,0.0,t8,0.0,0.0,0.0,0.0,0.0,0.0,t8,0.0,0.0,0.0,0.0,0.0,0.0,m_f_sym.*t3.*(1.0./2.0)],[6,6]);
if nargout > 1
    t9 = q34.^2;
    t10 = q35.^2;
    t11 = q36.^2;
    t12 = -t9-t10-t11+1.0;
    t13 = 1.0./sqrt(t12);
    t14 = sqrt(t12);
    t15 = l_f_sym.*t14;
    t16 = l_f_sym.*q36;
    t17 = q36.*2.0;
    t18 = q34.*q35.*t13.*2.0;
    t19 = t14.*2.0;
    t20 = q34.*q36.*t13.*2.0;
    t21 = q34.*2.0;
    t22 = q35.*q36.*t13.*2.0;
    out2 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,t16-l_f_sym.*q34.*q35.*t13,-t15+l_f_sym.*t9.*t13,l_f_sym.*q34.*-2.0,t19+t9.*t13.*2.0,-t17+t18,q35.*2.0+t20,t15-l_f_sym.*t10.*t13,t16+l_f_sym.*q34.*q35.*t13,l_f_sym.*q35.*-2.0,t17+t18,t19+t10.*t13.*2.0,-t21+t22,l_f_sym.*q34-l_f_sym.*q35.*q36.*t13,l_f_sym.*q35+l_f_sym.*q34.*q36.*t13,0.0,q35.*-2.0+t20,t21+t22,t19+t11.*t13.*2.0],[6,36]);
end
if nargout > 2
    t23 = 1.0./t12.^(3.0./2.0);
    t24 = l_f_sym.*q34.*t13;
    t25 = l_f_sym.*q34.*t10.*t23;
    t26 = t24+t25;
    t34 = l_f_sym.*q34.*q35.*q36.*t23;
    t27 = l_f_sym-t34;
    t28 = l_f_sym.*q36.*t13;
    t29 = l_f_sym.*q36.*t10.*t23;
    t30 = t28+t29;
    t31 = l_f_sym.*q35.*t13;
    t32 = l_f_sym.*q35.*t9.*t23;
    t33 = t31+t32;
    t35 = l_f_sym+t34;
    t36 = l_f_sym.*q36.*t9.*t23;
    t37 = t28+t36;
    t38 = q35.*t13.*2.0;
    t39 = q35.*t9.*t23.*2.0;
    t40 = q34.*t13.*2.0;
    t41 = q34.*q35.*q36.*t23.*2.0;
    t42 = q36.*t13.*2.0;
    t43 = q36.*t9.*t23.*2.0;
    t44 = t41+2.0;
    t45 = t38+t39;
    t46 = q34.*t10.*t23.*2.0;
    t47 = t40+t46;
    t48 = t41-2.0;
    t49 = q36.*t10.*t23.*2.0;
    t50 = t42+t43;
    t51 = q34.*t11.*t23.*2.0;
    t52 = t42+t49;
    t53 = q35.*t11.*t23.*2.0;
    t54 = t40+t51;
    t55 = t38+t53;
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-t26.*u35+t27.*u36-t33.*u34,u34.*(l_f_sym.*q34.*t13.*3.0+l_f_sym.*q34.*t9.*t23)+t33.*u35+t37.*u36,l_f_sym.*u34.*-2.0,t45.*u35+t50.*u36+u34.*(t40+q34.*t9.*t23.*2.0),t45.*u34+t44.*u36-u35.*(t40-t46),t48.*u35+t50.*u34-u36.*(t40-t51),-u35.*(l_f_sym.*q35.*t13.*3.0+l_f_sym.*q35.*t10.*t23)-t26.*u34-t30.*u36,t26.*u35+t33.*u34+t35.*u36,l_f_sym.*u35.*-2.0,t47.*u35+t48.*u36-u34.*(t38-t39),t47.*u34+t52.*u36+u35.*(t38+q35.*t10.*t23.*2.0),t44.*u34+t52.*u35-u36.*(t38-t53),t27.*u34-t30.*u35-u36.*(t31+l_f_sym.*q35.*t11.*t23),t35.*u35+t37.*u34+u36.*(t24+l_f_sym.*q34.*t11.*t23),0.0,t44.*u35+t54.*u36-u34.*(t42-t43),t48.*u34+t55.*u36-u35.*(t42-t49),t54.*u34+t55.*u35+u36.*(t42+q36.*t11.*t23.*2.0)],[6,36]);
end
if nargout > 3
    out4 = [g_xsym;g_ysym;g_zsym;0.0;0.0;0.0];
end
