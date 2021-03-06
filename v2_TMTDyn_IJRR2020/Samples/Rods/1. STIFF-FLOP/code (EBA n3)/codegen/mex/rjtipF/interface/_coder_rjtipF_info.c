/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rjtipF_info.c
 *
 * Code generation for function '_coder_rjtipF_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rjtipF.h"
#include "_coder_rjtipF_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("rjtipF"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.3.0.713579 (R2017b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[28] = {
    "789ced5d4b6fe3d61566e6d5318ab603b44d933ed2381d4c52ccc47ada1a6765590f5bb2f5969f6921531225d1e643222959f6ca4081a28b2eb2eca23fa08b2c"
    "82aeba14d04dd14d81a2698aa240b328d0a03fa0c8a28b52a2ae2d7274471cf38a12a9730183be3ee4f92e8fcf3de7dc731fa45e4ba45ea328eaebeacf1df5a7",
    "f7b05fa3a8af515a7934bcdea1f4c5487f6d787d66a8a3729fbaa77b0ed17f3dbc56444161ba8a56e1588149b7f93223a91581e6996b36559167055a508a174d"
    "86921859e43a4c7540a9b11c53647966571ca96cb36a858f8f90ae2b7d52fff74883a99c15da3c2535e49be672a3156a443ebfc2bcff3d93f20961e4f368c81f",
    "d13f8cfd34f281674f6624d923cbbe90ffb9df1365e433456c7a7c2b6f178a8978fcfdf86e26eba98855c6239d2a6c33bec25fb7b38b69c70393edbc8b69e7d2"
    "f0fa86eeafab1bda756d780d6da0769c6070cccaeb3ea61d8f544a9f7f533c1f680929bc0786fa0dde8301ffaad82e73cc0dde6f2ce26d61f134fe88fe6162f7",
    "70a0125949ac4b34ff765f77654f2a5cdc0d6f7af27eaf2f54f628a2c895c5ae87e1390fc7963d3cad7074d9233665cf404e23fa7182699759fd305e5159a21e"
    "0e7fbbfaf2f76b7f0ddb87a79545c1c3f56fb37af73a060fe91da21f34f699b542aeb09a2fe6da87d19de37db1b017b969477602cea4765098ba5dfc9dda7f9b",
    "987699d5b73b863a2ac8be3fd2fdf59d0dedfae4daae5f61f89b95db0f31f8486e88def76ed20aab06079240732bacbcd966392521a8e10123b19599d9fddf59"
    "c43bc4e269fc11fd95f5a6fff3742035cf5324368f516c2bbc8d7ee047fffafba7e007a68467971fc8745a91706dbbf3bc980b5e5462bce08f1f73dbeef1039f",
    "609e372bc7aca14e8ddc37da7e427e60b9c629835f6dd5bbabd40629bdfb0e060fc90bd10df65faed01c2dc5ea33b3fb73ab2763ed3e1297adf67ee997ff007b"
    "ef747bef4d9f87f822cb1fefb0f96a6c275a29d46a179b60ef17a71f533a7b8f1b6f98959731ef478ddc776784ceca8216a22afd0cdfecf23a56f52383c5d3f8",
    "23faade2811adb65aa4d51550f8f4e5eb6e677a837e36f829d77ba9ddf0a9c5d145a75968b142367f9d666bd78b6178b829d5f543b8fc3332baf87863a757ddf"
    "c3017f56aeb1ea70a6e154bb9ec4e269fc11ddba5dd7e4a49af44101bbee0e3cab76fddb183ca47f88de6931b166a722af1f9e0744312b177c81a363ca3d76dd",
    "59f9d71bbbbe5c632559a9b1b6ea5fef8458defe2d0c1e921ba2ab6228a9af5faa8912278acd92d861a41a279e972afdf976eb71bdb1e0da83caf5fa865be221"
    "fe2786ba110fd1ade4f9866af412f9d99acff9f8b3fb308f3baffec06c9c2fefc4bab1e8e56536d9f507537e6f2417f67963eef1075f609e372bc79f63f82339",
    "22fab4fbf5f2cb6f283518aed95ff062afbe6e111b1fdc33d4a9ebfbee5d8f0ffaf519cf33b04295e9260485d83a81f88476203a8971437fcc60a37e3c86f95d"
    "e7fb87c24593e5575bf9031f5bae0613c7b96ccad771511e08faafbee8f5cdeb9a3cff24ff5269d0fde5a290e7c75c51817c903d7890e727c31fe27ffd7b91d5",
    "d704b1f87f52be5e7d759eee3ad71f4c757e00e911a7fee2d12465fffcc0d5e3074b900f72ba3f905adee6292b07c3fc5a362464cb87819d7dd945eb7bc01fe8"
    "df8bec7cb1bdfe8015c01f98f307ac30037ff02ef803e7fb833a7d14ca040ed2ad5039ac4456e94c9009e6b6dce30f60be78fc15159dfe7d7e42ccbebf6abedf",
    "2a9eddfb775d9c1784bcfe14f120af4f86bfd5f82c6ba85323f7595adf394ffbb6a89bf59dbfc0f0332baff73078485e886e984fa59b4dee62931568e9a230f0"
    "6df1b6505158512035eff08d09ed42f4da10b7d4a085aaea0810fe1f2ce2d313f0119d4c7c8015270affed8cff3ffd1f9cf3e0783f71c9d0625848078e957add",
    "bfe54d65aa7b073e17f9891ee679b3723cc6f047724474527e421b01946a9c482b2574c80d65b31ef68e61bfaf45bca9c51773b37f04f6fb4e130ff6fb92e16f"
    "35ff7380e18fe488e8a4ecbf202a693a9d91126ad7aeabc6dfdefcfe01b1fccfa4f3db5859a005cab9fb7c13583c8d3fa213c8eff725358bf81ef24053c4b36b",
    "3f582bdccef0c18bc3a0372ff9db111fb3dee1d3947bec3bf4e3f1edd7ebdd6362fbc0e0fc361cde34e683e0fc36b7e2c1f96d64f8437c3ffe8a0a2ebebfc2f0"
    "332bb7ef61f090dc107d6c5e67a5c689a296d872aa1fd8c3e269fc119d8c1f78aac9cd3390db2086b0d10fbc0efb009cef07ca8db5eca1c029d582c8c7dac276",
    "a01cdb4cba689dcfdce66be7693ef82a4d2cafff2d0c1e9217a21bec3f2349a26e9de589c576bceabaceb98cff65b5914cd5a359fda1ed37ba8081e46c8dffc5"
    "de1398df75badd178a4739da7fb47d1ce874dab1c38e2fc02759179de3ef94efb29c60da4156bfd66d5bbf29b7a4c1477b9cba7e731b8ba7f147746b79bf5a5b",
    "f0f42565ebb97eef479f40bcee74bb1ddc8ad51adeb5c46926164828d99c2074225117e56da0ffea8b5edfc87d6fe5fb183c2427447f215f1f15799a1562c678"
    "bd69b13d56d76b3a2b6fa313a3cd791b6ae94f9b10bfcfab1f303b7fcba552e5982f10593d672b9598dcec348eea3b947bfc00f4e7f15754f4fab7462cbe9f7c",
    "5eb3dca4259971eafa9c34164fe38fe856e283be84fa11029295bdfbb4aebe9aff2fc4f9f36adfcdc6f9ab5c7efb5c4c3ddf0aec6dd74395c865329f28b868fd"
    "25c4f9faa2d7b7f7201f6f110ff2f1d3c2d3caa2e0413e9e0c7fb0f7faa2d7b71562799def62f0909c107dfcfa1b94bdb76ef78d05d71e5448d9fde2043c4427",
    "bbfe46d399d1f738c1b493e43acc3fff1be2fc79b5fb66f338cfdbbb05ef7e2013961281987098ccaf09f9350aecfea2d9fd8f30fccccae9c7183c2427441f77"
    "0e83fec8808490e5e80a33bc7f5ef2fb56cf63284fc0477482e7318c15eb0cbedf15385f85f1c1bcfa09b3e383dde44ee5a8955d0f1fa58292ec6fb2fe4e28e9",
    "a2f318a07f8f7faf451d3fdc767e00c60fe3afa8c0f8c11e3c183f90e10feb3847f5eb0362f3bc5fc1e03d52297dfe122337e82633333bfe8945bc1d2c9ec61f"
    "d1adefdf1e4a6ae8f86db4dfff59f927d8ef79b5df66e3fa84f774bd7d110e08de80377daef86215a6cbb9e83b8cd08fc7b75faf77cf88cdf7be81c143f24274",
    "43fc2ed0529d152a8db359e5fd7bb7c443fc7f32010fd189cff75e4bcef6f8fdeeb3fc5fc0fe4f09cf2efb7fd13d4facd3f15a7dd55bc9c4c4c269bc1d3a7791"
    "fdef619e776abfc6e985593dbc8b799fa5e1f50ddd5fdfd9d0ae4f86d767c4e2ff49e7b0a193189c1affdb737e537fdee8e6ec857e81fd5ceec0b3cbfe3f6f85",
    "32c516175d3ddb6c14735b05a5158d56e2eeb1ffd08fc7b75faf776f13cbdfc3396c383c0beb3ee11cb6ebb22878700e1b19fe60ffc7b77f5ae770cecbf96bc6"
    "62360fe4ac7d7f70fe9a5bf1e0fc3532fcc1fe8f6f3fcefe7f84e107eb40619dd8cbdecb849ec13ad029e2c13a5032fca17f8f7f2f73fa486e1de8bc8c236695",
    "478271c4b4f0b4b22878308e20c3dfea386231d611dd9c0364f5bbbecb183c242f44378e23649991947d9a63ab05f692094bf5e17db3f2033d8b7853fbcee7f8"
    "78e205f1cd208ef8e36fbf09e304a7fb83145b4e1492b1e3e636bf155b5fdfcc75ce2fd75d749e440ff33cf46b7dd19ff3bf01f3cc14cc338fb6dbc4f800e699",
    "a78807f3cc64f85bcd1b31863a3572df9d11faf4fcc1322bf7e92a538eb2591f378e6c5b57da7fc91a05eb4acd7c175495147cdfd76578b69d1fda4d71f1b34e"
    "f534b176d84d56257f5028acc1bad205eac7fd02dff785785fdf6e88f7678b07f13e19fe2e89f7cb625ba8ca94ddf17e8e985ff801060fc911d15ff00bc30f1d",
    "4738553614b9f180dde74cef63f134fe884eca2f8c8acddeef0a505fde5b827901a7fb85b8b09bdd0c1fa42f59be9b396d56f98c92be70d1bc00f885f1ef65ce"
    "2fec11cb034d8acf5511f074777676dfeaf83189c5d3f8233a81f1e34052f6cf175d3d7e00f6def1f65e6a799ba7ac1c0cf36bd990902d1f0676f6e54db0f760",
    "efd57265afbd6705b0f7e6ec3d2bccc0debf0bf6def9f6be4e1f85328183742b540e2b91553a1364823917ad03057b3ffebdccc5f7fbc4f23eb7fd7eb05065ba"
    "0941c9339cd8ecd367b5cfb8774b3cc4ffc45037e2213af173a97412b4755e602f28c0bc80d3fdc3ee6e3c120aa7a4646d9797f96ca3113ef45dba683cf005e6",
    "79b372fc19863f9223a24fbb5f2fd73891564a957e9eb7541105856605b9846e4259739bf5f5738698ff78138387e48ce806ff31904a4afd1b37a43b75de208f"
    "c5d3f8233a9938e4466c331857c0feb229e2d9e5373acf03c11093dcc9d4a2ebca7188ceef4658de45f3c97fc33c6f568e5d439d1ab96ff4ff3475bfc1ca2599",
    "ad0b4c55ef2c6cd5cf5e05f24a26f120af441a4f2b8b8207792532fc7b98e7613f99bee8f5700becbc493cb0f3a4f1b4b2287860e7c9f0ef619e073baf2ffa79"
    "e214ac0b328907eb8248e3696551f0605d1019fe3dccf366e57884e18fe488e804cf0b5aeed0d2e0a333a5a624560def7382692f593dbcc9db5c61f89995df5b",
    "183c243f44574552522d59a9264a9c28364b6287916a9c785eaa3498ca19cc0fbf547fb4b0e125f2b3757ef8e3cfee835f70ba5f907762dd58f4f2329becfa83"
    "29bf37920bfbbc2ef81ed9ff01132cca8f", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 67800U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_rjtipF_info.c) */
