#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class ConquestStepExcel; }
namespace FlatData { class StageDifficulty; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }
namespace FlatBuffers { class VectorOffset; }

#define FLATDATA_CONQUESTSTEPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xCE8660)
#define FLATDATA_CONQUESTSTEPEXCEL_GETROOTASCONQUESTSTEPEXCEL_OFFSET UNITYSDK_OFFSET(0xCE8670)
#define FLATDATA_CONQUESTSTEPEXCEL_GETROOTASCONQUESTSTEPEXCEL_OFFSET UNITYSDK_OFFSET(0xCE86D0)
#define FLATDATA_CONQUESTSTEPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xCE8730)
#define FLATDATA_CONQUESTSTEPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xCE8380)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xCE8750)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xCE87A0)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_MAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xCE8820)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_MAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xCE8870)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEP_OFFSET UNITYSDK_OFFSET(0xCE88F0)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEP_OFFSET UNITYSDK_OFFSET(0xCE8940)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEPGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0xCE89C0)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEPGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0xCE8A00)
#define FLATDATA_CONQUESTSTEPEXCEL_GETSTEPGOALLOCALIZEBYTES_OFFSET UNITYSDK_OFFSET(0xCE8A70)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xCE8A90)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xCE8AE0)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMTYPE_OFFSET UNITYSDK_OFFSET(0xCE8B60)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMTYPE_OFFSET UNITYSDK_OFFSET(0xCE8BB0)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0xCE8C30)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0xCE8C80)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0xCE8D00)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0xCE8D50)
#define FLATDATA_CONQUESTSTEPEXCEL_UNEXPECTEDEVENTUNITID_OFFSET UNITYSDK_OFFSET(0xCE8DD0)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_UNEXPECTEDEVENTUNITIDLENGTH_OFFSET UNITYSDK_OFFSET(0xCE8E30)
#define FLATDATA_CONQUESTSTEPEXCEL_UNEXPECTEDEVENTUNITID_OFFSET UNITYSDK_OFFSET(0xCE8E70)
#define FLATDATA_CONQUESTSTEPEXCEL_GETUNEXPECTEDEVENTUNITIDBYTES_OFFSET UNITYSDK_OFFSET(0xCE8F00)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_UNEXPECTEDEVENTPREFAB_OFFSET UNITYSDK_OFFSET(0xCE8F20)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_UNEXPECTEDEVENTPREFAB_OFFSET UNITYSDK_OFFSET(0xCE8F60)
#define FLATDATA_CONQUESTSTEPEXCEL_GETUNEXPECTEDEVENTPREFABBYTES_OFFSET UNITYSDK_OFFSET(0xCE8FD0)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_TREASUREBOXOBJECTID_OFFSET UNITYSDK_OFFSET(0xCE8FF0)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_TREASUREBOXOBJECTID_OFFSET UNITYSDK_OFFSET(0xCE9040)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_TREASUREBOXCOUNTPERSTEPOPEN_OFFSET UNITYSDK_OFFSET(0xCE90C0)
#define FLATDATA_CONQUESTSTEPEXCEL_GET_TREASUREBOXCOUNTPERSTEPOPEN_OFFSET UNITYSDK_OFFSET(0xCE9110)
#define FLATDATA_CONQUESTSTEPEXCEL_CREATECONQUESTSTEPEXCEL_OFFSET UNITYSDK_OFFSET(0xCE9190)
#define FLATDATA_CONQUESTSTEPEXCEL_STARTCONQUESTSTEPEXCEL_OFFSET UNITYSDK_OFFSET(0xCE9640)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xCE9470)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDMAPDIFFICULTY_OFFSET UNITYSDK_OFFSET(0xCE95C0)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDSTEP_OFFSET UNITYSDK_OFFSET(0xCE9590)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDSTEPGOALLOCALIZE_OFFSET UNITYSDK_OFFSET(0xCE9560)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDSTEPENTERSCENARIOGROUPID_OFFSET UNITYSDK_OFFSET(0xCE9440)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDSTEPENTERITEMTYPE_OFFSET UNITYSDK_OFFSET(0xCE9530)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDSTEPENTERITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0xCE9410)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDSTEPENTERITEMAMOUNT_OFFSET UNITYSDK_OFFSET(0xCE93E0)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDUNEXPECTEDEVENTUNITID_OFFSET UNITYSDK_OFFSET(0xCE9500)
#define FLATDATA_CONQUESTSTEPEXCEL_CREATEUNEXPECTEDEVENTUNITIDVECTOR_OFFSET UNITYSDK_OFFSET(0xCE9660)
#define FLATDATA_CONQUESTSTEPEXCEL_STARTUNEXPECTEDEVENTUNITIDVECTOR_OFFSET UNITYSDK_OFFSET(0xCE96F0)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDUNEXPECTEDEVENTPREFAB_OFFSET UNITYSDK_OFFSET(0xCE94D0)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDTREASUREBOXOBJECTID_OFFSET UNITYSDK_OFFSET(0xCE93B0)
#define FLATDATA_CONQUESTSTEPEXCEL_ADDTREASUREBOXCOUNTPERSTEPOPEN_OFFSET UNITYSDK_OFFSET(0xCE94A0)
#define FLATDATA_CONQUESTSTEPEXCEL_ENDCONQUESTSTEPEXCEL_OFFSET UNITYSDK_OFFSET(0xCE95F0)

namespace FlatData
{
	inline static constexpr unsigned int ConquestStepExcel_TypeDefinitionIndex = 9207;

	class ConquestStepExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::ConquestStepExcel* GetRootAsConquestStepExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::ConquestStepExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GETROOTASCONQUESTSTEPEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::ConquestStepExcel* GetRootAsConquestStepExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::ConquestStepExcel* arg2)
		{
			return ((::FlatData::ConquestStepExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::ConquestStepExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GETROOTASCONQUESTSTEPEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ConquestStepExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::ConquestStepExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_eventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_mapDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_MAPDIFFICULTY_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_MapDifficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_MAPDIFFICULTY_OFFSET))(nullptr);
		}

		::System::Int32 get_step()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEP_OFFSET))(nullptr);
		}

		::System::Int32 get_Step()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEP_OFFSET))(nullptr);
		}

		::System::String* get_stepGoalLocalize()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEPGOALLOCALIZE_OFFSET))(nullptr);
		}

		::System::String* get_StepGoalLocalize()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEPGOALLOCALIZE_OFFSET))(nullptr);
		}

		Il2CppObject* GetStepGoalLocalizeBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GETSTEPGOALLOCALIZEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_stepEnterScenarioGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_StepEnterScenarioGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERSCENARIOGROUPID_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_stepEnterItemType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMTYPE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_StepEnterItemType()
		{
			return ((::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_stepEnterItemUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_StepEnterItemUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_stepEnterItemAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_StepEnterItemAmount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_STEPENTERITEMAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 unexpectedEventUnitId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_UNEXPECTEDEVENTUNITID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_UnexpectedEventUnitIdLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_UNEXPECTEDEVENTUNITIDLENGTH_OFFSET))(nullptr);
		}

		::System::Int64 UnexpectedEventUnitId(::System::Int32 arg)
		{
			return ((::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_UNEXPECTEDEVENTUNITID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetUnexpectedEventUnitIdBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GETUNEXPECTEDEVENTUNITIDBYTES_OFFSET))(nullptr);
		}

		::System::String* get_unexpectedEventPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_UNEXPECTEDEVENTPREFAB_OFFSET))(nullptr);
		}

		::System::String* get_UnexpectedEventPrefab()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_UNEXPECTEDEVENTPREFAB_OFFSET))(nullptr);
		}

		Il2CppObject* GetUnexpectedEventPrefabBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GETUNEXPECTEDEVENTPREFABBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_treasureBoxObjectId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_TREASUREBOXOBJECTID_OFFSET))(nullptr);
		}

		::System::Int64 get_TreasureBoxObjectId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_TREASUREBOXOBJECTID_OFFSET))(nullptr);
		}

		::System::Int32 get_treasureBoxCountPerStepOpen()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_TREASUREBOXCOUNTPERSTEPOPEN_OFFSET))(nullptr);
		}

		::System::Int32 get_TreasureBoxCountPerStepOpen()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_GET_TREASUREBOXCOUNTPERSTEPOPEN_OFFSET))(nullptr);
		}

		Il2CppObject* CreateConquestStepExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatData::StageDifficulty* arg3, ::System::Int32 arg4, ::FlatBuffers::StringOffset* arg5, ::System::Int64 arg6, ::FlatData::ParcelType* arg7, ::System::Int64 arg8, ::System::Int64 arg9, ::FlatBuffers::VectorOffset* arg10, ::FlatBuffers::StringOffset* arg11, ::System::Int64 arg12, ::System::Int32 arg13)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::StageDifficulty*, ::System::Int32, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::StringOffset*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_CREATECONQUESTSTEPEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, nullptr);
		}

		::System::Void StartConquestStepExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_STARTCONQUESTSTEPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddMapDifficulty(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::StageDifficulty* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDMAPDIFFICULTY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStep(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDSTEP_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStepGoalLocalize(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDSTEPGOALLOCALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStepEnterScenarioGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDSTEPENTERSCENARIOGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStepEnterItemType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDSTEPENTERITEMTYPE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStepEnterItemUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDSTEPENTERITEMUNIQUEID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddStepEnterItemAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDSTEPENTERITEMAMOUNT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddUnexpectedEventUnitId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDUNEXPECTEDEVENTUNITID_OFFSET))(arg, arg2, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateUnexpectedEventUnitIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_CREATEUNEXPECTEDEVENTUNITIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void StartUnexpectedEventUnitIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_STARTUNEXPECTEDEVENTUNITIDVECTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddUnexpectedEventPrefab(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDUNEXPECTEDEVENTPREFAB_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTreasureBoxObjectId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDTREASUREBOXOBJECTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddTreasureBoxCountPerStepOpen(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ADDTREASUREBOXCOUNTPERSTEPOPEN_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndConquestStepExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_CONQUESTSTEPEXCEL_ENDCONQUESTSTEPEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

