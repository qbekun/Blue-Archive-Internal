#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class GachaCombinedCostExcel; }
namespace FlatData { class GachaTicketType; }
namespace FlatData { class ParcelType; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1B30060)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GETROOTASGACHACOMBINEDCOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B30070)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GETROOTASGACHACOMBINEDCOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B300D0)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1B30160)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1B30130)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1B30180)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1B301D0)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_CONSUMEGACHATICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1B30220)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_CONSUMEGACHATICKETTYPEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B30270)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_CONSUMEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B302C0)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_CONSUMEPARCELID_OFFSET UNITYSDK_OFFSET(0x1B30310)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_CONSUMEPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B30360)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_CREATEGACHACOMBINEDCOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B303B0)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_STARTGACHACOMBINEDCOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B306A0)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1B305C0)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B30590)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDCONSUMEGACHATICKETTYPE_OFFSET UNITYSDK_OFFSET(0x1B30620)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDCONSUMEGACHATICKETTYPEAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B30560)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDCONSUMEPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x1B305F0)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDCONSUMEPARCELID_OFFSET UNITYSDK_OFFSET(0x1B30530)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDCONSUMEPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x1B30500)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ENDGACHACOMBINEDCOSTEXCEL_OFFSET UNITYSDK_OFFSET(0x1B30650)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_FINISHGACHACOMBINEDCOSTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B306C0)
#define MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_FINISHSIZEPREFIXEDGACHACOMBINEDCOSTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1B306E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int GachaCombinedCostExcel_TypeDefinitionIndex = 18045;

	class GachaCombinedCostExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::GachaCombinedCostExcel* GetRootAsGachaCombinedCostExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaCombinedCostExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GETROOTASGACHACOMBINEDCOSTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::GachaCombinedCostExcel* GetRootAsGachaCombinedCostExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::GachaCombinedCostExcel* arg)
		{
			return (return (::MX::Data::Excel::GachaCombinedCostExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::GachaCombinedCostExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GETROOTASGACHACOMBINEDCOSTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::GachaCombinedCostExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::GachaCombinedCostExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_Priority()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_PRIORITY_OFFSET))(nullptr);
		}

		::FlatData::GachaTicketType* get_ConsumeGachaTicketType()
		{
			return (return (::FlatData::GachaTicketType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_CONSUMEGACHATICKETTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConsumeGachaTicketTypeAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_CONSUMEGACHATICKETTYPEAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_ConsumeParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_CONSUMEPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ConsumeParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_CONSUMEPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_ConsumeParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_GET_CONSUMEPARCELAMOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateGachaCombinedCostExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::GachaTicketType* arg, ::System::Int64 arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatData::GachaTicketType*, ::System::Int64, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_CREATEGACHACOMBINEDCOSTEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartGachaCombinedCostExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_STARTGACHACOMBINEDCOSTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddPriority(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDPRIORITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeGachaTicketType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::GachaTicketType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::GachaTicketType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDCONSUMEGACHATICKETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeGachaTicketTypeAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDCONSUMEGACHATICKETTYPEAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDCONSUMEPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDCONSUMEPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddConsumeParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ADDCONSUMEPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndGachaCombinedCostExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_ENDGACHACOMBINEDCOSTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishGachaCombinedCostExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_FINISHGACHACOMBINEDCOSTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedGachaCombinedCostExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_GACHACOMBINEDCOSTEXCEL_FINISHSIZEPREFIXEDGACHACOMBINEDCOSTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

