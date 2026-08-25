#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class RaidStageRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4B6F0)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GETROOTASRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4B700)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GETROOTASRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4B760)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C4B7F0)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C4B7C0)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C4B810)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_ISCLEARSTAGEREWARDHIDEINFO_OFFSET UNITYSDK_OFFSET(0x1C4B860)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1C4B8B0)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C4B900)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C4B950)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C4B9A0)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_CREATERAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4B9F0)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_STARTRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4BC90)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1C4BBB0)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDISCLEARSTAGEREWARDHIDEINFO_OFFSET UNITYSDK_OFFSET(0x1C4BC10)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1C4BB80)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1C4BBE0)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1C4BB50)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1C4BB20)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ENDRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1C4BC40)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_FINISHRAIDSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4BCB0)
#define MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDRAIDSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C4BCD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int RaidStageRewardExcel_TypeDefinitionIndex = 19189;

	class RaidStageRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::RaidStageRewardExcel* GetRootAsRaidStageRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GETROOTASRAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::RaidStageRewardExcel* GetRootAsRaidStageRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::RaidStageRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::RaidStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::RaidStageRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GETROOTASRAIDSTAGEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::RaidStageRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::RaidStageRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClearStageRewardHideInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_ISCLEARSTAGEREWARDHIDEINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ClearStageRewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardParcelUniqueID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_CREATERAIDSTAGEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_STARTRAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsClearStageRewardHideInfo(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDISCLEARSTAGEREWARDHIDEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardParcelUniqueID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_ENDRAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishRaidStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_FINISHRAIDSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedRaidStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_RAIDSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDRAIDSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

