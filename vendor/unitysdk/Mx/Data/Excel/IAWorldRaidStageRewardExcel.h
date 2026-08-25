#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class IAWorldRaidStageRewardExcel; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4BE70)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GETROOTASIAWORLDRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4BE80)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GETROOTASIAWORLDRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4BEE0)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B4BF70)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B4BF40)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B4BF90)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_ISCLEARSTAGEREWARDHIDEINFO_OFFSET UNITYSDK_OFFSET(0x1B4BFE0)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1B4C030)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B4C080)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B4C0D0)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B4C120)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GETCLEARSTAGEREWARDPARCELUNIQUENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1B4C160)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B4C180)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_CREATEIAWORLDRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4C1D0)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_STARTIAWORLDRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4C4C0)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B4C3B0)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDISCLEARSTAGEREWARDHIDEINFO_OFFSET UNITYSDK_OFFSET(0x1B4C440)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPROB_OFFSET UNITYSDK_OFFSET(0x1B4C380)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B4C410)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B4C350)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1B4C3E0)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B4C320)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ENDIAWORLDRAIDSTAGEREWARDEXCEL_OFFSET UNITYSDK_OFFSET(0x1B4C470)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_FINISHIAWORLDRAIDSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4C4E0)
#define MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDIAWORLDRAIDSTAGEREWARDEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B4C500)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int IAWorldRaidStageRewardExcel_TypeDefinitionIndex = 18170;

	class IAWorldRaidStageRewardExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::IAWorldRaidStageRewardExcel* GetRootAsIAWorldRaidStageRewardExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::IAWorldRaidStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GETROOTASIAWORLDRAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::IAWorldRaidStageRewardExcel* GetRootAsIAWorldRaidStageRewardExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::IAWorldRaidStageRewardExcel* arg)
		{
			return (return (::MX::Data::Excel::IAWorldRaidStageRewardExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::IAWorldRaidStageRewardExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GETROOTASIAWORLDRAIDSTAGEREWARDEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::IAWorldRaidStageRewardExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::IAWorldRaidStageRewardExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsClearStageRewardHideInfo()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_ISCLEARSTAGEREWARDHIDEINFO_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardProb()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPROB_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ClearStageRewardParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardParcelUniqueID()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_ClearStageRewardParcelUniqueName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDPARCELUNIQUENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetClearStageRewardParcelUniqueNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GETCLEARSTAGEREWARDPARCELUNIQUENAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_ClearStageRewardAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_GET_CLEARSTAGEREWARDAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateIAWorldRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_CREATEIAWORLDRAIDSTAGEREWARDEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartIAWorldRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_STARTIAWORLDRAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsClearStageRewardHideInfo(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDISCLEARSTAGEREWARDHIDEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardProb(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPROB_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardParcelUniqueID(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardParcelUniqueName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDPARCELUNIQUENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddClearStageRewardAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ADDCLEARSTAGEREWARDAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndIAWorldRaidStageRewardExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_ENDIAWORLDRAIDSTAGEREWARDEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishIAWorldRaidStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_FINISHIAWORLDRAIDSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedIAWorldRaidStageRewardExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_IAWORLDRAIDSTAGEREWARDEXCEL_FINISHSIZEPREFIXEDIAWORLDRAIDSTAGEREWARDEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

