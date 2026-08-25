#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ScenarioModeRewardExcel; }
namespace FlatData { class RewardTag; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C62630)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GETROOTASSCENARIOMODEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C62640)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GETROOTASSCENARIOMODEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C626A0)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C62730)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C62700)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_SCENARIOMODEREWARDID_OFFSET UNITYSDK_OFFSET(0x1C62750)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_REWARDTAG_OFFSET UNITYSDK_OFFSET(0x1C627A0)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_REWARDPROB_OFFSET UNITYSDK_OFFSET(0x1C627F0)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C62840)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_REWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C62890)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C628E0)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_ISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1C62930)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_CREATESCENARIOMODEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C62980)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_STARTSCENARIOMODEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C62C70)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDSCENARIOMODEREWARDID_OFFSET UNITYSDK_OFFSET(0x1C62B00)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDREWARDTAG_OFFSET UNITYSDK_OFFSET(0x1C62BC0)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1C62B90)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C62B60)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDREWARDPARCELID_OFFSET UNITYSDK_OFFSET(0x1C62AD0)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C62B30)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDISDISPLAYED_OFFSET UNITYSDK_OFFSET(0x1C62BF0)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ENDSCENARIOMODEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C62C20)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_FINISHSCENARIOMODEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C62C90)
#define MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_FINISHSIZEPREFIXEDSCENARIOMODEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C62CB0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ScenarioModeRewardExcel_TypeDefinitionIndex = 19297;

	class ScenarioModeRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ScenarioModeRewardExcel* GetRootAsScenarioModeRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioModeRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GETROOTASSCENARIOMODEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ScenarioModeRewardExcel* GetRootAsScenarioModeRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ScenarioModeRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::ScenarioModeRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ScenarioModeRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GETROOTASSCENARIOMODEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ScenarioModeRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ScenarioModeRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ScenarioModeRewardId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_SCENARIOMODEREWARDID_OFFSET))(nullptr);
		}

		::FlatData::RewardTag* get_RewardTag()
		{
			return (return (::FlatData::RewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_REWARDTAG_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardProb()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_REWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_RewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_REWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_RewardParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_REWARDPARCELID_OFFSET))(nullptr);
		}

		::System::Int32 get_RewardParcelAmount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_REWARDPARCELAMOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDisplayed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_GET_ISDISPLAYED_OFFSET))(nullptr);
		}

		Il2CppObject* CreateScenarioModeRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::RewardTag* arg, ::System::Int32 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::RewardTag*, ::System::Int32, ::FlatData::ParcelType*, ::System::Int64, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_CREATESCENARIOMODEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartScenarioModeRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_STARTSCENARIOMODEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddScenarioModeRewardId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDSCENARIOMODEREWARDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardTag(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::RewardTag* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::RewardTag*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDREWARDTAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDREWARDPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRewardParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDREWARDPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDisplayed(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ADDISDISPLAYED_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndScenarioModeRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_ENDSCENARIOMODEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishScenarioModeRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_FINISHSCENARIOMODEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedScenarioModeRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SCENARIOMODEREWARDEXCEL_FINISHSIZEPREFIXEDSCENARIOMODEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

