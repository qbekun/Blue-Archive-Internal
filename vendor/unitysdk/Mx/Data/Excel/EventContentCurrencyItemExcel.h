#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentCurrencyItemExcel; }
namespace FlatData { class EventContentItemType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB9340)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GETROOTASEVENTCONTENTCURRENCYITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB9350)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GETROOTASEVENTCONTENTCURRENCYITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB93B0)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AB9440)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AB9410)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB9460)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GET_EVENTCONTENTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1AB94B0)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GET_ITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB9500)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GET_USESHORTCUTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AB9550)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GETUSESHORTCUTCONTENTTYPEBYTES_OFFSET UNITYSDK_OFFSET(0x1AB9590)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_CREATEEVENTCONTENTCURRENCYITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB95B0)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_STARTEVENTCONTENTCURRENCYITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB97A0)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AB96C0)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_ADDEVENTCONTENTITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1AB9720)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_ADDITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1AB9690)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_ADDUSESHORTCUTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AB96F0)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_ENDEVENTCONTENTCURRENCYITEMEXCEL_OFFSET UNITYSDK_OFFSET(0x1AB9750)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_FINISHEVENTCONTENTCURRENCYITEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB97C0)
#define MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCURRENCYITEMEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AB97E0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentCurrencyItemExcel_TypeDefinitionIndex = 17644;

	class EventContentCurrencyItemExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentCurrencyItemExcel* GetRootAsEventContentCurrencyItemExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCurrencyItemExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GETROOTASEVENTCONTENTCURRENCYITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentCurrencyItemExcel* GetRootAsEventContentCurrencyItemExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentCurrencyItemExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentCurrencyItemExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentCurrencyItemExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GETROOTASEVENTCONTENTCURRENCYITEMEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentCurrencyItemExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentCurrencyItemExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::EventContentItemType* get_EventContentItemType()
		{
			return (return (::FlatData::EventContentItemType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GET_EVENTCONTENTITEMTYPE_OFFSET))(nullptr);
		}

		::System::Int64 get_ItemUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GET_ITEMUNIQUEID_OFFSET))(nullptr);
		}

		::System::String* get_UseShortCutContentType()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GET_USESHORTCUTCONTENTTYPE_OFFSET))(nullptr);
		}

		Il2CppObject* GetUseShortCutContentTypeBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_GETUSESHORTCUTCONTENTTYPEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentCurrencyItemExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EventContentItemType* arg, ::System::Int64 arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EventContentItemType*, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_CREATEEVENTCONTENTCURRENCYITEMEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentCurrencyItemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_STARTEVENTCONTENTCURRENCYITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentItemType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentItemType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentItemType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_ADDEVENTCONTENTITEMTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddItemUniqueId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_ADDITEMUNIQUEID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddUseShortCutContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_ADDUSESHORTCUTCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentCurrencyItemExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_ENDEVENTCONTENTCURRENCYITEMEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentCurrencyItemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_FINISHEVENTCONTENTCURRENCYITEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentCurrencyItemExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTCURRENCYITEMEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTCURRENCYITEMEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

