#pragma once
#include "../../../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace MX::Data::Excel { class EventContentLobbyMenuExcel; }
namespace FlatData { class EventContentType; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE4560)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GETROOTASEVENTCONTENTLOBBYMENUEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE4570)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GETROOTASEVENTCONTENTLOBBYMENUEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE45D0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0x1AE4660)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0x1AE4630)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE4680)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_EVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE46D0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_ICONSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1AE4720)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GETICONSPRITENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AE4760)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_BUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1AE4780)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GETBUTTONTEXTBYTES_OFFSET UNITYSDK_OFFSET(0x1AE47C0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_DISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1AE47E0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_ICONOFFSETX_OFFSET UNITYSDK_OFFSET(0x1AE4830)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_ICONOFFSETY_OFFSET UNITYSDK_OFFSET(0x1AE4880)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_REDDOTSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1AE48D0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GETREDDOTSPRITENAMEBYTES_OFFSET UNITYSDK_OFFSET(0x1AE4910)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_CREATEEVENTCONTENTLOBBYMENUEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE4930)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_STARTEVENTCONTENTLOBBYMENUEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE4C90)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1AE4AC0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDEVENTCONTENTTYPE_OFFSET UNITYSDK_OFFSET(0x1AE4C10)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDICONSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1AE4BE0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1AE4BB0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x1AE4B80)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDICONOFFSETX_OFFSET UNITYSDK_OFFSET(0x1AE4B50)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDICONOFFSETY_OFFSET UNITYSDK_OFFSET(0x1AE4B20)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDREDDOTSPRITENAME_OFFSET UNITYSDK_OFFSET(0x1AE4AF0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ENDEVENTCONTENTLOBBYMENUEXCEL_OFFSET UNITYSDK_OFFSET(0x1AE4C40)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_FINISHEVENTCONTENTLOBBYMENUEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE4CB0)
#define MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTLOBBYMENUEXCELBUFFER_OFFSET UNITYSDK_OFFSET(0x1AE4CD0)

namespace MX::Data::Excel
{
	inline static constexpr unsigned int EventContentLobbyMenuExcel_TypeDefinitionIndex = 17720;

	class EventContentLobbyMenuExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return (return (::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::MX::Data::Excel::EventContentLobbyMenuExcel* GetRootAsEventContentLobbyMenuExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentLobbyMenuExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GETROOTASEVENTCONTENTLOBBYMENUEXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::EventContentLobbyMenuExcel* GetRootAsEventContentLobbyMenuExcel(::FlatBuffers::ByteBuffer* arg, ::MX::Data::Excel::EventContentLobbyMenuExcel* arg)
		{
			return (return (::MX::Data::Excel::EventContentLobbyMenuExcel*(*)(::FlatBuffers::ByteBuffer*, ::MX::Data::Excel::EventContentLobbyMenuExcel*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GETROOTASEVENTCONTENTLOBBYMENUEXCEL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL___INIT_OFFSET))(arg, arg, nullptr);
		}

		::MX::Data::Excel::EventContentLobbyMenuExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg)
		{
			return (return (::MX::Data::Excel::EventContentLobbyMenuExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL___ASSIGN_OFFSET))(arg, arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::FlatData::EventContentType* get_EventContentType()
		{
			return (return (::FlatData::EventContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_EVENTCONTENTTYPE_OFFSET))(nullptr);
		}

		::System::String* get_IconSpriteName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_ICONSPRITENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetIconSpriteNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GETICONSPRITENAMEBYTES_OFFSET))(nullptr);
		}

		::System::String* get_ButtonText()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_BUTTONTEXT_OFFSET))(nullptr);
		}

		Il2CppObject* GetButtonTextBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GETBUTTONTEXTBYTES_OFFSET))(nullptr);
		}

		::System::Int32 get_DisplayOrder()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_DISPLAYORDER_OFFSET))(nullptr);
		}

		::System::Single get_IconOffsetX()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_ICONOFFSETX_OFFSET))(nullptr);
		}

		::System::Single get_IconOffsetY()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_ICONOFFSETY_OFFSET))(nullptr);
		}

		::System::String* get_ReddotSpriteName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GET_REDDOTSPRITENAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetReddotSpriteNameBytes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_GETREDDOTSPRITENAMEBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentLobbyMenuExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg, ::FlatData::EventContentType* arg, ::FlatBuffers::StringOffset* arg, ::FlatBuffers::StringOffset* arg, ::System::Int32 arg, ::System::Single arg, ::System::Single arg, ::FlatBuffers::StringOffset* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatData::EventContentType*, ::FlatBuffers::StringOffset*, ::FlatBuffers::StringOffset*, ::System::Int32, ::System::Single, ::System::Single, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_CREATEEVENTCONTENTLOBBYMENUEXCEL_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void StartEventContentLobbyMenuExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_STARTEVENTCONTENTLOBBYMENUEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddEventContentType(::FlatBuffers::FlatBufferBuilder* arg, ::FlatData::EventContentType* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatData::EventContentType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDEVENTCONTENTTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconSpriteName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDICONSPRITENAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddButtonText(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDBUTTONTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddDisplayOrder(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDDISPLAYORDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconOffsetX(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDICONOFFSETX_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddIconOffsetY(::FlatBuffers::FlatBufferBuilder* arg, ::System::Single arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDICONOFFSETY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddReddotSpriteName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ADDREDDOTSPRITENAME_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* EndEventContentLobbyMenuExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return (return (Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_ENDEVENTCONTENTLOBBYMENUEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void FinishEventContentLobbyMenuExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_FINISHEVENTCONTENTLOBBYMENUEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishSizePrefixedEventContentLobbyMenuExcelBuffer(::FlatBuffers::FlatBufferBuilder* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_EXCEL_EVENTCONTENTLOBBYMENUEXCEL_FINISHSIZEPREFIXEDEVENTCONTENTLOBBYMENUEXCELBUFFER_OFFSET))(arg, arg, nullptr);
		}

	};
}

