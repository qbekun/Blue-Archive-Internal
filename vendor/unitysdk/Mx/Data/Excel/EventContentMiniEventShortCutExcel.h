#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentMiniEventShortCutExcel; }
namespace FlatData { class EventTargetType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEDB60)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GETROOTASEVENTCONTENTMINIEVENTSHORTCUTEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEDB70)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GETROOTASEVENTCONTENTMINIEVENTSHORTCUTEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEDBD0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AEDC60)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AEDC30)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AEDC80)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AEDCD0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GET_SHORCUTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AEDD20)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GET_SHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1AEDD70)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GETSHORTCUTUIBYTES_OFFSET UNITYSDK_OFFSET(0x1AEDDB0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_CREATEEVENTCONTENTMINIEVENTSHORTCUTEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEDDD0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_STARTEVENTCONTENTMINIEVENTSHORTCUTEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEDFC0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AEDF40)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AEDF10)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_ADDSHORCUTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AEDEE0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_ADDSHORTCUTUI_OFFSET UNITYSDK_OFFSET(0x1AEDEB0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_ENDEVENTCONTENTMINIEVENTSHORTCUTEXCEL_OFFSET UNITYSDK_OFFSET(0x1AEDF70)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_FINISHEVENTCONTENTMINIEVENTSHORTCUTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEDFE0)
#define MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTMINIEVENTSHORTCUTEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AEE000)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentMiniEventShortCutExcel_TypeDefinitionIndex = 17761;

	class EventContentMiniEventShortCutExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentMiniEventShortCutExcel* GetRootAsEventContentMiniEventShortCutExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentMiniEventShortCutExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GETROOTASEVENTCONTENTMINIEVENTSHORTCUTEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentMiniEventShortCutExcel* GetRootAsEventContentMiniEventShortCutExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentMiniEventShortCutExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentMiniEventShortCutExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentMiniEventShortCutExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GETROOTASEVENTCONTENTMINIEVENTSHORTCUTEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentMiniEventShortCutExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentMiniEventShortCutExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::FlatData::EventTargetType* get_ShorcutContentType()
		{
			return (return (::FlatData::EventTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GET_SHORCUTCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_ShortcutUI()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GET_SHORTCUTUI_OFFSET))(nullptr);
		}

		Il2CppObject* GetShortcutUIBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_GETSHORTCUTUIBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentMiniEventShortCutExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::System::UInt32 arg, ::FlatData::EventTargetType* arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::UInt32, ::FlatData::EventTargetType*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_CREATEEVENTCONTENTMINIEVENTSHORTCUTEXCEL_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentMiniEventShortCutExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_STARTEVENTCONTENTMINIEVENTSHORTCUTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShorcutContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventTargetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_ADDSHORCUTCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutUI(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_ADDSHORTCUTUI_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentMiniEventShortCutExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_ENDEVENTCONTENTMINIEVENTSHORTCUTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentMiniEventShortCutExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_FINISHEVENTCONTENTMINIEVENTSHORTCUTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentMiniEventShortCutExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTMINIEVENTSHORTCUTEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTMINIEVENTSHORTCUTEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

