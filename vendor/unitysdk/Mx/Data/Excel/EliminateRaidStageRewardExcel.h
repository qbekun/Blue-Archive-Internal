#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EliminateRaidStageRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A87700)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GETROOTASELIMINATERAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A87710)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GETROOTASELIMINATERAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A87770)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A87800)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A877D0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A87820)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_ISCLEARSTAGEREWARDHIDEINFO_OFFSET UNITYSDK_OFFSET(0x1A87870)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1A878C0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A87910)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A87960)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A879B0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_CREATEELIMINATERAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A87A00)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_STARTELIMINATERAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A87CA0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A87BC0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDISCLEARSTAGEREWARDHIDEINFO_OFFSET UNITYSDK_OFFSET(0x1A87C20)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1A87B90)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1A87BF0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1A87B60)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A87B30)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ENDELIMINATERAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1A87C50)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_FINISHELIMINATERAIDSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A87CC0)
#define MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A87CE0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EliminateRaidStageRewardExcel_TypeDefinitionIndex = 17413;

	class EliminateRaidStageRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageRewardExcel* GetRootAsEliminateRaidStageRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GETROOTASELIMINATERAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageRewardExcel* GetRootAsEliminateRaidStageRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EliminateRaidStageRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EliminateRaidStageRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GETROOTASELIMINATERAIDSTAGEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EliminateRaidStageRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EliminateRaidStageRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClearStageRewardHideInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_ISCLEARSTAGEREWARDHIDEINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ClearStageRewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardParcelUniqueID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEliminateRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_CREATEELIMINATERAIDSTAGEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEliminateRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_STARTELIMINATERAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsClearStageRewardHideInfo(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDISCLEARSTAGEREWARDHIDEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardParcelUniqueID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEliminateRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_ENDELIMINATERAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEliminateRaidStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_FINISHELIMINATERAIDSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEliminateRaidStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_ELIMINATERAIDSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDELIMINATERAIDSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

