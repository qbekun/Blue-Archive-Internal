#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentNotifyExcel; }
namespace FlatData { class EventNotifyType; }
namespace FlatData { class EventTargetType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF46A0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GETROOTASEVENTCONTENTNOTIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF46B0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GETROOTASEVENTCONTENTNOTIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF4710)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AF47A0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AF4770)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AF47C0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_LOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AF4810)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1AF4860)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GETICONPATHBYTES_OFFSET UNITYSDK_OFFSET(0x1AF48A0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_EVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x1AF48C0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_EVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1AF4910)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_SHORTCUTEVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1AF4960)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_ISSHORTCUTENABLE_OFFSET UNITYSDK_OFFSET(0x1AF49B0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_CREATEEVENTCONTENTNOTIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF4A00)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_STARTEVENTCONTENTNOTIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF4CF0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0x1AF4C40)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDLOCALIZEETCID_OFFSET UNITYSDK_OFFSET(0x1AF4C10)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDICONPATH_OFFSET UNITYSDK_OFFSET(0x1AF4BE0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDEVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0x1AF4BB0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDEVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1AF4B80)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDSHORTCUTEVENTTARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1AF4B50)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDISSHORTCUTENABLE_OFFSET UNITYSDK_OFFSET(0x1AF4C70)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ENDEVENTCONTENTNOTIFYEXCEL_OFFSET UNITYSDK_OFFSET(0x1AF4CA0)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_FINISHEVENTCONTENTNOTIFYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF4D10)
#define MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTNOTIFYEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AF4D30)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentNotifyExcel_TypeDefinitionIndex = 17788;

	class EventContentNotifyExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentNotifyExcel* GetRootAsEventContentNotifyExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentNotifyExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GETROOTASEVENTCONTENTNOTIFYEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentNotifyExcel* GetRootAsEventContentNotifyExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentNotifyExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentNotifyExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentNotifyExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GETROOTASEVENTCONTENTNOTIFYEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentNotifyExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentNotifyExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::UInt32 get_LocalizeEtcId()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_LOCALIZEETCID_OFFSET))(nullptr);
		}

		::System::String* get_IconPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_ICONPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconPathBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GETICONPATHBYTES_OFFSET))(nullptr);
		}

		::FlatData::EventNotifyType* get_EventNotifyType()
		{
			return (return (::FlatData::EventNotifyType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_EVENTNOTIFYTYPE_OFFSET))(nullptr);
		}

		::FlatData::EventTargetType* get_EventTargetType()
		{
			return (return (::FlatData::EventTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_EVENTTARGETTYPE_OFFSET))(nullptr);
		}

		::FlatData::EventTargetType* get_ShortcutEventTargetType()
		{
			return (return (::FlatData::EventTargetType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_SHORTCUTEVENTTARGETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsShortcutEnable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_GET_ISSHORTCUTENABLE_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentNotifyExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg, ::System::UInt32 arg, ::FlatBuffers::StringOffset* arg, ::FlatData::EventNotifyType* arg, ::FlatData::EventTargetType* arg, ::FlatData::EventTargetType* arg, ::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::System::UInt32, ::FlatBuffers::StringOffset*, ::FlatData::EventNotifyType*, ::FlatData::EventTargetType*, ::FlatData::EventTargetType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_CREATEEVENTCONTENTNOTIFYEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentNotifyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_STARTEVENTCONTENTNOTIFYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLocalizeEtcId(::FlatBuffers::FlatBufferBuilder* arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDLOCALIZEETCID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconPath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDICONPATH_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventNotifyType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventNotifyType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventNotifyType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDEVENTNOTIFYTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventTargetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventTargetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDEVENTTARGETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddShortcutEventTargetType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventTargetType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventTargetType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDSHORTCUTEVENTTARGETTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIsShortcutEnable(::FlatBuffers::FlatBufferBuilder* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ADDISSHORTCUTENABLE_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentNotifyExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_ENDEVENTCONTENTNOTIFYEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentNotifyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_FINISHEVENTCONTENTNOTIFYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentNotifyExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTNOTIFYEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTNOTIFYEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

