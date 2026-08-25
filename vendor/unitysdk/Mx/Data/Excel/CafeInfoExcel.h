#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class CafeInfoExcel; }
namespace FlatData { class OpenConditionContent; }
namespace FlatData { class ParcelType; }
namespace FlatData { class ShopCategoryType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_CAFEINFOEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x19F7230)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GETROOTASCAFEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x19F7240)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GETROOTASCAFEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x19F72A0)
#define MX_DATA_EXCEL_CAFEINFOEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x19F7330)
#define MX_DATA_EXCEL_CAFEINFOEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x19F7300)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GET_CAFEID_OFFSET UNITYSDK_OFFSET(0x19F7350)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x19F73A0)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GET_OPENCONDITIONCAFEID_OFFSET UNITYSDK_OFFSET(0x19F73F0)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GET_OPENCONDITIONCAFEINVITE_OFFSET UNITYSDK_OFFSET(0x19F7440)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GET_SUMMONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19F7490)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GET_SUMMONPARCELID_OFFSET UNITYSDK_OFFSET(0x19F74E0)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GET_SUMMONPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19F7530)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GET_CATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x19F7580)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GET_SUMMONTICKETICONPATH_OFFSET UNITYSDK_OFFSET(0x19F75D0)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_GETSUMMONTICKETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x19F7610)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_CREATECAFEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x19F7630)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_STARTCAFEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x19F79D0)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_ADDCAFEID_OFFSET UNITYSDK_OFFSET(0x19F7830)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_ADDISDEFAULT_OFFSET UNITYSDK_OFFSET(0x19F7950)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_ADDOPENCONDITIONCAFEID_OFFSET UNITYSDK_OFFSET(0x19F7920)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_ADDOPENCONDITIONCAFEINVITE_OFFSET UNITYSDK_OFFSET(0x19F78F0)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_ADDSUMMONPARCELTYPE_OFFSET UNITYSDK_OFFSET(0x19F78C0)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_ADDSUMMONPARCELID_OFFSET UNITYSDK_OFFSET(0x19F7800)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_ADDSUMMONPARCELAMOUNT_OFFSET UNITYSDK_OFFSET(0x19F77D0)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_ADDCATEGORYTYPE_OFFSET UNITYSDK_OFFSET(0x19F7890)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_ADDSUMMONTICKETICONPATH_OFFSET UNITYSDK_OFFSET(0x19F7860)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_ENDCAFEINFOEXCEL_OFFSET UNITYSDK_OFFSET(0x19F7980)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_FINISHCAFEINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F79F0)
#define MX_DATA_EXCEL_CAFEINFOEXCEL_FINISHSIZEPREFIXEDCAFEINFOEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x19F7A10)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int CafeInfoExcel_TypeDefinitionIndex = 16833;

	class CafeInfoExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::CafeInfoExcel* GetRootAsCafeInfoExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CafeInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GETROOTASCAFEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CafeInfoExcel* GetRootAsCafeInfoExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::CafeInfoExcel* arg)
		{
			return (return (::MX::Data::Excel::CafeInfoExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::CafeInfoExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GETROOTASCAFEINFOEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::CafeInfoExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::CafeInfoExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_CafeId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GET_CAFEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GET_ISDEFAULT_OFFSET))(nullptr);
		}

		::FlatData::OpenConditionContent* get_OpenConditionCafeId()
		{
			return (return (::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GET_OPENCONDITIONCAFEID_OFFSET))(nullptr);
		}

		::FlatData::OpenConditionContent* get_OpenConditionCafeInvite()
		{
			return (return (::FlatData::OpenConditionContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GET_OPENCONDITIONCAFEINVITE_OFFSET))(nullptr);
		}

		::FlatData::ParcelType* get_SummonParcelType()
		{
			return (return (::FlatData::ParcelType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GET_SUMMONPARCELTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_SummonParcelId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GET_SUMMONPARCELID_OFFSET))(nullptr);
		}

		::System::Int64 get_SummonParcelAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GET_SUMMONPARCELAMOUNT_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_CategoryType()
		{
			return (return (::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GET_CATEGORYTYPE_OFFSET))(nullptr);
		}

		::System::String* get_SummonTicketIconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GET_SUMMONTICKETICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetSummonTicketIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_GETSUMMONTICKETICONPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCafeInfoExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Boolean arg, ::FlatData::OpenConditionContent* arg, ::FlatData::OpenConditionContent* arg, ::FlatData::ParcelType* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatData::ShopCategoryType* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Boolean, ::FlatData::OpenConditionContent*, ::FlatData::OpenConditionContent*, ::FlatData::ParcelType*, ::System::Int64, ::System::Int64, ::FlatData::ShopCategoryType*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_CREATECAFEINFOEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartCafeInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_STARTCAFEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddCafeId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_ADDCAFEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsDefault(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_ADDISDEFAULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenConditionCafeId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::OpenConditionContent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_ADDOPENCONDITIONCAFEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddOpenConditionCafeInvite(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::OpenConditionContent* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::OpenConditionContent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_ADDOPENCONDITIONCAFEINVITE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSummonParcelType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ParcelType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ParcelType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_ADDSUMMONPARCELTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSummonParcelId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_ADDSUMMONPARCELID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSummonParcelAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_ADDSUMMONPARCELAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddCategoryType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_ADDCATEGORYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddSummonTicketIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_ADDSUMMONTICKETICONPATH_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndCafeInfoExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_ENDCAFEINFOEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishCafeInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_FINISHCAFEINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedCafeInfoExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_CAFEINFOEXCEL_FINISHSIZEPREFIXEDCAFEINFOEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

