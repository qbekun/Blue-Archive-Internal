#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WorldRaidConditionExcel; }
namespace FlatData { class MultipleConditionCheckType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CCB340)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETROOTASWORLDRAIDCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCB350)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETROOTASWORLDRAIDCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCB3B0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CCB440)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CCB410)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CCB460)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_LOCKUI_OFFSET UNITYSDK_OFFSET(0x1CCB4B0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_LOCKUILENGTH_OFFSET UNITYSDK_OFFSET(0x1CCB500)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_HIDEWHENLOCKED_OFFSET UNITYSDK_OFFSET(0x1CCB540)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_ACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1CCB590)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_SCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1CCB5E0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_SCENARIOMODEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CCB640)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETSCENARIOMODEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CCB680)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x1CCB6A0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_CAMPAIGNSTAGEIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1CCB700)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETCAMPAIGNSTAGEIDBYTES_OFFSET UNITYSDK_OFFSET(0x1CCB740)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1CCB760)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_AFTERWHENDATE_OFFSET UNITYSDK_OFFSET(0x1CCB7B0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETAFTERWHENDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1CCB7F0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_WORLDRAIDBOSSKILL_OFFSET UNITYSDK_OFFSET(0x1CCB810)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_WORLDRAIDBOSSKILLLENGTH_OFFSET UNITYSDK_OFFSET(0x1CCB870)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETWORLDRAIDBOSSKILLBYTES_OFFSET UNITYSDK_OFFSET(0x1CCB8B0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CREATEWORLDRAIDCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCB8D0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_STARTWORLDRAIDCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCBC70)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1CCBAA0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDLOCKUI_OFFSET UNITYSDK_OFFSET(0x1CCBBC0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CREATELOCKUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCBC90)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_STARTLOCKUIVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCBD20)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDHIDEWHENLOCKED_OFFSET UNITYSDK_OFFSET(0x1CCBBF0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDACCOUNTLEVEL_OFFSET UNITYSDK_OFFSET(0x1CCBA70)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDSCENARIOMODEID_OFFSET UNITYSDK_OFFSET(0x1CCBB90)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CREATESCENARIOMODEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCBD60)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_STARTSCENARIOMODEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCBDF0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDCAMPAIGNSTAGEID_OFFSET UNITYSDK_OFFSET(0x1CCBB60)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CREATECAMPAIGNSTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCBE30)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_STARTCAMPAIGNSTAGEIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCBEC0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDMULTIPLECONDITIONCHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1CCBB30)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDAFTERWHENDATE_OFFSET UNITYSDK_OFFSET(0x1CCBB00)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDWORLDRAIDBOSSKILL_OFFSET UNITYSDK_OFFSET(0x1CCBAD0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CREATEWORLDRAIDBOSSKILLVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCBF00)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_STARTWORLDRAIDBOSSKILLVECTOR_OFFSET UNITYSDK_OFFSET(0x1CCBF90)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ENDWORLDRAIDCONDITIONEXCEL_OFFSET UNITYSDK_OFFSET(0x1CCBC20)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_FINISHWORLDRAIDCONDITIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CCBFD0)
#define MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_FINISHSIZEPREFIXEDWORLDRAIDCONDITIONEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CCBFF0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidConditionExcel_TypeDefinitionIndex = 19805;

	class WorldRaidConditionExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WorldRaidConditionExcel* GetRootAsWorldRaidConditionExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidConditionExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETROOTASWORLDRAIDCONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidConditionExcel* GetRootAsWorldRaidConditionExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WorldRaidConditionExcel* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidConditionExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WorldRaidConditionExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETROOTASWORLDRAIDCONDITIONEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidConditionExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidConditionExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_Id()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* LockUI(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_LOCKUI_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_LockUILength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_LOCKUILENGTH_OFFSET))(nullptr);
		}

		::System::Boolean get_HideWhenLocked()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_HIDEWHENLOCKED_OFFSET))(nullptr);
		}

		::System::Int64 get_AccountLevel()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_ACCOUNTLEVEL_OFFSET))(nullptr);
		}

		::System::Int64 ScenarioModeId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_SCENARIOMODEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ScenarioModeIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_SCENARIOMODEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetScenarioModeIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETSCENARIOMODEIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 CampaignStageID(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CAMPAIGNSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_CampaignStageIDLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_CAMPAIGNSTAGEIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetCampaignStageIDBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETCAMPAIGNSTAGEIDBYTES_OFFSET))(nullptr);
		}

		::FlatData::MultipleConditionCheckType* get_MultipleConditionCheckType()
		{
			return (return (::FlatData::MultipleConditionCheckType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_MULTIPLECONDITIONCHECKTYPE_OFFSET))(nullptr);
		}

		::System::String* get_AfterWhenDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_AFTERWHENDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetAfterWhenDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETAFTERWHENDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 WorldRaidBossKill(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_WORLDRAIDBOSSKILL_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_WorldRaidBossKillLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GET_WORLDRAIDBOSSKILLLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetWorldRaidBossKillBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_GETWORLDRAIDBOSSKILLBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWorldRaidConditionExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatBuffers::VectorOffset* arg, ::FlatBuffers::VectorOffset* arg, ::FlatData::MultipleConditionCheckType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::VectorOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::VectorOffset*, ::System::Boolean, ::System::Int64, ::FlatBuffers::VectorOffset*, ::FlatBuffers::VectorOffset*, ::FlatData::MultipleConditionCheckType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CREATEWORLDRAIDCONDITIONEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWorldRaidConditionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_STARTWORLDRAIDCONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLockUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDLOCKUI_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateLockUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CREATELOCKUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartLockUIVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_STARTLOCKUIVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddHideWhenLocked(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDHIDEWHENLOCKED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAccountLevel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDACCOUNTLEVEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddScenarioModeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDSCENARIOMODEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateScenarioModeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CREATESCENARIOMODEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartScenarioModeIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_STARTSCENARIOMODEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCampaignStageID(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDCAMPAIGNSTAGEID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateCampaignStageIDVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CREATECAMPAIGNSTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartCampaignStageIDVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_STARTCAMPAIGNSTAGEIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddMultipleConditionCheckType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::MultipleConditionCheckType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::MultipleConditionCheckType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDMULTIPLECONDITIONCHECKTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddAfterWhenDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDAFTERWHENDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddWorldRaidBossKill(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ADDWORLDRAIDBOSSKILL_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateWorldRaidBossKillVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_CREATEWORLDRAIDBOSSKILLVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartWorldRaidBossKillVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_STARTWORLDRAIDBOSSKILLVECTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWorldRaidConditionExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_ENDWORLDRAIDCONDITIONEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWorldRaidConditionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_FINISHWORLDRAIDCONDITIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWorldRaidConditionExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDCONDITIONEXCEL_FINISHSIZEPREFIXEDWORLDRAIDCONDITIONEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

