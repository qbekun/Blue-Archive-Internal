#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Timings { class TimingEvent; }

#define BESTHTTP_TIMINGS_TIMINGCOLLECTOR_GET_START_OFFSET UNITYSDK_OFFSET(0x4F6290)
#define BESTHTTP_TIMINGS_TIMINGCOLLECTOR_SET_START_OFFSET UNITYSDK_OFFSET(0x4F62A0)
#define BESTHTTP_TIMINGS_TIMINGCOLLECTOR_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x4F62B0)
#define BESTHTTP_TIMINGS_TIMINGCOLLECTOR_SET_EVENTS_OFFSET UNITYSDK_OFFSET(0x4F62C0)
#define BESTHTTP_TIMINGS_TIMINGCOLLECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F62D0)
#define BESTHTTP_TIMINGS_TIMINGCOLLECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x4F6330)
#define BESTHTTP_TIMINGS_TIMINGCOLLECTOR_ADD_OFFSET UNITYSDK_OFFSET(0x4F65C0)
#define BESTHTTP_TIMINGS_TIMINGCOLLECTOR_FINDFIRST_OFFSET UNITYSDK_OFFSET(0x4F6770)
#define BESTHTTP_TIMINGS_TIMINGCOLLECTOR_FINDLAST_OFFSET UNITYSDK_OFFSET(0x4F6870)
#define BESTHTTP_TIMINGS_TIMINGCOLLECTOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4F6970)

namespace BestHTTP::Timings
{
	inline static constexpr unsigned int TimingCollector_TypeDefinitionIndex = 21339;

	class TimingCollector : public Il2CppObject
	{
	public:
		::System::DateTime* _Start_k__BackingField; // 0x10
		Il2CppObject* _Events_k__BackingField; // 0x18

		::System::DateTime* get_Start()
		{
			return (return (::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGCOLLECTOR_GET_START_OFFSET))(nullptr);
		}

		::System::Void set_Start(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGCOLLECTOR_SET_START_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Events()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGCOLLECTOR_GET_EVENTS_OFFSET))(nullptr);
		}

		::System::Void set_Events(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGCOLLECTOR_SET_EVENTS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGCOLLECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Add(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGCOLLECTOR_ADD_OFFSET))(str, nullptr);
		}

		::System::Void Add(::System::String* str, ::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::String*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGCOLLECTOR_ADD_OFFSET))(str, arg, nullptr);
		}

		::BestHTTP::Timings::TimingEvent* FindFirst(::System::String* str)
		{
			return (return (::BestHTTP::Timings::TimingEvent*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGCOLLECTOR_FINDFIRST_OFFSET))(str, nullptr);
		}

		::BestHTTP::Timings::TimingEvent* FindLast(::System::String* str)
		{
			return (return (::BestHTTP::Timings::TimingEvent*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGCOLLECTOR_FINDLAST_OFFSET))(str, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGCOLLECTOR_TOSTRING_OFFSET))(nullptr);
		}

	};
}

