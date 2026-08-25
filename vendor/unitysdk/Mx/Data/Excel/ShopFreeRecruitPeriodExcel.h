#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class ShopFreeRecruitPeriodExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1C795A0)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GETROOTASSHOPFREERECRUITPERIODEXCEL_OFFSET UNITYSDK_OFFSET(0x1C795B0)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GETROOTASSHOPFREERECRUITPERIODEXCEL_OFFSET UNITYSDK_OFFSET(0x1C79610)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1C796A0)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1C79670)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GET_SHOPFREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1C796C0)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GET_SHOPFREERECRUITINTERVALID_OFFSET UNITYSDK_OFFSET(0x1C79710)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GET_INTERVALDATE_OFFSET UNITYSDK_OFFSET(0x1C79760)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GETINTERVALDATEBYTES_OFFSET UNITYSDK_OFFSET(0x1C797A0)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GET_FREERECRUITCOUNT_OFFSET UNITYSDK_OFFSET(0x1C797C0)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_CREATESHOPFREERECRUITPERIODEXCEL_OFFSET UNITYSDK_OFFSET(0x1C79810)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_STARTSHOPFREERECRUITPERIODEXCEL_OFFSET UNITYSDK_OFFSET(0x1C79A00)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_ADDSHOPFREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1C79920)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_ADDSHOPFREERECRUITINTERVALID_OFFSET UNITYSDK_OFFSET(0x1C798F0)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_ADDINTERVALDATE_OFFSET UNITYSDK_OFFSET(0x1C79980)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_ADDFREERECRUITCOUNT_OFFSET UNITYSDK_OFFSET(0x1C79950)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_ENDSHOPFREERECRUITPERIODEXCEL_OFFSET UNITYSDK_OFFSET(0x1C799B0)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_FINISHSHOPFREERECRUITPERIODEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C79A20)
#define MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_FINISHSIZEPREFIXEDSHOPFREERECRUITPERIODEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1C79A40)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int ShopFreeRecruitPeriodExcel_TypeDefinitionIndex = 19405;

	class ShopFreeRecruitPeriodExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::ShopFreeRecruitPeriodExcel* GetRootAsShopFreeRecruitPeriodExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopFreeRecruitPeriodExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GETROOTASSHOPFREERECRUITPERIODEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::ShopFreeRecruitPeriodExcel* GetRootAsShopFreeRecruitPeriodExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::ShopFreeRecruitPeriodExcel* arg)
		{
			return (return (::MX::Data::Excel::ShopFreeRecruitPeriodExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::ShopFreeRecruitPeriodExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GETROOTASSHOPFREERECRUITPERIODEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::ShopFreeRecruitPeriodExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::ShopFreeRecruitPeriodExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_ShopFreeRecruitId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GET_SHOPFREERECRUITID_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopFreeRecruitIntervalId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GET_SHOPFREERECRUITINTERVALID_OFFSET))(nullptr);
		}

		::System::String* get_IntervalDate()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GET_INTERVALDATE_OFFSET))(nullptr);
		}

		Il2CppObject* GetIntervalDateBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GETINTERVALDATEBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_FreeRecruitCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_GET_FREERECRUITCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* CreateShopFreeRecruitPeriodExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_CREATESHOPFREERECRUITPERIODEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartShopFreeRecruitPeriodExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_STARTSHOPFREERECRUITPERIODEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddShopFreeRecruitId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_ADDSHOPFREERECRUITID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShopFreeRecruitIntervalId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_ADDSHOPFREERECRUITINTERVALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIntervalDate(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_ADDINTERVALDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddFreeRecruitCount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_ADDFREERECRUITCOUNT_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndShopFreeRecruitPeriodExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_ENDSHOPFREERECRUITPERIODEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishShopFreeRecruitPeriodExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_FINISHSHOPFREERECRUITPERIODEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedShopFreeRecruitPeriodExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_SHOPFREERECRUITPERIODEXCEL_FINISHSIZEPREFIXEDSHOPFREERECRUITPERIODEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

