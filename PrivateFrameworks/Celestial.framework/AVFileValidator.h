/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVFileValidator : NSObject {
    struct AVFileValidatorPrivate { id x1; struct FigOpaqueMediaValidator {} *x2; struct FigMediaValidatorDataLocation { unsigned long long x_3_1_1; unsigned long long x_3_1_2; } x3; struct OpaqueCMByteStream {} *x4; BOOL x5; BOOL x6; id x7; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x8; void*x9; void*x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; out void*x17; void*x18; void*x19; void*x20; void*x21; void*x22; void*x23; void*x24; inout unsigned short x25; void*x26; int x27; in double x28; out void*x29; short x30; void*x31; void*x32; void*x33; void*x34; void*x35; const int x36; void*x37; const void*x38; void*x39; void*x40; void*x41; void*x42; unsigned short x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void* x66[ /* ? */ ]; void*x67; void*x68; void*x69; void*x70; void*x71; void*x72; void*x73; void*x74; void*x75; void*x76; void*x77; void*x78; void*x79; void*x80; out void*x81; void*x82; void*x83; void*x84; void*x85; void*x86; void*x87; void*x88; inout unsigned short x89; void*x90; int x91; in double x92; out void*x93; short x94; void*x95; void*x96; void*x97; void*x98; void*x99; const int x100; void*x101; const void*x102; void*x103; void*x104; void*x105; void*x106; unsigned short x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; out void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; long x132; int x133; BOOL x134; void*x135; void*x136; int x137; out in short x138; void*x139; void*x140; BOOL x141; out double x142; void*x143; void*x144; unsigned int x145/* : ? */; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; void*x153; unsigned char x154; out in void*x155; void*x156; in void*x157; short x158; void*x159; long doublex160; void*x161; void x162; void*x163; long x164; out void*x165; void*x166; const void*x167; void*x168; long x169; void*x170; void*x171; float x172; out const void*x173; short x174; void*x175; int x176; void*x177; void*x178; out in void*x179; unsigned short x180; int x181; void*x182; void*x183; long x184; void*x185; void*x186; out const void*x187; void*x188; long x189; void*x190; void*x191; float x192; out const void*x193; void*x194; long doublex195; void*x196; void x197; void*x198; long x199; out void*x200; void*x201; const void*x202; unsigned short x203; long doublex204; void*x205; short x206; void*x207; int x208; void*x209; void*x210; out in void*x211; unsigned short x212; int x213; void*x214; void*x215; long x216; void*x217; void*x218; out const void*x219; short x220; double x221; void*x222; void*x223; unsigned short x224; void*x225; short x226; void*x227; void*x228; void*x229; void*x230; unsigned long x231; int x232; unsigned int x233/* : ? */; const void*x234; const void*x235; void*x236; void*x237; const void*x238; void*x239; void*x240; void*x241; out const void*x242; short x243; void*x244; unsigned char x245; out const void*x246; void*x247; out void*x248; in double x249; void*x250; void*x251; int x252; out in void*x253; float x254; const void*x255; void*x256; void*x257; void*x258; out const void*x259; void*x260; unsigned char x261; out const void*x262; void*x263; out void*x264; in double x265; void*x266; void*x267; int x268; out in void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; void*x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; out void*x287; void*x288; void*x289; void*x290; void*x291; void*x292; void*x293; void*x294; void*x295; void*x296; void*x297; void*x298; void*x299; void*x300; void*x301; void*x302; void*x303; void*x304; void*x305; void*x306; void*x307; void*x308; void*x309; void*x310; void*x311; void*x312; void*x313; void*x314; void*x315; void*x316; void*x317; out void*x318; void*x319; void*x320; void*x321; void*x322; void*x323; void*x324; void*x325; void*x326; void*x327; void*x328; void*x329; void*x330; void*x331; void*x332; out void*x333; void*x334; void*x335; void*x336; void*x337; void*x338; void*x339; void*x340; } * _priv;
    NSString * _validationRules;
}

@property (retain) NSString *validationRules;

- (void)cancel;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (BOOL)isCompleted;
- (BOOL)isStreaming;
- (id)notificationForFileCheckResult:(id)arg1;
- (void)postNotificationForCallback:(id)arg1;
- (float)progress;
- (void)setValidationRules:(id)arg1;
- (id)url;
- (void)validate;
- (id)validateBlocking:(BOOL)arg1;
- (void)validateForCameraRoll;
- (BOOL)validateSyncWithError:(id*)arg1;
- (id)validationRules;

@end
