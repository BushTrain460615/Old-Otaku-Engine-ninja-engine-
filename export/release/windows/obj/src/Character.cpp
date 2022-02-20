#include <hxcpp.h>

#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae240c01d039da8e_10_new,"Character","new",0x74bf54fb,"Character.new","Character.hx",10,0xf073a2d5)
static const int _hx_array_data_e3a4bb89_2[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_3[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_4[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_5[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_e3a4bb89_6[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,
};
static const int _hx_array_data_e3a4bb89_7[] = {
	(int)0,
};
static const int _hx_array_data_e3a4bb89_8[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_9[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_10[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_11[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_12[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_13[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const int _hx_array_data_e3a4bb89_14[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,
};
static const int _hx_array_data_e3a4bb89_15[] = {
	(int)2,
};
static const int _hx_array_data_e3a4bb89_16[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_17[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_18[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,
};
static const int _hx_array_data_e3a4bb89_19[] = {
	(int)30,(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,
};
static const int _hx_array_data_e3a4bb89_20[] = {
	(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,(int)25,(int)26,(int)27,(int)28,(int)29,
};
static const int _hx_array_data_e3a4bb89_21[] = {
	(int)10,(int)11,(int)12,(int)13,(int)14,(int)15,(int)16,(int)17,(int)18,(int)19,(int)20,(int)21,(int)22,(int)23,(int)24,
};
static const int _hx_array_data_e3a4bb89_22[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,
};
static const int _hx_array_data_e3a4bb89_23[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,
};
static const int _hx_array_data_e3a4bb89_24[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,
};
static const int _hx_array_data_e3a4bb89_25[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,
};
static const int _hx_array_data_e3a4bb89_26[] = {
	(int)0,(int)2,(int)6,
};
static const int _hx_array_data_e3a4bb89_27[] = {
	(int)8,(int)10,(int)12,(int)14,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_629_update,"Character","update",0x0e18944e,"Character.update","Character.hx",629,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_665_dance,"Character","dance",0xde4da48e,"Character.dance","Character.hx",665,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_726_playAnim,"Character","playAnim",0xed2bd3aa,"Character.playAnim","Character.hx",726,0xf073a2d5)
HX_LOCAL_STACK_FRAME(_hx_pos_ae240c01d039da8e_757_addOffset,"Character","addOffset",0x6dc9376f,"Character.addOffset","Character.hx",757,0xf073a2d5)

void Character_obj::__construct(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            		 ::Dynamic isPlayer = __o_isPlayer;
            		if (::hx::IsNull(__o_isPlayer)) isPlayer = false;
            	HX_GC_STACKFRAME(&_hx_pos_ae240c01d039da8e_10_new)
HXLINE( 658)		this->danced = false;
HXLINE(  18)		this->holdTimer = ((Float)0);
HXLINE(  16)		this->curCharacter = HX_("bf",c4,55,00,00);
HXLINE(  15)		this->isPlayer = false;
HXLINE(  13)		this->debugMode = false;
HXLINE(  22)		super::__construct(x,y,null());
HXLINE(  24)		this->animOffsets =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  25)		this->curCharacter = character;
HXLINE(  26)		this->isPlayer = ( (bool)(isPlayer) );
HXLINE(  28)		 ::flixel::graphics::frames::FlxAtlasFrames tex;
HXLINE(  29)		this->set_antialiasing(true);
HXLINE(  31)		::String _hx_switch_0 = this->curCharacter;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE( 302)			::String library = null();
HXDLIN( 302)			::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("BOYFRIEND",4a,99,10,e2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 302)			 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("BOYFRIEND",4a,99,10,e2)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 303)			this->set_frames(tex1);
HXLINE( 304)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 305)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 306)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 307)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 308)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 309)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 310)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 311)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 312)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 313)			this->animation->addByPrefix(HX_("hey",dc,42,4f,00),HX_("BF HEY",60,1e,f8,c6),24,false,null(),null());
HXLINE( 315)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF dies",0f,cb,bf,64),24,false,null(),null());
HXLINE( 316)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("BF Dead Loop",04,f4,36,2f),24,true,null(),null());
HXLINE( 317)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("BF Dead confirm",80,6b,f9,23),24,false,null(),null());
HXLINE( 319)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("BF idle shaking",53,d0,da,8d),24,null(),null(),null());
HXLINE( 321)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 322)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 323)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE( 324)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,-6);
HXLINE( 325)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-50);
HXLINE( 326)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,27);
HXLINE( 327)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-30,21);
HXLINE( 328)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,24);
HXLINE( 329)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-11,-19);
HXLINE( 330)			this->addOffset(HX_("hey",dc,42,4f,00),7,4);
HXLINE( 331)			this->addOffset(HX_("firstDeath",e4,d8,fc,14),37,11);
HXLINE( 332)			this->addOffset(HX_("deathLoop",b8,0b,79,2e),37,5);
HXLINE( 333)			this->addOffset(HX_("deathConfirm",2c,44,2b,12),37,69);
HXLINE( 334)			this->addOffset(HX_("scared",20,78,2a,3c),-4,null());
HXLINE( 336)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 338)			this->set_flipX(true);
HXLINE( 301)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-car",cb,95,e2,07)) ){
HXLINE( 369)			::String library = null();
HXDLIN( 369)			::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("bfCar",b0,c8,e3,b0)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 369)			 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("bfCar",b0,c8,e3,b0)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 370)			this->set_frames(tex1);
HXLINE( 371)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 372)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 373)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 374)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 375)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 376)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 377)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 378)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 379)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 381)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 382)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 383)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE( 384)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,-6);
HXLINE( 385)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-50);
HXLINE( 386)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,27);
HXLINE( 387)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-30,21);
HXLINE( 388)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,24);
HXLINE( 389)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-11,-19);
HXLINE( 390)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 392)			this->set_flipX(true);
HXLINE( 368)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-christmas",79,02,f4,24)) ){
HXLINE( 341)			::String library = null();
HXDLIN( 341)			::String tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/bfChristmas",d1,87,5c,b1)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 341)			 ::flixel::graphics::frames::FlxAtlasFrames tex1 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/bfChristmas",d1,87,5c,b1)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 342)			this->set_frames(tex1);
HXLINE( 343)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance",03,fa,cc,7f),24,false,null(),null());
HXLINE( 344)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 345)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 346)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 347)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 348)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS",8f,08,36,ae),24,false,null(),null());
HXLINE( 349)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS",e3,ba,cf,a7),24,false,null(),null());
HXLINE( 350)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS",f2,0c,cd,25),24,false,null(),null());
HXLINE( 351)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS",a8,a0,05,a9),24,false,null(),null());
HXLINE( 352)			this->animation->addByPrefix(HX_("hey",dc,42,4f,00),HX_("BF HEY",60,1e,f8,c6),24,false,null(),null());
HXLINE( 354)			this->addOffset(HX_("idle",14,a7,b3,45),-5,null());
HXLINE( 355)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 356)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-38,-7);
HXLINE( 357)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,-6);
HXLINE( 358)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-50);
HXLINE( 359)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,27);
HXLINE( 360)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-30,21);
HXLINE( 361)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,24);
HXLINE( 362)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-11,-19);
HXLINE( 363)			this->addOffset(HX_("hey",dc,42,4f,00),7,4);
HXLINE( 365)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 367)			this->set_flipX(true);
HXLINE( 340)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-holding-gf",92,81,6a,17)) ){
HXLINE( 560)			::String library = null();
HXDLIN( 560)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("bfAndGF",52,90,ab,69)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 560)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("bfAndGF",52,90,ab,69)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 561)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF idle dance w gf0",2b,c7,14,39),24,false,null(),null());
HXLINE( 562)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF NOTE UP0",23,e8,67,d4),24,false,null(),null());
HXLINE( 563)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF NOTE LEFT0",77,e0,7c,76),24,false,null(),null());
HXLINE( 564)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF NOTE RIGHT0",06,3f,26,eb),24,false,null(),null());
HXLINE( 565)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF NOTE DOWN0",bc,3f,f1,e1),24,false,null(),null());
HXLINE( 566)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF NOTE UP MISS0",c1,74,11,c1),24,false,null(),null());
HXLINE( 567)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF NOTE LEFT MISS0",ed,cb,f3,2d),24,false,null(),null());
HXLINE( 568)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF NOTE RIGHT MISS0",fe,46,9e,ed),24,false,null(),null());
HXLINE( 569)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF NOTE DOWN MISS0",88,f2,e6,3b),24,false,null(),null());
HXLINE( 571)			this->addOffset(HX_("idle",14,a7,b3,45),0,0);
HXLINE( 572)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,10);
HXLINE( 573)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-41,23);
HXLINE( 574)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),12,7);
HXLINE( 575)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-10,-10);
HXLINE( 576)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-29,10);
HXLINE( 577)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-41,23);
HXLINE( 578)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),12,7);
HXLINE( 579)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),-10,-10);
HXLINE( 581)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 583)			this->set_flipX(true);
HXLINE( 558)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-holding-gf-DEAD",7f,be,2b,48)) ){
HXLINE( 588)			::String library = null();
HXDLIN( 588)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("bfHoldingGF-DEAD",13,fd,bb,d0)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 588)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("bfHoldingGF-DEAD",13,fd,bb,d0)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 589)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF Dies with GF",08,9a,cd,d3),24,false,null(),null());
HXLINE( 590)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF Dies with GF",08,9a,cd,d3),24,false,null(),null());
HXLINE( 591)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("BF Dead with GF Loop",8b,65,0b,34),24,true,null(),null());
HXLINE( 592)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("RETRY confirm holding gf",14,e2,27,ab),24,false,null(),null());
HXLINE( 593)			this->animation->play(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 595)			this->addOffset(HX_("firstDeath",e4,d8,fc,14),null(),null());
HXLINE( 596)			this->addOffset(HX_("deathLoop",b8,0b,79,2e),-37,null());
HXLINE( 597)			this->addOffset(HX_("deathConfirm",2c,44,2b,12),-37,null());
HXLINE( 598)			this->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 600)			this->set_flipX(true);
HXLINE( 586)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-pixel",fd,03,90,37)) ){
HXLINE( 394)			::String library = null();
HXDLIN( 394)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPixel",be,30,3a,8f)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 394)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPixel",be,30,3a,8f)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 395)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("BF IDLE",f0,de,ca,52),24,false,null(),null());
HXLINE( 396)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF UP NOTE",7b,9d,4e,d3),24,false,null(),null());
HXLINE( 397)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("BF LEFT NOTE",4f,b9,34,d9),24,false,null(),null());
HXLINE( 398)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("BF RIGHT NOTE",b2,df,15,96),24,false,null(),null());
HXLINE( 399)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("BF DOWN NOTE",14,9f,6a,da),24,false,null(),null());
HXLINE( 400)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("BF UP MISS",85,d8,a0,d2),24,false,null(),null());
HXLINE( 401)			this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("BF LEFT MISS",59,f4,86,d8),24,false,null(),null());
HXLINE( 402)			this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("BF RIGHT MISS",bc,1a,68,95),24,false,null(),null());
HXLINE( 403)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("BF DOWN MISS",1e,da,bc,d9),24,false,null(),null());
HXLINE( 405)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 406)			this->addOffset(HX_("singUP",6a,52,21,b9),null(),null());
HXLINE( 407)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),null(),null());
HXLINE( 408)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),null(),null());
HXLINE( 409)			this->addOffset(HX_("singDOWN",31,2a,ad,36),null(),null());
HXLINE( 410)			this->addOffset(HX_("singUPmiss",66,22,08,8a),null(),null());
HXLINE( 411)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),null(),null());
HXLINE( 412)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),null(),null());
HXLINE( 413)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),null(),null());
HXLINE( 415)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 416)			this->updateHitbox();
HXLINE( 418)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 420)			this->set_width((this->get_width() - ( (Float)(100) )));
HXLINE( 421)			this->set_height((this->get_height() - ( (Float)(100) )));
HXLINE( 423)			this->set_antialiasing(false);
HXLINE( 425)			this->set_flipX(true);
HXLINE( 393)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("bf-pixel-dead",34,d0,3d,c4)) ){
HXLINE( 427)			::String library = null();
HXDLIN( 427)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPixelsDEAD",19,2b,e2,7b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 427)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPixelsDEAD",19,2b,e2,7b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 428)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("BF Dies pixel",d5,56,ac,77),24,false,null(),null());
HXLINE( 429)			this->animation->addByPrefix(HX_("firstDeath",e4,d8,fc,14),HX_("BF Dies pixel",d5,56,ac,77),24,false,null(),null());
HXLINE( 430)			this->animation->addByPrefix(HX_("deathLoop",b8,0b,79,2e),HX_("Retry Loop",5c,76,15,41),24,true,null(),null());
HXLINE( 431)			this->animation->addByPrefix(HX_("deathConfirm",2c,44,2b,12),HX_("RETRY CONFIRM",08,8c,5f,fd),24,false,null(),null());
HXLINE( 432)			this->animation->play(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 434)			this->addOffset(HX_("firstDeath",e4,d8,fc,14),null(),null());
HXLINE( 435)			this->addOffset(HX_("deathLoop",b8,0b,79,2e),-37,null());
HXLINE( 436)			this->addOffset(HX_("deathConfirm",2c,44,2b,12),-37,null());
HXLINE( 437)			this->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE( 439)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 440)			this->updateHitbox();
HXLINE( 441)			this->set_antialiasing(false);
HXLINE( 442)			this->set_flipX(true);
HXLINE( 426)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE( 159)			::String library = null();
HXDLIN( 159)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("DADDY_DEAREST",b1,a3,05,5d)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 159)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("DADDY_DEAREST",b1,a3,05,5d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 160)			this->set_frames(tex);
HXLINE( 161)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Dad idle dance",80,2a,95,5c),24,null(),null(),null());
HXLINE( 162)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Dad Sing Note UP",91,e8,1d,0c),24,null(),null(),null());
HXLINE( 163)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Dad Sing Note RIGHT",46,eb,bc,9e),24,null(),null(),null());
HXLINE( 164)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Dad Sing Note DOWN",18,d8,98,b2),24,null(),null(),null());
HXLINE( 165)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Dad Sing Note LEFT",bd,e7,da,b7),24,null(),null(),null());
HXLINE( 167)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 168)			this->addOffset(HX_("singUP",6a,52,21,b9),-6,50);
HXLINE( 169)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,27);
HXLINE( 170)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-10,10);
HXLINE( 171)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-30);
HXLINE( 173)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 157)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE(  35)			::String library = null();
HXDLIN(  35)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("GF_assets",e3,ad,39,df)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  35)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("GF_assets",e3,ad,39,df)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  36)			this->set_frames(tex);
HXLINE(  37)			this->animation->addByPrefix(HX_("cheer",8d,9a,b6,45),HX_("GF Cheer",ac,b5,2b,e0),24,false,null(),null());
HXLINE(  38)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("GF left note",6a,dd,c6,b9),24,false,null(),null());
HXLINE(  39)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("GF Right Note",57,7f,86,75),24,false,null(),null());
HXLINE(  40)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("GF Up Note",d6,e4,46,60),24,false,null(),null());
HXLINE(  41)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("GF Down Note",2f,cf,a8,47),24,false,null(),null());
HXLINE(  42)			this->animation->addByIndices(HX_("sad",16,98,57,00),HX_("gf sad",95,c1,1f,ff),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_2,13),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  43)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_3,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  44)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_4,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  45)			this->animation->addByIndices(HX_("hairBlow",b4,c9,39,c9),HX_("GF Dancing Beat Hair blowing",4b,14,4a,db),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_5,4),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  46)			this->animation->addByIndices(HX_("hairFall",bd,48,d6,cb),HX_("GF Dancing Beat Hair Landing",52,45,8f,42),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_6,12),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  47)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("GF FEAR",91,45,bb,20),24,null(),null(),null());
HXLINE(  49)			this->addOffset(HX_("cheer",8d,9a,b6,45),null(),null());
HXLINE(  50)			this->addOffset(HX_("sad",16,98,57,00),-2,-2);
HXLINE(  51)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,-9);
HXLINE(  52)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,-9);
HXLINE(  54)			this->addOffset(HX_("singUP",6a,52,21,b9),0,4);
HXLINE(  55)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,-20);
HXLINE(  56)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),0,-19);
HXLINE(  57)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-20);
HXLINE(  58)			this->addOffset(HX_("hairBlow",b4,c9,39,c9),45,-8);
HXLINE(  59)			this->addOffset(HX_("hairFall",bd,48,d6,cb),0,-9);
HXLINE(  61)			this->addOffset(HX_("scared",20,78,2a,3c),-2,-17);
HXLINE(  63)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  33)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-car",a6,63,ab,07)) ){
HXLINE(  97)			::String library = null();
HXDLIN(  97)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfCar",35,af,e4,91)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  97)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfCar",35,af,e4,91)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  98)			this->set_frames(tex);
HXLINE(  99)			this->animation->addByIndices(HX_("singUP",6a,52,21,b9),HX_("GF Dancing Beat Hair blowing CAR",9f,79,4b,90),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_7,1),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 100)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat Hair blowing CAR",9f,79,4b,90),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_8,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 101)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat Hair blowing CAR",9f,79,4b,90),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_9,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 103)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,null());
HXLINE( 104)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,null());
HXLINE( 106)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  96)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-christmas",94,26,b1,6d)) ){
HXLINE(  66)			::String library = null();
HXDLIN(  66)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/gfChristmas",16,a0,b4,35)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN(  66)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/gfChristmas",16,a0,b4,35)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  67)			this->set_frames(tex);
HXLINE(  68)			this->animation->addByPrefix(HX_("cheer",8d,9a,b6,45),HX_("GF Cheer",ac,b5,2b,e0),24,false,null(),null());
HXLINE(  69)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("GF left note",6a,dd,c6,b9),24,false,null(),null());
HXLINE(  70)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("GF Right Note",57,7f,86,75),24,false,null(),null());
HXLINE(  71)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("GF Up Note",d6,e4,46,60),24,false,null(),null());
HXLINE(  72)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("GF Down Note",2f,cf,a8,47),24,false,null(),null());
HXLINE(  73)			this->animation->addByIndices(HX_("sad",16,98,57,00),HX_("gf sad",95,c1,1f,ff),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_10,13),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  74)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_11,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  75)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing Beat",47,47,24,df),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_12,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  76)			this->animation->addByIndices(HX_("hairBlow",b4,c9,39,c9),HX_("GF Dancing Beat Hair blowing",4b,14,4a,db),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_13,4),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  77)			this->animation->addByIndices(HX_("hairFall",bd,48,d6,cb),HX_("GF Dancing Beat Hair Landing",52,45,8f,42),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_14,12),HX_("",00,00,00,00),24,false,null(),null());
HXLINE(  78)			this->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("GF FEAR",91,45,bb,20),24,null(),null(),null());
HXLINE(  80)			this->addOffset(HX_("cheer",8d,9a,b6,45),null(),null());
HXLINE(  81)			this->addOffset(HX_("sad",16,98,57,00),-2,-2);
HXLINE(  82)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,-9);
HXLINE(  83)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,-9);
HXLINE(  85)			this->addOffset(HX_("singUP",6a,52,21,b9),0,4);
HXLINE(  86)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),0,-20);
HXLINE(  87)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),0,-19);
HXLINE(  88)			this->addOffset(HX_("singDOWN",31,2a,ad,36),0,-20);
HXLINE(  89)			this->addOffset(HX_("hairBlow",b4,c9,39,c9),45,-8);
HXLINE(  90)			this->addOffset(HX_("hairFall",bd,48,d6,cb),0,-9);
HXLINE(  92)			this->addOffset(HX_("scared",20,78,2a,3c),-2,-17);
HXLINE(  94)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE(  65)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-pixel",98,3e,8c,55)) ){
HXLINE( 109)			::String library = null();
HXDLIN( 109)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/gfPixel",83,82,25,5f)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 109)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/gfPixel",83,82,25,5f)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 110)			this->set_frames(tex);
HXLINE( 111)			this->animation->addByIndices(HX_("singUP",6a,52,21,b9),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_15,1),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 112)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_16,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 113)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF IDLE",b5,30,b6,22),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_17,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 115)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,null());
HXLINE( 116)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,null());
HXLINE( 118)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE( 120)			Float _hx_tmp = this->get_width();
HXDLIN( 120)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::PlayState_obj::daPixelZoom)),null());
HXLINE( 121)			this->updateHitbox();
HXLINE( 122)			this->set_antialiasing(false);
HXLINE( 108)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("gf-tankmen",fe,a1,7c,b5)) ){
HXLINE( 144)			::String library = null();
HXDLIN( 144)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfTankmen",0d,61,04,b4)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 144)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("gfTankmen",0d,61,04,b4)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 145)			this->animation->addByIndices(HX_("sad",16,98,57,00),HX_("GF Crying at Gunpoint ",0a,67,09,50),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_18,13),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 146)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("GF Dancing at Gunpoint",2c,35,43,ed),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_19,16),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 147)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("GF Dancing at Gunpoint",2c,35,43,ed),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_20,15),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 149)			this->addOffset(HX_("sad",16,98,57,00),-2,-21);
HXLINE( 150)			this->addOffset(HX_("danceLeft",da,cc,f9,df),0,-9);
HXLINE( 151)			this->addOffset(HX_("danceRight",a9,7f,a6,91),0,-9);
HXLINE( 154)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE( 143)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mom",cb,16,53,00)) ){
HXLINE( 194)			::String library = null();
HXDLIN( 194)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Mom_Assets",f7,fa,9b,96)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 194)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Mom_Assets",f7,fa,9b,96)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 195)			this->set_frames(tex);
HXLINE( 197)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Mom Idle",c9,88,40,6e),24,false,null(),null());
HXLINE( 198)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Mom Up Pose",c1,4d,e9,52),24,false,null(),null());
HXLINE( 199)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("MOM DOWN POSE",1a,4b,70,b3),24,false,null(),null());
HXLINE( 200)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Mom Left Pose",55,8d,76,2a),24,false,null(),null());
HXLINE( 203)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Mom Pose Left",81,c8,c4,cc),24,false,null(),null());
HXLINE( 205)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 206)			this->addOffset(HX_("singUP",6a,52,21,b9),14,71);
HXLINE( 207)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),10,-60);
HXLINE( 208)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),250,-23);
HXLINE( 209)			this->addOffset(HX_("singDOWN",31,2a,ad,36),20,-160);
HXLINE( 211)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 193)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("mom-car",52,e6,f7,f6)) ){
HXLINE( 214)			::String library = null();
HXDLIN( 214)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("momCar",09,26,a0,c6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 214)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("momCar",09,26,a0,c6)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 215)			this->set_frames(tex);
HXLINE( 217)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Mom Idle",c9,88,40,6e),24,false,null(),null());
HXLINE( 218)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Mom Up Pose",c1,4d,e9,52),24,false,null(),null());
HXLINE( 219)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("MOM DOWN POSE",1a,4b,70,b3),24,false,null(),null());
HXLINE( 220)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Mom Left Pose",55,8d,76,2a),24,false,null(),null());
HXLINE( 223)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Mom Pose Left",81,c8,c4,cc),24,false,null(),null());
HXLINE( 225)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 226)			this->addOffset(HX_("singUP",6a,52,21,b9),14,71);
HXLINE( 227)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),10,-60);
HXLINE( 228)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),250,-23);
HXLINE( 229)			this->addOffset(HX_("singDOWN",31,2a,ad,36),20,-160);
HXLINE( 231)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 213)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("monster",1a,54,b0,b8)) ){
HXLINE( 233)			::String library = null();
HXDLIN( 233)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Monster_Assets",88,25,46,b3)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 233)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Monster_Assets",88,25,46,b3)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 234)			this->set_frames(tex);
HXLINE( 235)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("monster idle",da,c4,6c,db),24,false,null(),null());
HXLINE( 236)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("monster up note",d1,99,1b,31),24,false,null(),null());
HXLINE( 237)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("monster down",28,16,27,d8),24,false,null(),null());
HXLINE( 238)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Monster left note",05,1b,dc,68),24,false,null(),null());
HXLINE( 239)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Monster Right note",3c,fd,2d,0e),24,false,null(),null());
HXLINE( 241)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 242)			this->addOffset(HX_("singUP",6a,52,21,b9),-20,50);
HXLINE( 243)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-51,null());
HXLINE( 244)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-30,null());
HXLINE( 245)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-30,-40);
HXLINE( 246)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 232)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("monster-christmas",4f,88,85,27)) ){
HXLINE( 248)			::String library = null();
HXDLIN( 248)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/monsterChristmas",75,74,b6,a6)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 248)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/monsterChristmas",75,74,b6,a6)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 249)			this->set_frames(tex);
HXLINE( 250)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("monster idle",da,c4,6c,db),24,false,null(),null());
HXLINE( 251)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("monster up note",d1,99,1b,31),24,false,null(),null());
HXLINE( 252)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("monster down",28,16,27,d8),24,false,null(),null());
HXLINE( 253)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Monster left note",05,1b,dc,68),24,false,null(),null());
HXLINE( 254)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Monster Right note",3c,fd,2d,0e),24,false,null(),null());
HXLINE( 256)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 257)			this->addOffset(HX_("singUP",6a,52,21,b9),-20,50);
HXLINE( 258)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-51,null());
HXLINE( 259)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-30,null());
HXLINE( 260)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-40,-94);
HXLINE( 261)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 247)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("parents-christmas",fe,94,c5,32)) ){
HXLINE( 506)			::String library = null();
HXDLIN( 506)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/mom_dad_christmas_assets",b9,c9,6d,11)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 506)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("christmas/mom_dad_christmas_assets",b9,c9,6d,11)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 507)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Parent Christmas Idle",c8,04,64,10),24,false,null(),null());
HXLINE( 508)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Parent Up Note Dad",88,99,f7,ad),24,false,null(),null());
HXLINE( 509)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Parent Down Note Dad",21,a5,93,34),24,false,null(),null());
HXLINE( 510)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Parent Left Note Dad",dc,f8,16,c4),24,false,null(),null());
HXLINE( 511)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Parent Right Note Dad",13,46,28,52),24,false,null(),null());
HXLINE( 513)			this->animation->addByPrefix(HX_("singUP-alt",86,62,b4,5f),HX_("Parent Up Note Mom",0c,7a,fe,ad),24,false,null(),null());
HXLINE( 515)			this->animation->addByPrefix(HX_("singDOWN-alt",cd,29,35,ba),HX_("Parent Down Note Mom",a5,85,9a,34),24,false,null(),null());
HXLINE( 516)			this->animation->addByPrefix(HX_("singLEFT-alt",f2,6f,48,8c),HX_("Parent Left Note Mom",60,d9,1d,c4),24,false,null(),null());
HXLINE( 517)			this->animation->addByPrefix(HX_("ssayinIGHT-alt",03,1b,7e,3b),HX_("Parent Right Note Mom",97,26,2f,52),24,false,null(),null());
HXLINE( 519)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 520)			this->addOffset(HX_("singUP",6a,52,21,b9),-47,24);
HXLINE( 521)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-1,-23);
HXLINE( 522)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-30,16);
HXLINE( 523)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-31,-29);
HXLINE( 524)			this->addOffset(HX_("singUP-alt",86,62,b4,5f),-47,24);
HXLINE( 525)			this->addOffset(HX_("singRIGHT-alt",a9,0c,12,b9),-1,-24);
HXLINE( 526)			this->addOffset(HX_("singLEFT-alt",f2,6f,48,8c),-30,15);
HXLINE( 527)			this->addOffset(HX_("singDOWN-alt",cd,29,35,ba),-30,-27);
HXLINE( 529)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 505)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("pico",e5,e8,57,4a)) ){
HXLINE( 263)			::String library = null();
HXDLIN( 263)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Pico_FNF_assetss",95,ca,e1,39)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 263)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Pico_FNF_assetss",95,ca,e1,39)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 264)			this->set_frames(tex);
HXLINE( 265)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Pico Idle Dance",62,48,dd,f6),24,null(),null(),null());
HXLINE( 266)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("pico Up note0",34,b3,8f,aa),24,false,null(),null());
HXLINE( 267)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Pico Down Note0",fb,e0,7b,fc),24,false,null(),null());
HXLINE( 268)			if (( (bool)(isPlayer) )) {
HXLINE( 270)				this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Pico NOTE LEFT0",d6,ba,ae,63),24,false,null(),null());
HXLINE( 271)				this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Pico Note Right0",a7,9f,6f,99),24,false,null(),null());
HXLINE( 272)				this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("Pico Note Right Miss",33,36,e2,57),24,false,null(),null());
HXLINE( 273)				this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("Pico NOTE LEFT miss",c2,e8,46,a4),24,false,null(),null());
            			}
            			else {
HXLINE( 278)				this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Pico Note Right0",a7,9f,6f,99),24,false,null(),null());
HXLINE( 279)				this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Pico NOTE LEFT0",d6,ba,ae,63),24,false,null(),null());
HXLINE( 280)				this->animation->addByPrefix(HX_("singRIGHTmiss",89,cc,65,e3),HX_("Pico NOTE LEFT miss",c2,e8,46,a4),24,false,null(),null());
HXLINE( 281)				this->animation->addByPrefix(HX_("singLEFTmiss",d2,2f,9c,b6),HX_("Pico Note Right Miss",33,36,e2,57),24,false,null(),null());
            			}
HXLINE( 284)			this->animation->addByPrefix(HX_("singUPmiss",66,22,08,8a),HX_("pico Up note miss",20,68,ae,5a),24,null(),null(),null());
HXLINE( 285)			this->animation->addByPrefix(HX_("singDOWNmiss",ad,e9,88,e4),HX_("Pico Down Note MISS",67,4d,33,9a),24,null(),null(),null());
HXLINE( 287)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 288)			this->addOffset(HX_("singUP",6a,52,21,b9),-29,27);
HXLINE( 289)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-68,-7);
HXLINE( 290)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),65,9);
HXLINE( 291)			this->addOffset(HX_("singDOWN",31,2a,ad,36),200,-70);
HXLINE( 292)			this->addOffset(HX_("singUPmiss",66,22,08,8a),-19,67);
HXLINE( 293)			this->addOffset(HX_("singRIGHTmiss",89,cc,65,e3),-60,41);
HXLINE( 294)			this->addOffset(HX_("singLEFTmiss",d2,2f,9c,b6),62,64);
HXLINE( 295)			this->addOffset(HX_("singDOWNmiss",ad,e9,88,e4),210,-28);
HXLINE( 297)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 299)			this->set_flipX(true);
HXLINE( 262)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("pico-speaker",57,7a,55,5e)) ){
HXLINE( 126)			::String library = null();
HXDLIN( 126)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("picoSpeaker",9a,ea,6a,4b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 126)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("picoSpeaker",9a,ea,6a,4b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 127)			this->set_frames(tex);
HXLINE( 129)			this->animation->addByIndices(HX_("idle",14,a7,b3,45),HX_("Pico shoot 1",95,79,46,d7),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_21,15),HX_("",00,00,00,00),24,true,null(),null());
HXLINE( 131)			this->animation->addByIndices(HX_("shoot1",72,21,6a,26),HX_("Pico shoot 1",95,79,46,d7),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_22,8),HX_("",00,00,00,00),24,true,null(),null());
HXLINE( 132)			this->animation->addByIndices(HX_("shoot2",73,21,6a,26),HX_("Pico shoot 2",96,79,46,d7),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_23,8),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 133)			this->animation->addByIndices(HX_("shoot3",74,21,6a,26),HX_("Pico shoot 3",97,79,46,d7),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_24,8),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 134)			this->animation->addByIndices(HX_("shoot4",75,21,6a,26),HX_("Pico shoot 4",98,79,46,d7),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_25,8),HX_("",00,00,00,00),24,false,null(),null());
HXLINE( 136)			this->addOffset(HX_("shoot1",72,21,6a,26),0,0);
HXLINE( 137)			this->addOffset(HX_("shoot2",73,21,6a,26),-1,-128);
HXLINE( 138)			this->addOffset(HX_("shoot3",74,21,6a,26),412,-64);
HXLINE( 139)			this->addOffset(HX_("shoot4",75,21,6a,26),439,-19);
HXLINE( 141)			this->playAnim(HX_("shoot1",72,21,6a,26),null(),null(),null());
HXLINE( 124)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE( 445)			::String library = null();
HXDLIN( 445)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpai",20,f0,51,f1)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 445)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpai",20,f0,51,f1)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 446)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Senpai Idle",78,62,c5,a9),24,false,null(),null());
HXLINE( 447)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("SENPAI UP NOTE",f3,26,c1,c4),24,false,null(),null());
HXLINE( 448)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("SENPAI LEFT NOTE",c7,90,76,f3),24,false,null(),null());
HXLINE( 449)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("SENPAI RIGHT NOTE",3a,91,70,75),24,false,null(),null());
HXLINE( 450)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("SENPAI DOWN NOTE",8c,76,ac,f4),24,false,null(),null());
HXLINE( 452)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 453)			this->addOffset(HX_("singUP",6a,52,21,b9),5,37);
HXLINE( 454)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),null(),null());
HXLINE( 455)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),40,null());
HXLINE( 456)			this->addOffset(HX_("singDOWN",31,2a,ad,36),14,null());
HXLINE( 458)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 460)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 461)			this->updateHitbox();
HXLINE( 463)			this->set_antialiasing(false);
HXLINE( 444)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("senpai-angry",10,7a,b8,25)) ){
HXLINE( 465)			::String library = null();
HXDLIN( 465)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpai",20,f0,51,f1)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 465)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpai",20,f0,51,f1)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 466)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Angry Senpai Idle",d9,cc,b4,52),24,false,null(),null());
HXLINE( 467)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Angry Senpai UP NOTE",52,97,34,df),24,false,null(),null());
HXLINE( 468)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Angry Senpai LEFT NOTE",e6,16,ee,25),24,false,null(),null());
HXLINE( 469)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Angry Senpai RIGHT NOTE",3b,66,8e,6b),24,false,null(),null());
HXLINE( 470)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Angry Senpai DOWN NOTE",ab,fc,23,27),24,false,null(),null());
HXLINE( 472)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 473)			this->addOffset(HX_("singUP",6a,52,21,b9),5,37);
HXLINE( 474)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),null(),null());
HXLINE( 475)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),40,null());
HXLINE( 476)			this->addOffset(HX_("singDOWN",31,2a,ad,36),14,null());
HXLINE( 477)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 479)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 480)			this->updateHitbox();
HXLINE( 482)			this->set_antialiasing(false);
HXLINE( 464)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("spirit",31,bb,a9,bd)) ){
HXLINE( 485)			::String library = null();
HXDLIN( 485)			::String _hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/spirit",15,cc,6d,43)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 485)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(_hx_tmp,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/spirit",15,cc,6d,43)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE( 486)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("idle spirit_",02,2f,37,04),24,false,null(),null());
HXLINE( 487)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("up_",a4,29,59,00),24,false,null(),null());
HXLINE( 488)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("right_",03,55,26,4e),24,false,null(),null());
HXLINE( 489)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("left_",78,fe,56,72),24,false,null(),null());
HXLINE( 490)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("spirit down_",8e,9f,fa,ae),24,false,null(),null());
HXLINE( 492)			this->addOffset(HX_("idle",14,a7,b3,45),-220,-280);
HXLINE( 493)			this->addOffset(HX_("singUP",6a,52,21,b9),-220,-240);
HXLINE( 494)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-220,-280);
HXLINE( 495)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),-200,-280);
HXLINE( 496)			this->addOffset(HX_("singDOWN",31,2a,ad,36),170,110);
HXLINE( 498)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ( (Float)(6) ))),null());
HXLINE( 499)			this->updateHitbox();
HXLINE( 501)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 503)			this->set_antialiasing(false);
HXLINE( 484)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("spooky",eb,bd,9e,c1)) ){
HXLINE( 175)			::String library = null();
HXDLIN( 175)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("spooky_kids_assets",81,c1,f5,ce)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 175)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("spooky_kids_assets",81,c1,f5,ce)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 176)			this->set_frames(tex);
HXLINE( 177)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("spooky UP NOTE",a2,20,d8,ff),24,false,null(),null());
HXLINE( 178)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("spooky DOWN note",fb,b1,f7,73),24,false,null(),null());
HXLINE( 179)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("note sing left",ca,f9,5d,8a),24,false,null(),null());
HXLINE( 180)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("spooky sing right",60,bf,ae,3b),24,false,null(),null());
HXLINE( 181)			this->animation->addByIndices(HX_("danceLeft",da,cc,f9,df),HX_("spooky dance idle",36,a7,32,19),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_26,3),HX_("",00,00,00,00),12,false,null(),null());
HXLINE( 182)			this->animation->addByIndices(HX_("danceRight",a9,7f,a6,91),HX_("spooky dance idle",36,a7,32,19),::Array_obj< int >::fromData( _hx_array_data_e3a4bb89_27,4),HX_("",00,00,00,00),12,false,null(),null());
HXLINE( 184)			this->addOffset(HX_("danceLeft",da,cc,f9,df),null(),null());
HXLINE( 185)			this->addOffset(HX_("danceRight",a9,7f,a6,91),null(),null());
HXLINE( 187)			this->addOffset(HX_("singUP",6a,52,21,b9),-20,26);
HXLINE( 188)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-130,-14);
HXLINE( 189)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),130,-10);
HXLINE( 190)			this->addOffset(HX_("singDOWN",31,2a,ad,36),-50,-130);
HXLINE( 192)			this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
HXLINE( 174)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("tankman",f0,7d,78,3d)) ){
HXLINE( 532)			::String library = null();
HXDLIN( 532)			::String tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("tankmanCaptain",94,e3,1f,97)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
HXDLIN( 532)			tex = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex1,::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("tankmanCaptain",94,e3,1f,97)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE( 533)			this->set_frames(tex);
HXLINE( 534)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("Tankman Idle Dance",77,a5,ba,28),24,null(),null(),null());
HXLINE( 535)			this->animation->addByPrefix(HX_("oldSingUP",71,d6,0c,c4),HX_("Tankman UP note ",b9,a8,b3,d5),24,false,null(),null());
HXLINE( 536)			this->animation->addByPrefix(HX_("singUP",6a,52,21,b9),HX_("Tankman UP note ",b9,a8,b3,d5),24,false,null(),null());
HXLINE( 537)			this->animation->addByPrefix(HX_("oldSingDOWN",f8,fd,86,76),HX_("Tankman DOWN note ",00,92,01,e4),24,false,null(),null());
HXLINE( 538)			this->animation->addByPrefix(HX_("singDOWN",31,2a,ad,36),HX_("Tankman DOWN note ",00,92,01,e4),24,false,null(),null());
HXLINE( 539)			this->animation->addByPrefix(HX_("singLEFT",d6,39,ef,3b),HX_("Tankman Right Note ",1a,9a,07,a1),24,false,null(),null());
HXLINE( 540)			this->animation->addByPrefix(HX_("singRIGHT",0d,6f,70,ac),HX_("Tankman Note Left ",db,8b,f5,61),24,false,null(),null());
HXLINE( 542)			this->animation->addByPrefix(HX_("ughAnim",07,77,08,3d),HX_("TANKMAN UGH",66,0b,09,a1),24,false,null(),null());
HXLINE( 543)			this->animation->addByPrefix(HX_("prettyGoodAnim",c4,0e,7a,6c),HX_("PRETTY GOOD",e7,aa,c5,53),24,false,null(),null());
HXLINE( 545)			this->addOffset(HX_("idle",14,a7,b3,45),null(),null());
HXLINE( 546)			this->addOffset(HX_("singUP",6a,52,21,b9),24,56);
HXLINE( 547)			this->addOffset(HX_("oldSingUP",71,d6,0c,c4),24,56);
HXLINE( 548)			this->addOffset(HX_("singRIGHT",0d,6f,70,ac),-1,-7);
HXLINE( 549)			this->addOffset(HX_("singLEFT",d6,39,ef,3b),100,-14);
HXLINE( 550)			this->addOffset(HX_("singDOWN",31,2a,ad,36),98,-90);
HXLINE( 551)			this->addOffset(HX_("oldSingDOWN",f8,fd,86,76),98,-90);
HXLINE( 552)			this->addOffset(HX_("ughAnim",07,77,08,3d),45,0);
HXLINE( 553)			this->addOffset(HX_("prettyGoodAnim",c4,0e,7a,6c),45,20);
HXLINE( 554)			this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 556)			this->set_flipX(true);
HXLINE( 531)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE( 603)		this->dance();
HXLINE( 605)		if (( (bool)(isPlayer) )) {
HXLINE( 607)			this->set_flipX(!(this->flipX));
HXLINE( 610)			if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("bf",c4,55,00,00)))) {
HXLINE( 613)				::Array< int > oldRight = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHT",0d,6f,70,ac))) )->frames;
HXLINE( 614)				( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHT",0d,6f,70,ac))) )->frames = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFT",d6,39,ef,3b))) )->frames;
HXLINE( 615)				( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFT",d6,39,ef,3b))) )->frames = oldRight;
HXLINE( 618)				if (::hx::IsNotNull( this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3)) )) {
HXLINE( 620)					::Array< int > oldMiss = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3))) )->frames;
HXLINE( 621)					( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singRIGHTmiss",89,cc,65,e3))) )->frames = ( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFTmiss",d2,2f,9c,b6))) )->frames;
HXLINE( 622)					( ( ::flixel::animation::FlxAnimation)(this->animation->_animations->get(HX_("singLEFTmiss",d2,2f,9c,b6))) )->frames = oldMiss;
            				}
            			}
            		}
            	}

Dynamic Character_obj::__CreateEmpty() { return new Character_obj; }

void *Character_obj::_hx_vtable = 0;

Dynamic Character_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Character_obj > _hx_result = new Character_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Character_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x55af02e5) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x55af02e5;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Character_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_629_update)
HXLINE( 630)		if (!(::StringTools_obj::startsWith(this->curCharacter,HX_("bf",c4,55,00,00)))) {
HXLINE( 632)			if (::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c))) {
HXLINE( 634)				 ::Character _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 634)				_hx_tmp->holdTimer = (_hx_tmp->holdTimer + elapsed);
            			}
HXLINE( 637)			Float dadVar = ( (Float)(4) );
HXLINE( 639)			if ((this->curCharacter == HX_("dad",47,36,4c,00))) {
HXLINE( 640)				dadVar = ((Float)6.1);
            			}
HXLINE( 641)			if ((this->holdTimer >= ((::Conductor_obj::stepCrochet * dadVar) * ((Float)0.001)))) {
HXLINE( 643)				this->dance();
HXLINE( 644)				this->holdTimer = ( (Float)(0) );
            			}
            		}
HXLINE( 648)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 651)			bool _hx_tmp;
HXDLIN( 651)			if ((this->animation->_curAnim->name == HX_("hairFall",bd,48,d6,cb))) {
HXLINE( 651)				_hx_tmp = this->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 651)				_hx_tmp = false;
            			}
HXDLIN( 651)			if (_hx_tmp) {
HXLINE( 652)				this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            			}
            		}
HXLINE( 655)		this->super::update(elapsed);
            	}


void Character_obj::dance(){
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_665_dance)
HXDLIN( 665)		if (!(this->debugMode)) {
HXLINE( 667)			::String _hx_switch_0 = this->curCharacter;
            			if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE( 670)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 672)					this->danced = !(this->danced);
HXLINE( 674)					if (this->danced) {
HXLINE( 675)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 677)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 670)				goto _hx_goto_29;
            			}
            			if (  (_hx_switch_0==HX_("gf-car",a6,63,ab,07)) ){
HXLINE( 692)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 694)					this->danced = !(this->danced);
HXLINE( 696)					if (this->danced) {
HXLINE( 697)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 699)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 692)				goto _hx_goto_29;
            			}
            			if (  (_hx_switch_0==HX_("gf-christmas",94,26,b1,6d)) ){
HXLINE( 681)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 683)					this->danced = !(this->danced);
HXLINE( 685)					if (this->danced) {
HXLINE( 686)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 688)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 681)				goto _hx_goto_29;
            			}
            			if (  (_hx_switch_0==HX_("gf-pixel",98,3e,8c,55)) ){
HXLINE( 702)				if (!(::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("hair",22,27,08,45)))) {
HXLINE( 704)					this->danced = !(this->danced);
HXLINE( 706)					if (this->danced) {
HXLINE( 707)						this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            					}
            					else {
HXLINE( 709)						this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            					}
            				}
HXLINE( 702)				goto _hx_goto_29;
            			}
            			if (  (_hx_switch_0==HX_("spooky",eb,bd,9e,c1)) ){
HXLINE( 713)				this->danced = !(this->danced);
HXLINE( 715)				if (this->danced) {
HXLINE( 716)					this->playAnim(HX_("danceRight",a9,7f,a6,91),null(),null(),null());
            				}
            				else {
HXLINE( 718)					this->playAnim(HX_("danceLeft",da,cc,f9,df),null(),null(),null());
            				}
HXLINE( 712)				goto _hx_goto_29;
            			}
            			/* default */{
HXLINE( 720)				this->playAnim(HX_("idle",14,a7,b3,45),null(),null(),null());
            			}
            			_hx_goto_29:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Character_obj,dance,(void))

void Character_obj::playAnim(::String AnimName,::hx::Null< bool >  __o_Force,::hx::Null< bool >  __o_Reversed,::hx::Null< int >  __o_Frame){
            		bool Force = __o_Force.Default(false);
            		bool Reversed = __o_Reversed.Default(false);
            		int Frame = __o_Frame.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_726_playAnim)
HXLINE( 727)		this->animation->play(AnimName,Force,Reversed,Frame);
HXLINE( 729)		::cpp::VirtualArray daOffset = ( (::cpp::VirtualArray)(this->animOffsets->get(AnimName)) );
HXLINE( 730)		if (this->animOffsets->exists(AnimName)) {
HXLINE( 732)			this->offset->set(daOffset->__get(0),daOffset->__get(1));
            		}
            		else {
HXLINE( 735)			this->offset->set(0,0);
            		}
HXLINE( 737)		if ((this->curCharacter == HX_("gf",1f,5a,00,00))) {
HXLINE( 739)			if ((AnimName == HX_("singLEFT",d6,39,ef,3b))) {
HXLINE( 741)				this->danced = true;
            			}
            			else {
HXLINE( 743)				if ((AnimName == HX_("singRIGHT",0d,6f,70,ac))) {
HXLINE( 745)					this->danced = false;
            				}
            			}
HXLINE( 748)			bool _hx_tmp;
HXDLIN( 748)			if ((AnimName != HX_("singUP",6a,52,21,b9))) {
HXLINE( 748)				_hx_tmp = (AnimName == HX_("singDOWN",31,2a,ad,36));
            			}
            			else {
HXLINE( 748)				_hx_tmp = true;
            			}
HXDLIN( 748)			if (_hx_tmp) {
HXLINE( 750)				this->danced = !(this->danced);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Character_obj,playAnim,(void))

void Character_obj::addOffset(::String name,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_ae240c01d039da8e_757_addOffset)
HXDLIN( 757)		::cpp::VirtualArray v = ::Array_obj< Float >::__new(2)->init(0,x)->init(1,y);
HXDLIN( 757)		this->animOffsets->set(name,v);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Character_obj,addOffset,(void))


::hx::ObjectPtr< Character_obj > Character_obj::__new(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	::hx::ObjectPtr< Character_obj > __this = new Character_obj();
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

::hx::ObjectPtr< Character_obj > Character_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer) {
	Character_obj *__this = (Character_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Character_obj), true, "Character"));
	*(void **)__this = Character_obj::_hx_vtable;
	__this->__construct(x,y,__o_character,__o_isPlayer);
	return __this;
}

Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_MEMBER_NAME(animOffsets,"animOffsets");
	HX_MARK_MEMBER_NAME(debugMode,"debugMode");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(holdTimer,"holdTimer");
	HX_MARK_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animOffsets,"animOffsets");
	HX_VISIT_MEMBER_NAME(debugMode,"debugMode");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(holdTimer,"holdTimer");
	HX_VISIT_MEMBER_NAME(danced,"danced");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Character_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"dance") ) { return ::hx::Val( dance_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"danced") ) { return ::hx::Val( danced ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { return ::hx::Val( debugMode ); }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { return ::hx::Val( holdTimer ); }
		if (HX_FIELD_EQ(inName,"addOffset") ) { return ::hx::Val( addOffset_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { return ::hx::Val( animOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Character_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"danced") ) { danced=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { debugMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTimer") ) { holdTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"animOffsets") ) { animOffsets=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("animOffsets",6f,ff,7a,f8));
	outFields->push(HX_("debugMode",56,77,ac,2b));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("holdTimer",06,82,13,a9));
	outFields->push(HX_("danced",d1,49,8f,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Character_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Character_obj,animOffsets),HX_("animOffsets",6f,ff,7a,f8)},
	{::hx::fsBool,(int)offsetof(Character_obj,debugMode),HX_("debugMode",56,77,ac,2b)},
	{::hx::fsBool,(int)offsetof(Character_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(Character_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsFloat,(int)offsetof(Character_obj,holdTimer),HX_("holdTimer",06,82,13,a9)},
	{::hx::fsBool,(int)offsetof(Character_obj,danced),HX_("danced",d1,49,8f,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Character_obj_sStaticStorageInfo = 0;
#endif

static ::String Character_obj_sMemberFields[] = {
	HX_("animOffsets",6f,ff,7a,f8),
	HX_("debugMode",56,77,ac,2b),
	HX_("isPlayer",eb,86,22,90),
	HX_("curCharacter",09,86,7c,d7),
	HX_("holdTimer",06,82,13,a9),
	HX_("update",09,86,05,87),
	HX_("danced",d1,49,8f,1e),
	HX_("dance",33,83,83,d4),
	HX_("playAnim",25,ea,84,30),
	HX_("addOffset",94,cc,63,18),
	::String(null()) };

::hx::Class Character_obj::__mClass;

void Character_obj::__register()
{
	Character_obj _hx_dummy;
	Character_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Character",89,bb,a4,e3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Character_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Character_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Character_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Character_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

