#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentBoxGachaShopExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class VectorOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A95E40)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GETROOTASEVENTCONTENTBOXGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A95E50)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GETROOTASEVENTCONTENTBOXGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A95EB0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1A95F40)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1A95F10)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A95F60)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A95FB0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_GROUPELEMENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A96000)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1A96050)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_ISLEGACY_OFFSET UNITYSDK_OFFSET(0x1A960A0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_ISPRIZE_OFFSET UNITYSDK_OFFSET(0x1A960F0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GOODSID_OFFSET UNITYSDK_OFFSET(0x1A96140)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_GOODSIDLENGTH_OFFSET UNITYSDK_OFFSET(0x1A961A0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GETGOODSIDBYTES_OFFSET UNITYSDK_OFFSET(0x1A961E0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A96200)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_CREATEEVENTCONTENTBOXGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A96250)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_STARTEVENTCONTENTBOXGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A965A0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1A96490)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0x1A96460)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDGROUPELEMENTAMOUNT_OFFSET UNITYSDK_OFFSET(0x1A96430)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDROUND_OFFSET UNITYSDK_OFFSET(0x1A96400)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDISLEGACY_OFFSET UNITYSDK_OFFSET(0x1A96520)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDISPRIZE_OFFSET UNITYSDK_OFFSET(0x1A964F0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDGOODSID_OFFSET UNITYSDK_OFFSET(0x1A964C0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_CREATEGOODSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A965C0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_STARTGOODSIDVECTOR_OFFSET UNITYSDK_OFFSET(0x1A96650)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1A963D0)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ENDEVENTCONTENTBOXGACHASHOPEXCEL_OFFSET UNITYSDK_OFFSET(0x1A96550)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_FINISHEVENTCONTENTBOXGACHASHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A96690)
#define MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTBOXGACHASHOPEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1A966B0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentBoxGachaShopExcel_TypeDefinitionIndex = 17482;

	class EventContentBoxGachaShopExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentBoxGachaShopExcel* GetRootAsEventContentBoxGachaShopExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentBoxGachaShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GETROOTASEVENTCONTENTBOXGACHASHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentBoxGachaShopExcel* GetRootAsEventContentBoxGachaShopExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentBoxGachaShopExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentBoxGachaShopExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentBoxGachaShopExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GETROOTASEVENTCONTENTBOXGACHASHOPEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentBoxGachaShopExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentBoxGachaShopExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupElementAmount()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_GROUPELEMENTAMOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_Round()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLegacy()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_ISLEGACY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPrize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_ISPRIZE_OFFSET))(nullptr);
		}

		::System::Int64 GoodsId(::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GOODSID_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_GoodsIdLength()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_GOODSIDLENGTH_OFFSET))(nullptr);
		}

		Il2CppObject* GetGoodsIdBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GETGOODSIDBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_DisplayOrder()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentBoxGachaShopExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Int64 arg, ::System::Boolean arg, ::System::Boolean arg, ::FlatBuffers::VectorOffset* arg, ::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Boolean, ::System::Boolean, ::FlatBuffers::VectorOffset*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_CREATEEVENTCONTENTBOXGACHASHOPEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentBoxGachaShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_STARTEVENTCONTENTBOXGACHASHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDGROUPID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGroupElementAmount(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDGROUPELEMENTAMOUNT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDROUND_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsLegacy(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDISLEGACY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsPrize(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDISPRIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddGoodsId(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::VectorOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::VectorOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDGOODSID_OFFSET))(arg, arg, nullptr);
		}

		::FlatBuffers::VectorOffset* CreateGoodsIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::FlatBuffers::VectorOffset*(*)(::FlatBuffers::FlatBufferBuilder*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_CREATEGOODSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void StartGoodsIdVector(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_STARTGOODSIDVECTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentBoxGachaShopExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_ENDEVENTCONTENTBOXGACHASHOPEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentBoxGachaShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_FINISHEVENTCONTENTBOXGACHASHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentBoxGachaShopExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTBOXGACHASHOPEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTBOXGACHASHOPEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

