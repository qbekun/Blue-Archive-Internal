#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstMinigameCCGExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD091E0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GETROOTASCONSTMINIGAMECCGEXCEL_OFFSET UNITYSDK_OFFSET(0xD091F0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GETROOTASCONSTMINIGAMECCGEXCEL_OFFSET UNITYSDK_OFFSET(0xD09250)
#define FLATDATA_CONSTMINIGAMECCGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD092B0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD08F00)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_TURNDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xD092D0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_TURNDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xD09320)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0xD093A0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0xD093F0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETTOP_OFFSET UNITYSDK_OFFSET(0xD09470)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETTOP_OFFSET UNITYSDK_OFFSET(0xD094C0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET UNITYSDK_OFFSET(0xD09540)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET UNITYSDK_OFFSET(0xD09590)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPCENTEROFFSETX_OFFSET UNITYSDK_OFFSET(0xD09610)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPCENTEROFFSETX_OFFSET UNITYSDK_OFFSET(0xD09660)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPCENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0xD096E0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPCENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0xD09730)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAANGLE_OFFSET UNITYSDK_OFFSET(0xD097B0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAANGLE_OFFSET UNITYSDK_OFFSET(0xD09800)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD09880)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD098D0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD09950)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD099A0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD09A20)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD09A70)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_THEMALOADINGPROGRESSTIME_OFFSET UNITYSDK_OFFSET(0xD09AF0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_THEMALOADINGPROGRESSTIME_OFFSET UNITYSDK_OFFSET(0xD09B40)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAPALLYROTATION_OFFSET UNITYSDK_OFFSET(0xD09BC0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAPALLYROTATION_OFFSET UNITYSDK_OFFSET(0xD09C10)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_ANIALLYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD09C90)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_ANIALLYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD09CD0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GETANIALLYBATTLEATTACKBYTES_OFFSET UNITYSDK_OFFSET(0xD09D40)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAXHANDCOUNT_OFFSET UNITYSDK_OFFSET(0xD09D60)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAXHANDCOUNT_OFFSET UNITYSDK_OFFSET(0xD09DB0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAXCOST_OFFSET UNITYSDK_OFFSET(0xD09E30)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAXCOST_OFFSET UNITYSDK_OFFSET(0xD09E80)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STARTCOST_OFFSET UNITYSDK_OFFSET(0xD09F00)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STARTCOST_OFFSET UNITYSDK_OFFSET(0xD09F50)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_TURNCOST_OFFSET UNITYSDK_OFFSET(0xD09FD0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_TURNCOST_OFFSET UNITYSDK_OFFSET(0xD0A020)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STRIKERSWAPFRONTCOST_OFFSET UNITYSDK_OFFSET(0xD0A0A0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STRIKERSWAPFRONTCOST_OFFSET UNITYSDK_OFFSET(0xD0A0F0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STRIKERMAXEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xD0A170)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STRIKERMAXEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xD0A1C0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STARTDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xD0A240)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STARTDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xD0A290)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMPREVIVEHEALTHRATE_OFFSET UNITYSDK_OFFSET(0xD0A310)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMPREVIVEHEALTHRATE_OFFSET UNITYSDK_OFFSET(0xD0A360)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_BASEREWARDREROLLPOINT_OFFSET UNITYSDK_OFFSET(0xD0A3E0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_BASEREWARDREROLLPOINT_OFFSET UNITYSDK_OFFSET(0xD0A430)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_SELECTREWARDOPTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD0A4B0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_SELECTREWARDOPTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD0A500)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_ALTERNATIVECARDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD0A580)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GET_ALTERNATIVECARDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD0A5C0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_GETALTERNATIVECARDIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD0A630)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_CREATECONSTMINIGAMECCGEXCEL_OFFSET UNITYSDK_OFFSET(0xD0A650)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_STARTCONSTMINIGAMECCGEXCEL_OFFSET UNITYSDK_OFFSET(0xD0AFB0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDTURNDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xD0AF30)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0xD0AF00)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETTOP_OFFSET UNITYSDK_OFFSET(0xD0AED0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET UNITYSDK_OFFSET(0xD0AEA0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCONQUESTMAPCENTEROFFSETX_OFFSET UNITYSDK_OFFSET(0xD0AE70)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCONQUESTMAPCENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0xD0AE40)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCAMERAANGLE_OFFSET UNITYSDK_OFFSET(0xD0AE10)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD0ADE0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD0ADB0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD0AD80)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDTHEMALOADINGPROGRESSTIME_OFFSET UNITYSDK_OFFSET(0xD0AD50)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDMAPALLYROTATION_OFFSET UNITYSDK_OFFSET(0xD0AD20)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDANIALLYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD0ACF0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDMAXHANDCOUNT_OFFSET UNITYSDK_OFFSET(0xD0ACC0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDMAXCOST_OFFSET UNITYSDK_OFFSET(0xD0AC90)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDSTARTCOST_OFFSET UNITYSDK_OFFSET(0xD0AC60)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDTURNCOST_OFFSET UNITYSDK_OFFSET(0xD0AC30)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDSTRIKERSWAPFRONTCOST_OFFSET UNITYSDK_OFFSET(0xD0AC00)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDSTRIKERMAXEQUIPCOUNT_OFFSET UNITYSDK_OFFSET(0xD0ABD0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDSTARTDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0xD0ABA0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCAMPREVIVEHEALTHRATE_OFFSET UNITYSDK_OFFSET(0xD0AB70)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDBASEREWARDREROLLPOINT_OFFSET UNITYSDK_OFFSET(0xD0AB40)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDSELECTREWARDOPTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD0AB10)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ADDALTERNATIVECARDIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD0AAE0)
#define FLATDATA_CONSTMINIGAMECCGEXCEL_ENDCONSTMINIGAMECCGEXCEL_OFFSET UNITYSDK_OFFSET(0xD0AF60)

namespace FlatData
{
	inline static constexpr unsigned int ConstMinigameCCGExcel_TypeDefinitionIndex = 9227;

	class ConstMinigameCCGExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstMinigameCCGExcel* GetRootAsConstMinigameCCGExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstMinigameCCGExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GETROOTASCONSTMINIGAMECCGEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstMinigameCCGExcel* GetRootAsConstMinigameCCGExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstMinigameCCGExcel* arg2)
		{
			return ((::FlatData::ConstMinigameCCGExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstMinigameCCGExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GETROOTASCONSTMINIGAMECCGEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstMinigameCCGExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstMinigameCCGExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_turnDrawCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_TURNDRAWCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_TurnDrawCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_TURNDRAWCOUNT_OFFSET))(nullptr);
		}

		::System::Single get_conquestMapBoundaryOffsetRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapBoundaryOffsetRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET))(nullptr);
		}

		::System::Single get_conquestMapBoundaryOffsetTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETTOP_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapBoundaryOffsetTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETTOP_OFFSET))(nullptr);
		}

		::System::Single get_conquestMapBoundaryOffsetBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapBoundaryOffsetBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET))(nullptr);
		}

		::System::Single get_conquestMapCenterOffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPCENTEROFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapCenterOffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPCENTEROFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_conquestMapCenterOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPCENTEROFFSETY_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapCenterOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CONQUESTMAPCENTEROFFSETY_OFFSET))(nullptr);
		}

		::System::Single get_cameraAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAANGLE_OFFSET))(nullptr);
		}

		::System::Single get_CameraAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAANGLE_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMMAX_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMMAX_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMMIN_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMMIN_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_themaLoadingProgressTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_THEMALOADINGPROGRESSTIME_OFFSET))(nullptr);
		}

		::System::Single get_ThemaLoadingProgressTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_THEMALOADINGPROGRESSTIME_OFFSET))(nullptr);
		}

		::System::Single get_mapAllyRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAPALLYROTATION_OFFSET))(nullptr);
		}

		::System::Single get_MapAllyRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAPALLYROTATION_OFFSET))(nullptr);
		}

		::System::String* get_aniAllyBattleAttack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_ANIALLYBATTLEATTACK_OFFSET))(nullptr);
		}

		::System::String* get_AniAllyBattleAttack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_ANIALLYBATTLEATTACK_OFFSET))(nullptr);
		}

		Il2CppObject* GetAniAllyBattleAttackBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GETANIALLYBATTLEATTACKBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_maxHandCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAXHANDCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxHandCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAXHANDCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_maxCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAXCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_MaxCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_MAXCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_startCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STARTCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_StartCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STARTCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_turnCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_TURNCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_TurnCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_TURNCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_strikerSwapFrontCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STRIKERSWAPFRONTCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_StrikerSwapFrontCost()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STRIKERSWAPFRONTCOST_OFFSET))(nullptr);
		}

		::System::Int32 get_strikerMaxEquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STRIKERMAXEQUIPCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StrikerMaxEquipCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STRIKERMAXEQUIPCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_startDrawCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STARTDRAWCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_StartDrawCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_STARTDRAWCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_campReviveHealthRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMPREVIVEHEALTHRATE_OFFSET))(nullptr);
		}

		::System::Int32 get_CampReviveHealthRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_CAMPREVIVEHEALTHRATE_OFFSET))(nullptr);
		}

		::System::Int32 get_baseRewardRerollPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_BASEREWARDREROLLPOINT_OFFSET))(nullptr);
		}

		::System::Int32 get_BaseRewardRerollPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_BASEREWARDREROLLPOINT_OFFSET))(nullptr);
		}

		::System::Int32 get_selectRewardOptionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_SELECTREWARDOPTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectRewardOptionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_SELECTREWARDOPTIONCOUNT_OFFSET))(nullptr);
		}

		::System::String* get_alternativeCardImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_ALTERNATIVECARDIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_AlternativeCardImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GET_ALTERNATIVECARDIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetAlternativeCardImagePathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_GETALTERNATIVECARDIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstMinigameCCGExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::System::Single arg6, ::System::Single arg7, ::System::Single arg8, ::System::Single arg9, ::System::Single arg10, ::System::Single arg11, ::System::Single arg12, ::System::Single arg13, ::FlatBuffers::StringOffset* arg14, ::System::Int32 arg15, ::System::Int32 arg16, ::System::Int32 arg17, ::System::Int32 arg18, ::System::Int32 arg19, ::System::Int32 arg20, ::System::Int32 arg21, ::System::Int32 arg22, ::System::Int32 arg23, ::System::Int32 arg24, ::FlatBuffers::StringOffset* arg25)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_CREATECONSTMINIGAMECCGEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, nullptr);
		}

		::System::Void StartConstMinigameCCGExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_STARTCONSTMINIGAMECCGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddTurnDrawCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDTURNDRAWCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConquestMapBoundaryOffsetRight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConquestMapBoundaryOffsetTop(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETTOP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConquestMapBoundaryOffsetBottom(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConquestMapCenterOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCONQUESTMAPCENTEROFFSETX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConquestMapCenterOffsetY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCONQUESTMAPCENTEROFFSETY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraAngle(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCAMERAANGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCAMERAZOOMMAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCAMERAZOOMMIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomDefault(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCAMERAZOOMDEFAULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddThemaLoadingProgressTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDTHEMALOADINGPROGRESSTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMapAllyRotation(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDMAPALLYROTATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAniAllyBattleAttack(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDANIALLYBATTLEATTACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMaxHandCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDMAXHANDCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMaxCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDMAXCOST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStartCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDSTARTCOST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTurnCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDTURNCOST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStrikerSwapFrontCost(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDSTRIKERSWAPFRONTCOST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStrikerMaxEquipCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDSTRIKERMAXEQUIPCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStartDrawCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDSTARTDRAWCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCampReviveHealthRate(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDCAMPREVIVEHEALTHRATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBaseRewardRerollPoint(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDBASEREWARDREROLLPOINT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSelectRewardOptionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDSELECTREWARDOPTIONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAlternativeCardImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ADDALTERNATIVECARDIMAGEPATH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstMinigameCCGExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMECCGEXCEL_ENDCONSTMINIGAMECCGEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

