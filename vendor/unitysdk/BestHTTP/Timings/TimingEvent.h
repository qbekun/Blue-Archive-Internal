#pragma once
#include "../../unitysdk.h"

namespace BestHTTP::Timings { class TimingEvent; }

#define BESTHTTP_TIMINGS_TIMINGEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x4F6550)
#define BESTHTTP_TIMINGS_TIMINGEVENT_CALCULATEDURATION_OFFSET UNITYSDK_OFFSET(0x4F6CB0)
#define BESTHTTP_TIMINGS_TIMINGEVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x4F6D70)
#define BESTHTTP_TIMINGS_TIMINGEVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x4F6E30)
#define BESTHTTP_TIMINGS_TIMINGEVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x4F6ED0)
#define BESTHTTP_TIMINGS_TIMINGEVENT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x4F6F90)
#define BESTHTTP_TIMINGS_TIMINGEVENT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x4F7000)
#define BESTHTTP_TIMINGS_TIMINGEVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4F6C40)
#define BESTHTTP_TIMINGS_TIMINGEVENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4F7070)

namespace BestHTTP::Timings
{
	inline static constexpr unsigned int TimingEvent_TypeDefinitionIndex = 21340;

	class TimingEvent : public Il2CppObject
	{
	public:
		::BestHTTP::Timings::TimingEvent* Empty; // 0x0
		::System::String* Name; // 0x10
		::System::TimeSpan* Duration; // 0x18
		::System::DateTime* When; // 0x20

		::System::Void .ctor(::System::String* str, ::System::TimeSpan* arg)
		{
			((::System::Void(*)(::System::String*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGEVENT_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::TimeSpan* CalculateDuration(::BestHTTP::Timings::TimingEvent* arg)
		{
			return (return (::System::TimeSpan*(*)(::BestHTTP::Timings::TimingEvent*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGEVENT_CALCULATEDURATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::BestHTTP::Timings::TimingEvent* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::Timings::TimingEvent*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGEVENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGEVENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGEVENT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::BestHTTP::Timings::TimingEvent* arg, ::BestHTTP::Timings::TimingEvent* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::Timings::TimingEvent*, ::BestHTTP::Timings::TimingEvent*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGEVENT_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::BestHTTP::Timings::TimingEvent* arg, ::BestHTTP::Timings::TimingEvent* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::Timings::TimingEvent*, ::BestHTTP::Timings::TimingEvent*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGEVENT_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGEVENT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_TIMINGS_TIMINGEVENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

