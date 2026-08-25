#pragma once
#include "../unitysdk.h"

namespace FlatBuffers { class Table; }
namespace FlatBuffers { class ByteBuffer; }
namespace FlatData { class EventContentBoxGachaElementExcel; }
namespace FlatBuffers { class FlatBufferBuilder; }

#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_BYTEBUFFER_OFFSET UNITYSDK_OFFSET(0xD34A00)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GETROOTASEVENTCONTENTBOXGACHAELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD34A10)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GETROOTASEVENTCONTENTBOXGACHAELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD34A70)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL___INIT_OFFSET UNITYSDK_OFFSET(0xD34AD0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL___ASSIGN_OFFSET UNITYSDK_OFFSET(0xD34720)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD34AF0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD34B40)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD34BC0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_ID_OFFSET UNITYSDK_OFFSET(0xD34C10)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_ROUND_OFFSET UNITYSDK_OFFSET(0xD34C90)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_ROUND_OFFSET UNITYSDK_OFFSET(0xD34CE0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD34D60)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xD34DB0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_CREATEEVENTCONTENTBOXGACHAELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD34E30)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_STARTEVENTCONTENTBOXGACHAELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD35020)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_ADDEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0xD34FA0)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_ADDID_OFFSET UNITYSDK_OFFSET(0xD34F70)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_ADDROUND_OFFSET UNITYSDK_OFFSET(0xD34F40)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_ADDGROUPID_OFFSET UNITYSDK_OFFSET(0xD34F10)
#define FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_ENDEVENTCONTENTBOXGACHAELEMENTEXCEL_OFFSET UNITYSDK_OFFSET(0xD34FD0)

namespace FlatData
{
	inline static constexpr unsigned int EventContentBoxGachaElementExcel_TypeDefinitionIndex = 9255;

	class EventContentBoxGachaElementExcel : public Il2CppObject
	{
	public:
		::FlatBuffers::Table* __p; // 0x10
		::Il2CppArray<::System::Object*>* TableKey; // 0x0

		::FlatBuffers::ByteBuffer* get_ByteBuffer()
		{
			return ((::FlatBuffers::ByteBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_BYTEBUFFER_OFFSET))(nullptr);
		}

		::FlatData::EventContentBoxGachaElementExcel* GetRootAsEventContentBoxGachaElementExcel(::FlatBuffers::ByteBuffer* arg)
		{
			return ((::FlatData::EventContentBoxGachaElementExcel*(*)(::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GETROOTASEVENTCONTENTBOXGACHAELEMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::FlatData::EventContentBoxGachaElementExcel* GetRootAsEventContentBoxGachaElementExcel(::FlatBuffers::ByteBuffer* arg, ::FlatData::EventContentBoxGachaElementExcel* arg2)
		{
			return ((::FlatData::EventContentBoxGachaElementExcel*(*)(::FlatBuffers::ByteBuffer*, ::FlatData::EventContentBoxGachaElementExcel*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GETROOTASEVENTCONTENTBOXGACHAELEMENTEXCEL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void __init(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			((::System::Void(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL___INIT_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::EventContentBoxGachaElementExcel* __assign(::System::Int32 arg, ::FlatBuffers::ByteBuffer* arg2)
		{
			return ((::FlatData::EventContentBoxGachaElementExcel*(*)(::System::Int32, ::FlatBuffers::ByteBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL___ASSIGN_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_eventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_Id()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_ID_OFFSET))(nullptr);
		}

		::System::Int64 get_round()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Int64 get_Round()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Int64 get_groupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		::System::Int64 get_GroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_GET_GROUPID_OFFSET))(nullptr);
		}

		Il2CppObject* CreateEventContentBoxGachaElementExcel(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::Int64 arg4, ::System::Int64 arg5)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_CREATEEVENTCONTENTBOXGACHAELEMENTEXCEL_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void StartEventContentBoxGachaElementExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_STARTEVENTCONTENTBOXGACHAELEMENTEXCEL_OFFSET))(arg, nullptr);
		}

		::System::Void AddEventContentId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_ADDEVENTCONTENTID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_ADDID_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddRound(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_ADDROUND_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddGroupId(::FlatBuffers::FlatBufferBuilder* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::FlatBuffers::FlatBufferBuilder*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_ADDGROUPID_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* EndEventContentBoxGachaElementExcel(::FlatBuffers::FlatBufferBuilder* arg)
		{
			return ((Il2CppObject*(*)(::FlatBuffers::FlatBufferBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + FLATDATA_EVENTCONTENTBOXGACHAELEMENTEXCEL_ENDEVENTCONTENTBOXGACHAELEMENTEXCEL_OFFSET))(arg, nullptr);
		}

	};
}

