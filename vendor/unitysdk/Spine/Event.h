#pragma once
#include "../unitysdk.h"

namespace Spine { class EventData; }

#define SPINE_EVENT_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0x95AC190)
#define SPINE_EVENT_GET_FLOAT_OFFSET UNITYSDK_OFFSET(0x95AC1A0)
#define SPINE_EVENT_SET_STRING_OFFSET UNITYSDK_OFFSET(0x95AC1B0)
#define SPINE_EVENT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x95AC1C0)
#define SPINE_EVENT_SET_INT_OFFSET UNITYSDK_OFFSET(0x95AC1D0)
#define SPINE_EVENT_GET_BALANCE_OFFSET UNITYSDK_OFFSET(0x95AC1E0)
#define SPINE_EVENT_SET_FLOAT_OFFSET UNITYSDK_OFFSET(0x95AC1F0)
#define SPINE_EVENT_GET_STRING_OFFSET UNITYSDK_OFFSET(0x95AC200)
#define SPINE_EVENT_GET_DATA_OFFSET UNITYSDK_OFFSET(0x95AC210)
#define SPINE_EVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x95AC220)
#define SPINE_EVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x95AC240)
#define SPINE_EVENT_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0x95AC2F0)
#define SPINE_EVENT_SET_BALANCE_OFFSET UNITYSDK_OFFSET(0x95AC300)
#define SPINE_EVENT_GET_INT_OFFSET UNITYSDK_OFFSET(0x95AC310)

namespace Spine
{
	inline static constexpr unsigned int Event_TypeDefinitionIndex = 35034;

	class Event : public Il2CppObject
	{
	public:
		::Spine::EventData* data; // 0x10
		::System::Single time; // 0x18
		::System::Int32 intValue; // 0x1C
		::System::Single floatValue; // 0x20
		::System::String* stringValue; // 0x28
		::System::Single volume; // 0x30
		::System::Single balance; // 0x34

		::System::Single get_Volume()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_VOLUME_OFFSET))(nullptr);
		}

		::System::Single get_Float()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_FLOAT_OFFSET))(nullptr);
		}

		::System::Void set_String(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_STRING_OFFSET))(str, nullptr);
		}

		::System::Single get_Time()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_TIME_OFFSET))(nullptr);
		}

		::System::Void set_Int(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_INT_OFFSET))(arg, nullptr);
		}

		::System::Single get_Balance()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_BALANCE_OFFSET))(nullptr);
		}

		::System::Void set_Float(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_FLOAT_OFFSET))(arg, nullptr);
		}

		::System::String* get_String()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_STRING_OFFSET))(nullptr);
		}

		::Spine::EventData* get_Data()
		{
			return (return (::Spine::EventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_DATA_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Single arg, ::Spine::EventData* arg)
		{
			((::System::Void(*)(::System::Single, ::Spine::EventData*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void set_Volume(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_VOLUME_OFFSET))(arg, nullptr);
		}

		::System::Void set_Balance(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_SET_BALANCE_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Int()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENT_GET_INT_OFFSET))(nullptr);
		}

	};
}

