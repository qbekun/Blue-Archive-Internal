#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConstMiniGameShootingExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD26CA0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GETROOTASCONSTMINIGAMESHOOTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD26CB0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GETROOTASCONSTMINIGAMESHOOTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD26D10)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD26D70)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD269C0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_NORMALSTAGEID_OFFSET UNITYSDK_OFFSET(0xD26D90)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_NORMALSTAGEID_OFFSET UNITYSDK_OFFSET(0xD26DE0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_NORMALSECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD26E60)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_NORMALSECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD26EB0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HARDSTAGEID_OFFSET UNITYSDK_OFFSET(0xD26F30)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HARDSTAGEID_OFFSET UNITYSDK_OFFSET(0xD26F80)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HARDSECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD27000)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HARDSECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD27050)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREESTAGEID_OFFSET UNITYSDK_OFFSET(0xD270D0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREESTAGEID_OFFSET UNITYSDK_OFFSET(0xD27120)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREESECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD271A0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREESECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD271F0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_PLAYERCHARACTERID_OFFSET UNITYSDK_OFFSET(0xD27270)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_PLAYERCHARACTERIDLENGTH_OFFSET UNITYSDK_OFFSET(0xD272D0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_PLAYERCHARACTERID_OFFSET UNITYSDK_OFFSET(0xD27310)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GETPLAYERCHARACTERIDBYTES_OFFSET UNITYSDK_OFFSET(0xD273A0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HIDDENPLAYERCHARACTERID_OFFSET UNITYSDK_OFFSET(0xD273C0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HIDDENPLAYERCHARACTERID_OFFSET UNITYSDK_OFFSET(0xD27410)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_CAMERASMOOTHTIME_OFFSET UNITYSDK_OFFSET(0xD27490)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_CAMERASMOOTHTIME_OFFSET UNITYSDK_OFFSET(0xD274E0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_SPAWNEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xD27560)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_SPAWNEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xD275A0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GETSPAWNEFFECTPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD27610)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_WAITTIMEAFTERSPAWN_OFFSET UNITYSDK_OFFSET(0xD27630)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_WAITTIMEAFTERSPAWN_OFFSET UNITYSDK_OFFSET(0xD27680)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREEGEARINTERVAL_OFFSET UNITYSDK_OFFSET(0xD27700)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREEGEARINTERVAL_OFFSET UNITYSDK_OFFSET(0xD27750)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_CREATECONSTMINIGAMESHOOTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD277D0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_STARTCONSTMINIGAMESHOOTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD27C90)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDNORMALSTAGEID_OFFSET UNITYSDK_OFFSET(0xD27A90)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDNORMALSECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD27C10)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDHARDSTAGEID_OFFSET UNITYSDK_OFFSET(0xD27A60)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDHARDSECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD27BE0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDFREESTAGEID_OFFSET UNITYSDK_OFFSET(0xD27A30)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDFREESECTIONCOUNT_OFFSET UNITYSDK_OFFSET(0xD27BB0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDPLAYERCHARACTERID_OFFSET UNITYSDK_OFFSET(0xD27B80)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_CREATEPLAYERCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD27CB0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_STARTPLAYERCHARACTERIDVECTOR_OFFSET UNITYSDK_OFFSET(0xD27D40)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDHIDDENPLAYERCHARACTERID_OFFSET UNITYSDK_OFFSET(0xD27A00)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDCAMERASMOOTHTIME_OFFSET UNITYSDK_OFFSET(0xD27B50)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDSPAWNEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xD27B20)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDWAITTIMEAFTERSPAWN_OFFSET UNITYSDK_OFFSET(0xD27AF0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDFREEGEARINTERVAL_OFFSET UNITYSDK_OFFSET(0xD27AC0)
#define FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ENDCONSTMINIGAMESHOOTINGEXCEL_OFFSET UNITYSDK_OFFSET(0xD27C40)

namespace FlatData
{
	inline static constexpr unsigned int ConstMiniGameShootingExcel_TypeDefinitionIndex = 9231;

	class ConstMiniGameShootingExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConstMiniGameShootingExcel* GetRootAsConstMiniGameShootingExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConstMiniGameShootingExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GETROOTASCONSTMINIGAMESHOOTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConstMiniGameShootingExcel* GetRootAsConstMiniGameShootingExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConstMiniGameShootingExcel* arg2)
		{
			return ((::FlatData::ConstMiniGameShootingExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConstMiniGameShootingExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GETROOTASCONSTMINIGAMESHOOTINGEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConstMiniGameShootingExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConstMiniGameShootingExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_normalStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_NORMALSTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_NormalStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_NORMALSTAGEID_OFFSET))(nullptr);
		}

		::System::Int32 get_normalSectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_NORMALSECTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_NormalSectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_NORMALSECTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_hardStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HARDSTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_HardStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HARDSTAGEID_OFFSET))(nullptr);
		}

		::System::Int32 get_hardSectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HARDSECTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_HardSectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HARDSECTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_freeStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREESTAGEID_OFFSET))(nullptr);
		}

		::System::Int64 get_FreeStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREESTAGEID_OFFSET))(nullptr);
		}

		::System::Int32 get_freeSectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREESECTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 get_FreeSectionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREESECTIONCOUNT_OFFSET))(nullptr);
		}

		::System::Int64 playerCharacterId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_PLAYERCHARACTERID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_PlayerCharacterIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_PLAYERCHARACTERIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 PlayerCharacterId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_PLAYERCHARACTERID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPlayerCharacterIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GETPLAYERCHARACTERIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_hiddenPlayerCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HIDDENPLAYERCHARACTERID_OFFSET))(nullptr);
		}

		::System::Int64 get_HiddenPlayerCharacterId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_HIDDENPLAYERCHARACTERID_OFFSET))(nullptr);
		}

		::System::Single get_cameraSmoothTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_CAMERASMOOTHTIME_OFFSET))(nullptr);
		}

		::System::Single get_CameraSmoothTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_CAMERASMOOTHTIME_OFFSET))(nullptr);
		}

		::System::String* get_spawnEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_SPAWNEFFECTPATH_OFFSET))(nullptr);
		}

		::System::String* get_SpawnEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_SPAWNEFFECTPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSpawnEffectPathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GETSPAWNEFFECTPATHBYTES_OFFSET))(nullptr);
		}

		::System::Single get_waitTimeAfterSpawn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_WAITTIMEAFTERSPAWN_OFFSET))(nullptr);
		}

		::System::Single get_WaitTimeAfterSpawn()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_WAITTIMEAFTERSPAWN_OFFSET))(nullptr);
		}

		::System::Int32 get_freeGearInterval()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREEGEARINTERVAL_OFFSET))(nullptr);
		}

		::System::Int32 get_FreeGearInterval()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_GET_FREEGEARINTERVAL_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConstMiniGameShootingExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Int64 arg4, ::System::Int32 arg5, ::System::Int64 arg6, ::System::Int32 arg7, ::FlatBuffers::VectorOffset* arg8, ::System::Int64 arg9, ::System::Single arg10, ::FlatBuffers::StringOffset* arg11, ::System::Single arg12, ::System::Int32 arg13)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int64, ::System::Int32, ::FlatBuffers::VectorOffset*, ::System::Int64, ::System::Single, ::FlatBuffers::StringOffset*, ::System::Single, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_CREATECONSTMINIGAMESHOOTINGEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, nullptr);
		}

		::System::Void StartConstMiniGameShootingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_STARTCONSTMINIGAMESHOOTINGEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddNormalStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDNORMALSTAGEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddNormalSectionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDNORMALSECTIONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddHardStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDHARDSTAGEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddHardSectionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDHARDSECTIONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFreeStageId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDFREESTAGEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFreeSectionCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDFREESECTIONCOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddPlayerCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDPLAYERCHARACTERID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreatePlayerCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_CREATEPLAYERCHARACTERIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartPlayerCharacterIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_STARTPLAYERCHARACTERIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddHiddenPlayerCharacterId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDHIDDENPLAYERCHARACTERID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddCameraSmoothTime(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDCAMERASMOOTHTIME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSpawnEffectPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDSPAWNEFFECTPATH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddWaitTimeAfterSpawn(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDWAITTIMEAFTERSPAWN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFreeGearInterval(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ADDFREEGEARINTERVAL_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConstMiniGameShootingExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONSTMINIGAMESHOOTINGEXCEL_ENDCONSTMINIGAMESHOOTINGEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

