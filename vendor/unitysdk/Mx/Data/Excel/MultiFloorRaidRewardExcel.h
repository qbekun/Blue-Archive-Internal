#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class MultiFloorRaidRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C157D0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GETROOTASMULTIFLOORRAIDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C157E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GETROOTASMULTIFLOORRAIDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C15840)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C158D0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C158A0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_REWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C158F0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_CLEARSTAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1C15940)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C15990)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C159E0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_CLEARSTAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C15A30)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_CREATEMULTIFLOORRAIDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C15A80)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_STARTMULTIFLOORRAIDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C15CD0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ADDREWARDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C15C20)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ADDCLEARSTAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1C15BF0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C15C50)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C15BC0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ADDCLEARSTAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C15B90)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ENDMULTIFLOORRAIDREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C15C80)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_FINISHMULTIFLOORRAIDREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C15CF0)
#define MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_FINISHSIZEPREFIXEDMULTIFLOORRAIDREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C15D10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int MultiFloorRaidRewardExcel_TypeDefinitionIndex = 18950;

	class MultiFloorRaidRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidRewardExcel* GetRootAsMultiFloorRaidRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GETROOTASMULTIFLOORRAIDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidRewardExcel* GetRootAsMultiFloorRaidRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::MultiFloorRaidRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::MultiFloorRaidRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GETROOTASMULTIFLOORRAIDREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::MultiFloorRaidRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::MultiFloorRaidRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_RewardGroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_REWARDGROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_CLEARSTAGEREWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ClearStageRewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardParcelUniqueID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_GET_CLEARSTAGEREWARDAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateMultiFloorRaidRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_CREATEMULTIFLOORRAIDREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartMultiFloorRaidRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_STARTMULTIFLOORRAIDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddRewardGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ADDREWARDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ADDCLEARSTAGEREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardParcelUniqueID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ADDCLEARSTAGEREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndMultiFloorRaidRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_ENDMULTIFLOORRAIDREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishMultiFloorRaidRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_FINISHMULTIFLOORRAIDREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedMultiFloorRaidRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_MULTIFLOORRAIDREWARDEXCEL_FINISHSIZEPREFIXEDMULTIFLOORRAIDREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

