#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class FieldStoryStageExcel; }
namespace FlatData { class StageTopography; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD46A50)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GETROOTASFIELDSTORYSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD46A60)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GETROOTASFIELDSTORYSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD46AC0)
#define FLATDATA_FIELDSTORYSTAGEEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD46B20)
#define FLATDATA_FIELDSTORYSTAGEEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD46770)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD46B40)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD46B90)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD46C10)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0xD46C60)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD46CE0)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD46D20)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GETNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD46D90)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD46DB0)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_BATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD46E00)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD46E80)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD46ED0)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0xD46F50)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0xD46FA0)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD47020)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_GROUNDID_OFFSET UNITYSDK_OFFSET(0xD47070)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xD470F0)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_BGMID_OFFSET UNITYSDK_OFFSET(0xD47140)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0xD471C0)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0xD47210)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_SKIPFORMATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xD47290)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_GET_SKIPFORMATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xD472E0)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_CREATEFIELDSTORYSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD47330)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_STARTFIELDSTORYSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD47730)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD475F0)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_ADDSEASONID_OFFSET UNITYSDK_OFFSET(0xD475C0)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_ADDNAME_OFFSET UNITYSDK_OFFSET(0xD47680)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_ADDBATTLEDURATION_OFFSET UNITYSDK_OFFSET(0xD47590)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET UNITYSDK_OFFSET(0xD47650)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET UNITYSDK_OFFSET(0xD47620)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_ADDGROUNDID_OFFSET UNITYSDK_OFFSET(0xD47560)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_ADDBGMID_OFFSET UNITYSDK_OFFSET(0xD47530)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_ADDFIXEDECHELONID_OFFSET UNITYSDK_OFFSET(0xD47500)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_ADDSKIPFORMATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0xD476B0)
#define FLATDATA_FIELDSTORYSTAGEEXCEL_ENDFIELDSTORYSTAGEEXCEL_OFFSET UNITYSDK_OFFSET(0xD476E0)

namespace FlatData
{
	inline static constexpr unsigned int FieldStoryStageExcel_TypeDefinitionIndex = 9287;

	class FieldStoryStageExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::FieldStoryStageExcel* GetRootAsFieldStoryStageExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::FieldStoryStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GETROOTASFIELDSTORYSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::FieldStoryStageExcel* GetRootAsFieldStoryStageExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::FieldStoryStageExcel* arg2)
		{
			return ((::FlatData::FieldStoryStageExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::FieldStoryStageExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GETROOTASFIELDSTORYSTAGEEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::FieldStoryStageExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::FieldStoryStageExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_seasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_NAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GETNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_battleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::System::Int64 get_BattleDuration()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_BATTLEDURATION_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_stageTopography()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::FlatData::StageTopography* get_StageTopography()
		{
			return ((::FlatData::StageTopography*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_STAGETOPOGRAPHY_OFFSET))(nullptr);
		}

		::System::Int32 get_recommandLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Int32 get_RecommandLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_RECOMMANDLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 get_groundID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroundID()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_GROUNDID_OFFSET))(nullptr);
		}

		::System::Int64 get_bGMId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Int64 get_BGMId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_BGMID_OFFSET))(nullptr);
		}

		::System::Int64 get_fixedEchelonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Int64 get_FixedEchelonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_FIXEDECHELONID_OFFSET))(nullptr);
		}

		::System::Boolean get_skipFormationSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_SKIPFORMATIONSETTINGS_OFFSET))(nullptr);
		}

		::System::Boolean get_SkipFormationSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_GET_SKIPFORMATIONSETTINGS_OFFSET))(nullptr);
		}

		Il2CppObject* CreateFieldStoryStageExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::FlatBuffers::StringOffset* arg4, ::System::Int64 arg5, ::FlatData::StageTopography* arg6, ::System::Int32 arg7, ::System::Int64 arg8, ::System::Int64 arg9, ::System::Int64 arg10, ::System::Boolean arg11)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::StageTopography*, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_CREATEFIELDSTORYSTAGEEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, nullptr);
		}

		::System::Void StartFieldStoryStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_STARTFIELDSTORYSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSeasonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_ADDSEASONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_ADDNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBattleDuration(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_ADDBATTLEDURATION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStageTopography(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageTopography* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageTopography*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_ADDSTAGETOPOGRAPHY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRecommandLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_ADDRECOMMANDLEVEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGroundID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_ADDGROUNDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBGMId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_ADDBGMID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddFixedEchelonId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_ADDFIXEDECHELONID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddSkipFormationSettings(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_ADDSKIPFORMATIONSETTINGS_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndFieldStoryStageExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_FIELDSTORYSTAGEEXCEL_ENDFIELDSTORYSTAGEEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

