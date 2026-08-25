#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class WorldRaidStageRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1CD3B50)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GETROOTASWORLDRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CD3B60)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GETROOTASWORLDRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CD3BC0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1CD3C50)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1CD3C20)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1CD3C70)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_ISCLEARSTAGEREWARDHIDEINFO_OFFSET UNITYSDK_OFFSET(0x1CD3CC0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1CD3D10)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CD3D60)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CD3DB0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CD3E00)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_CREATEWORLDRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CD3E50)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_STARTWORLDRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CD40F0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1CD4010)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDISCLEARSTAGEREWARDHIDEINFO_OFFSET UNITYSDK_OFFSET(0x1CD4070)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1CD3FE0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1CD4040)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CD3FB0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1CD3F80)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ENDWORLDRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1CD40A0)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_FINISHWORLDRAIDSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CD4110)
#define MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDWORLDRAIDSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1CD4130)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int WorldRaidStageRewardExcel_TypeDefinitionIndex = 19836;

	class WorldRaidStageRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::WorldRaidStageRewardExcel* GetRootAsWorldRaidStageRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GETROOTASWORLDRAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidStageRewardExcel* GetRootAsWorldRaidStageRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::WorldRaidStageRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::WorldRaidStageRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GETROOTASWORLDRAIDSTAGEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::WorldRaidStageRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::WorldRaidStageRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClearStageRewardHideInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_ISCLEARSTAGEREWARDHIDEINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ClearStageRewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardParcelUniqueID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateWorldRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_CREATEWORLDRAIDSTAGEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartWorldRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_STARTWORLDRAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsClearStageRewardHideInfo(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDISCLEARSTAGEREWARDHIDEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardParcelUniqueID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndWorldRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_ENDWORLDRAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishWorldRaidStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_FINISHWORLDRAIDSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedWorldRaidStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_WORLDRAIDSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDWORLDRAIDSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

