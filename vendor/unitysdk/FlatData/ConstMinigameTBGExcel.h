#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstMinigameTBGExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD28250)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GETROOTASCONSTMINIGAMETBGEXCEL_OFFSET UNITYSDK_OFFSET(0xD28260)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GETROOTASCONSTMINIGAMETBGEXCEL_OFFSET UNITYSDK_OFFSET(0xD282C0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD28320)
#define FLATDATA_CONSTMINIGAMETBGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD27F70)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETLEFT_OFFSET UNITYSDK_OFFSET(0xD28340)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETLEFT_OFFSET UNITYSDK_OFFSET(0xD28390)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0xD28410)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0xD28460)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETTOP_OFFSET UNITYSDK_OFFSET(0xD284E0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETTOP_OFFSET UNITYSDK_OFFSET(0xD28530)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET UNITYSDK_OFFSET(0xD285B0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET UNITYSDK_OFFSET(0xD28600)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPCENTEROFFSETX_OFFSET UNITYSDK_OFFSET(0xD28680)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPCENTEROFFSETX_OFFSET UNITYSDK_OFFSET(0xD286D0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPCENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0xD28750)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPCENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0xD287A0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAANGLE_OFFSET UNITYSDK_OFFSET(0xD28820)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAANGLE_OFFSET UNITYSDK_OFFSET(0xD28870)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD288F0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD28940)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD289C0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD28A10)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD28A90)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD28AE0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_THEMALOADINGPROGRESSTIME_OFFSET UNITYSDK_OFFSET(0xD28B60)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_THEMALOADINGPROGRESSTIME_OFFSET UNITYSDK_OFFSET(0xD28BB0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_MAPALLYROTATION_OFFSET UNITYSDK_OFFSET(0xD28C30)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_MAPALLYROTATION_OFFSET UNITYSDK_OFFSET(0xD28C80)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ANIALLYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD28D00)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ANIALLYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD28D40)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GETANIALLYBATTLEATTACKBYTES_OFFSET UNITYSDK_OFFSET(0xD28DB0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTALLYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD28DD0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTALLYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD28E10)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GETEFFECTALLYBATTLEATTACKBYTES_OFFSET UNITYSDK_OFFSET(0xD28E80)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTALLYBATTLEDAMAGE_OFFSET UNITYSDK_OFFSET(0xD28EA0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTALLYBATTLEDAMAGE_OFFSET UNITYSDK_OFFSET(0xD28EE0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GETEFFECTALLYBATTLEDAMAGEBYTES_OFFSET UNITYSDK_OFFSET(0xD28F50)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ANIENEMYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD28F70)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ANIENEMYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD28FB0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GETANIENEMYBATTLEATTACKBYTES_OFFSET UNITYSDK_OFFSET(0xD29020)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTENEMYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD29040)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTENEMYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD29080)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GETEFFECTENEMYBATTLEATTACKBYTES_OFFSET UNITYSDK_OFFSET(0xD290F0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTENEMYBATTLEDAMAGE_OFFSET UNITYSDK_OFFSET(0xD29110)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTENEMYBATTLEDAMAGE_OFFSET UNITYSDK_OFFSET(0xD29150)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GETEFFECTENEMYBATTLEDAMAGEBYTES_OFFSET UNITYSDK_OFFSET(0xD291C0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERALLYROTATION_OFFSET UNITYSDK_OFFSET(0xD291E0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERALLYROTATION_OFFSET UNITYSDK_OFFSET(0xD29230)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERENEMYROTATION_OFFSET UNITYSDK_OFFSET(0xD292B0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERENEMYROTATION_OFFSET UNITYSDK_OFFSET(0xD29300)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERREWARDRECEIVEINDEX_OFFSET UNITYSDK_OFFSET(0xD29380)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERREWARDRECEIVEINDEX_OFFSET UNITYSDK_OFFSET(0xD293D0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_CREATECONSTMINIGAMETBGEXCEL_OFFSET UNITYSDK_OFFSET(0xD29450)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_STARTCONSTMINIGAMETBGEXCEL_OFFSET UNITYSDK_OFFSET(0xD29CB0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETLEFT_OFFSET UNITYSDK_OFFSET(0xD29C30)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0xD29C00)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETTOP_OFFSET UNITYSDK_OFFSET(0xD29BD0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET UNITYSDK_OFFSET(0xD29BA0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPCENTEROFFSETX_OFFSET UNITYSDK_OFFSET(0xD29B70)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPCENTEROFFSETY_OFFSET UNITYSDK_OFFSET(0xD29B40)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCAMERAANGLE_OFFSET UNITYSDK_OFFSET(0xD29B10)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCAMERAZOOMMAX_OFFSET UNITYSDK_OFFSET(0xD29AE0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCAMERAZOOMMIN_OFFSET UNITYSDK_OFFSET(0xD29AB0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCAMERAZOOMDEFAULT_OFFSET UNITYSDK_OFFSET(0xD29A80)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDTHEMALOADINGPROGRESSTIME_OFFSET UNITYSDK_OFFSET(0xD29A50)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDMAPALLYROTATION_OFFSET UNITYSDK_OFFSET(0xD29A20)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDANIALLYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD299F0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDEFFECTALLYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD299C0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDEFFECTALLYBATTLEDAMAGE_OFFSET UNITYSDK_OFFSET(0xD29990)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDANIENEMYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD29960)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDEFFECTENEMYBATTLEATTACK_OFFSET UNITYSDK_OFFSET(0xD29930)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDEFFECTENEMYBATTLEDAMAGE_OFFSET UNITYSDK_OFFSET(0xD29900)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDENCOUNTERALLYROTATION_OFFSET UNITYSDK_OFFSET(0xD298D0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDENCOUNTERENEMYROTATION_OFFSET UNITYSDK_OFFSET(0xD298A0)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ADDENCOUNTERREWARDRECEIVEINDEX_OFFSET UNITYSDK_OFFSET(0xD29870)
#define FLATDATA_CONSTMINIGAMETBGEXCEL_ENDCONSTMINIGAMETBGEXCEL_OFFSET UNITYSDK_OFFSET(0xD29C60)

namespace FlatData
{
	inline static constexpr unsigned int ConstMinigameTBGExcel_TypeDefinitionIndex = 9233;

	class ConstMinigameTBGExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstMinigameTBGExcel* GetRootAsConstMinigameTBGExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstMinigameTBGExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GETROOTASCONSTMINIGAMETBGEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstMinigameTBGExcel* GetRootAsConstMinigameTBGExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstMinigameTBGExcel* arg2)
		{
			return ((::FlatData::ConstMinigameTBGExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstMinigameTBGExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GETROOTASCONSTMINIGAMETBGEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstMinigameTBGExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstMinigameTBGExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single get_conquestMapBoundaryOffsetLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETLEFT_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapBoundaryOffsetLeft()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETLEFT_OFFSET))(nullptr);
		}

		::System::Single get_conquestMapBoundaryOffsetRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapBoundaryOffsetRight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET))(nullptr);
		}

		::System::Single get_conquestMapBoundaryOffsetTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETTOP_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapBoundaryOffsetTop()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETTOP_OFFSET))(nullptr);
		}

		::System::Single get_conquestMapBoundaryOffsetBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapBoundaryOffsetBottom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET))(nullptr);
		}

		::System::Single get_conquestMapCenterOffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPCENTEROFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapCenterOffsetX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPCENTEROFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_conquestMapCenterOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPCENTEROFFSETY_OFFSET))(nullptr);
		}

		::System::Single get_ConquestMapCenterOffsetY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CONQUESTMAPCENTEROFFSETY_OFFSET))(nullptr);
		}

		::System::Single get_cameraAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAANGLE_OFFSET))(nullptr);
		}

		::System::Single get_CameraAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAANGLE_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMMAX_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMMAX_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMMIN_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMMIN_OFFSET))(nullptr);
		}

		::System::Single get_cameraZoomDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_CameraZoomDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_CAMERAZOOMDEFAULT_OFFSET))(nullptr);
		}

		::System::Single get_themaLoadingProgressTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_THEMALOADINGPROGRESSTIME_OFFSET))(nullptr);
		}

		::System::Single get_ThemaLoadingProgressTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_THEMALOADINGPROGRESSTIME_OFFSET))(nullptr);
		}

		::System::Single get_mapAllyRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_MAPALLYROTATION_OFFSET))(nullptr);
		}

		::System::Single get_MapAllyRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_MAPALLYROTATION_OFFSET))(nullptr);
		}

		::System::String* get_aniAllyBattleAttack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ANIALLYBATTLEATTACK_OFFSET))(nullptr);
		}

		::System::String* get_AniAllyBattleAttack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ANIALLYBATTLEATTACK_OFFSET))(nullptr);
		}

		Il2CppObject* GetAniAllyBattleAttackBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GETANIALLYBATTLEATTACKBYTES_OFFSET))(nullptr);
		}

		::System::String* get_effectAllyBattleAttack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTALLYBATTLEATTACK_OFFSET))(nullptr);
		}

		::System::String* get_EffectAllyBattleAttack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTALLYBATTLEATTACK_OFFSET))(nullptr);
		}

		Il2CppObject* GetEffectAllyBattleAttackBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GETEFFECTALLYBATTLEATTACKBYTES_OFFSET))(nullptr);
		}

		::System::String* get_effectAllyBattleDamage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTALLYBATTLEDAMAGE_OFFSET))(nullptr);
		}

		::System::String* get_EffectAllyBattleDamage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTALLYBATTLEDAMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEffectAllyBattleDamageBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GETEFFECTALLYBATTLEDAMAGEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_aniEnemyBattleAttack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ANIENEMYBATTLEATTACK_OFFSET))(nullptr);
		}

		::System::String* get_AniEnemyBattleAttack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ANIENEMYBATTLEATTACK_OFFSET))(nullptr);
		}

		Il2CppObject* GetAniEnemyBattleAttackBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GETANIENEMYBATTLEATTACKBYTES_OFFSET))(nullptr);
		}

		::System::String* get_effectEnemyBattleAttack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTENEMYBATTLEATTACK_OFFSET))(nullptr);
		}

		::System::String* get_EffectEnemyBattleAttack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTENEMYBATTLEATTACK_OFFSET))(nullptr);
		}

		Il2CppObject* GetEffectEnemyBattleAttackBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GETEFFECTENEMYBATTLEATTACKBYTES_OFFSET))(nullptr);
		}

		::System::String* get_effectEnemyBattleDamage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTENEMYBATTLEDAMAGE_OFFSET))(nullptr);
		}

		::System::String* get_EffectEnemyBattleDamage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_EFFECTENEMYBATTLEDAMAGE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEffectEnemyBattleDamageBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GETEFFECTENEMYBATTLEDAMAGEBYTES_OFFSET))(nullptr);
		}

		::System::Single get_encounterAllyRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERALLYROTATION_OFFSET))(nullptr);
		}

		::System::Single get_EncounterAllyRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERALLYROTATION_OFFSET))(nullptr);
		}

		::System::Single get_encounterEnemyRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERENEMYROTATION_OFFSET))(nullptr);
		}

		::System::Single get_EncounterEnemyRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERENEMYROTATION_OFFSET))(nullptr);
		}

		::System::Int32 get_encounterRewardReceiveIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERREWARDRECEIVEINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_EncounterRewardReceiveIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_GET_ENCOUNTERREWARDRECEIVEINDEX_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstMinigameTBGExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2, ::System::Single arg3, ::System::Single arg4, ::System::Single arg5, ::System::Single arg6, ::System::Single arg7, ::System::Single arg8, ::System::Single arg9, ::System::Single arg10, ::System::Single arg11, ::System::Single arg12, ::System::Single arg13, ::FlatBuffers::StringOffset* arg14, ::FlatBuffers::StringOffset* arg15, ::FlatBuffers::StringOffset* arg16, ::FlatBuffers::StringOffset* arg17, ::FlatBuffers::StringOffset* arg18, ::FlatBuffers::StringOffset* arg19, ::System::Single arg20, ::System::Single arg21, ::System::Int32 arg22)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Single, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_CREATECONSTMINIGAMETBGEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20, arg21, arg22, nullptr);
		}

		::System::Void StartConstMinigameTBGExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_STARTCONSTMINIGAMETBGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddConquestMapBoundaryOffsetLeft(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETLEFT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConquestMapBoundaryOffsetRight(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETRIGHT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConquestMapBoundaryOffsetTop(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETTOP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConquestMapBoundaryOffsetBottom(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPBOUNDARYOFFSETBOTTOM_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConquestMapCenterOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPCENTEROFFSETX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddConquestMapCenterOffsetY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCONQUESTMAPCENTEROFFSETY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraAngle(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCAMERAANGLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomMax(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCAMERAZOOMMAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomMin(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCAMERAZOOMMIN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraZoomDefault(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDCAMERAZOOMDEFAULT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddThemaLoadingProgressTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDTHEMALOADINGPROGRESSTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMapAllyRotation(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDMAPALLYROTATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAniAllyBattleAttack(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDANIALLYBATTLEATTACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEffectAllyBattleAttack(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDEFFECTALLYBATTLEATTACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEffectAllyBattleDamage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDEFFECTALLYBATTLEDAMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddAniEnemyBattleAttack(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDANIENEMYBATTLEATTACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEffectEnemyBattleAttack(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDEFFECTENEMYBATTLEATTACK_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEffectEnemyBattleDamage(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDEFFECTENEMYBATTLEDAMAGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEncounterAllyRotation(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDENCOUNTERALLYROTATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEncounterEnemyRotation(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDENCOUNTERENEMYROTATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEncounterRewardReceiveIndex(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ADDENCOUNTERREWARDRECEIVEINDEX_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstMinigameTBGExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMETBGEXCEL_ENDCONSTMINIGAMETBGEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

