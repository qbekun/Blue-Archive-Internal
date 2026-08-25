#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class EventContentExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }
namespace FlatBuffers { class StringOffset; }

#define FLATDATA_EVENTCONTENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD35510)
#define FLATDATA_EVENTCONTENTEXCEL_GETROOTASEVENTCONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD35520)
#define FLATDATA_EVENTCONTENTEXCEL_GETROOTASEVENTCONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD35580)
#define FLATDATA_EVENTCONTENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD355E0)
#define FLATDATA_EVENTCONTENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD35230)
#define FLATDATA_EVENTCONTENTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD35600)
#define FLATDATA_EVENTCONTENTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD35650)
#define FLATDATA_EVENTCONTENTEXCEL_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0xD356D0)
#define FLATDATA_EVENTCONTENTEXCEL_GET_DEVNAME_OFFSET UNITYSDK_OFFSET(0xD35710)
#define FLATDATA_EVENTCONTENTEXCEL_GETDEVNAMEBYTES_OFFSET UNITYSDK_OFFSET(0xD35780)
#define FLATDATA_EVENTCONTENTEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD357A0)
#define FLATDATA_EVENTCONTENTEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD357F0)
#define FLATDATA_EVENTCONTENTEXCEL_GET_BGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD35870)
#define FLATDATA_EVENTCONTENTEXCEL_GET_BGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD358B0)
#define FLATDATA_EVENTCONTENTEXCEL_GETBGIMAGEPATHBYTES_OFFSET UNITYSDK_OFFSET(0xD35920)
#define FLATDATA_EVENTCONTENTEXCEL_CREATEEVENTCONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD35940)
#define FLATDATA_EVENTCONTENTEXCEL_STARTEVENTCONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD35B30)
#define FLATDATA_EVENTCONTENTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD35A50)
#define FLATDATA_EVENTCONTENTEXCEL_ADDDEVNAME_OFFSET UNITYSDK_OFFSET(0xD35AB0)
#define FLATDATA_EVENTCONTENTEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD35A20)
#define FLATDATA_EVENTCONTENTEXCEL_ADDBGIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xD35A80)
#define FLATDATA_EVENTCONTENTEXCEL_ENDEVENTCONTENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD35AE0)

namespace FlatData
{
	inline static constexpr unsigned int EventContentExcel_TypeDefinitionIndex = 9257;

	class EventContentExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::EventContentExcel* GetRootAsEventContentExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::EventContentExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GETROOTASEVENTCONTENTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::EventContentExcel* GetRootAsEventContentExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::EventContentExcel* arg2)
		{
			return ((::FlatData::EventContentExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::EventContentExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GETROOTASEVENTCONTENTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::EventContentExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::EventContentExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::String* get_devName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GET_DEVNAME_OFFSET))(nullptr);
		}

		::System::String* get_DevName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GET_DEVNAME_OFFSET))(nullptr);
		}

		Il2CppObject* GetDevNameBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GETDEVNAMEBYTES_OFFSET))(nullptr);
		}

		::System::Int64 get_eventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::String* get_bgImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GET_BGIMAGEPATH_OFFSET))(nullptr);
		}

		::System::String* get_BgImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GET_BGIMAGEPATH_OFFSET))(nullptr);
		}

		Il2CppObject* GetBgImagePathBytes()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_GETBGIMAGEPATHBYTES_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::FlatBuffers::StringOffset* arg3, ::System::Int64 arg4, ::FlatBuffers::StringOffset* arg5)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::FlatBuffers::StringOffset*, ::System::Int64, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_CREATEEVENTCONTENTEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void StartEventContentExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_STARTEVENTCONTENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddDevName(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_ADDDEVNAME_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddBgImagePath(::FlatBuffers::FlatBufferBuilder* arg, ::FlatBuffers::StringOffset* arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::FlatBuffers::StringOffset*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_ADDBGIMAGEPATH_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndEventContentExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTEXCEL_ENDEVENTCONTENTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

