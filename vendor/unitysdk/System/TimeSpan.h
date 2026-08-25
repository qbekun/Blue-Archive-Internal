#pragma once
#include "../unitysdk.h"

#define SYSTEM_TIMESPAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9379450)
#define SYSTEM_TIMESPAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9379460)
#define SYSTEM_TIMESPAN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9379560)
#define SYSTEM_TIMESPAN_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x9379620)
#define SYSTEM_TIMESPAN_GET_DAYS_OFFSET UNITYSDK_OFFSET(0x9379630)
#define SYSTEM_TIMESPAN_GET_HOURS_OFFSET UNITYSDK_OFFSET(0x9379660)
#define SYSTEM_TIMESPAN_GET_MILLISECONDS_OFFSET UNITYSDK_OFFSET(0x93796B0)
#define SYSTEM_TIMESPAN_GET_MINUTES_OFFSET UNITYSDK_OFFSET(0x9379700)
#define SYSTEM_TIMESPAN_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x9379750)
#define SYSTEM_TIMESPAN_GET_TOTALDAYS_OFFSET UNITYSDK_OFFSET(0x93797A0)
#define SYSTEM_TIMESPAN_GET_TOTALHOURS_OFFSET UNITYSDK_OFFSET(0x93797B0)
#define SYSTEM_TIMESPAN_GET_TOTALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x93797C0)
#define SYSTEM_TIMESPAN_GET_TOTALMINUTES_OFFSET UNITYSDK_OFFSET(0x9379810)
#define SYSTEM_TIMESPAN_GET_TOTALSECONDS_OFFSET UNITYSDK_OFFSET(0x9379820)
#define SYSTEM_TIMESPAN_ADD_OFFSET UNITYSDK_OFFSET(0x9379830)
#define SYSTEM_TIMESPAN_COMPARE_OFFSET UNITYSDK_OFFSET(0x93798B0)
#define SYSTEM_TIMESPAN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x93798D0)
#define SYSTEM_TIMESPAN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x93799A0)
#define SYSTEM_TIMESPAN_FROMDAYS_OFFSET UNITYSDK_OFFSET(0x93799C0)
#define SYSTEM_TIMESPAN_DURATION_OFFSET UNITYSDK_OFFSET(0x9379B60)
#define SYSTEM_TIMESPAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x9379C30)
#define SYSTEM_TIMESPAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x9379CA0)
#define SYSTEM_TIMESPAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9379CB0)
#define SYSTEM_TIMESPAN_FROMHOURS_OFFSET UNITYSDK_OFFSET(0x9379CC0)
#define SYSTEM_TIMESPAN_INTERVAL_OFFSET UNITYSDK_OFFSET(0x9379A20)
#define SYSTEM_TIMESPAN_FROMMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x9379D20)
#define SYSTEM_TIMESPAN_FROMMINUTES_OFFSET UNITYSDK_OFFSET(0x9379D80)
#define SYSTEM_TIMESPAN_NEGATE_OFFSET UNITYSDK_OFFSET(0x9379DE0)
#define SYSTEM_TIMESPAN_FROMSECONDS_OFFSET UNITYSDK_OFFSET(0x9379EB0)
#define SYSTEM_TIMESPAN_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x9379F10)
#define SYSTEM_TIMESPAN_FROMTICKS_OFFSET UNITYSDK_OFFSET(0x9379FA0)
#define SYSTEM_TIMESPAN_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x93794C0)
#define SYSTEM_TIMESPAN_VALIDATESTYLES_OFFSET UNITYSDK_OFFSET(0x9379FB0)
#define SYSTEM_TIMESPAN_PARSE_OFFSET UNITYSDK_OFFSET(0x937A020)
#define SYSTEM_TIMESPAN_PARSE_OFFSET UNITYSDK_OFFSET(0x937A0B0)
#define SYSTEM_TIMESPAN_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x937A140)
#define SYSTEM_TIMESPAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x937A300)
#define SYSTEM_TIMESPAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x937A360)
#define SYSTEM_TIMESPAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x937A3C0)
#define SYSTEM_TIMESPAN_TRYFORMAT_OFFSET UNITYSDK_OFFSET(0x937A420)
#define SYSTEM_TIMESPAN_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x937A4D0)
#define SYSTEM_TIMESPAN_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x937A5A0)
#define SYSTEM_TIMESPAN_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x937A600)
#define SYSTEM_TIMESPAN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x937A660)
#define SYSTEM_TIMESPAN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x937A670)
#define SYSTEM_TIMESPAN_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x937A680)
#define SYSTEM_TIMESPAN_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x937A690)
#define SYSTEM_TIMESPAN_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x937A6A0)
#define SYSTEM_TIMESPAN_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x937A6B0)
#define SYSTEM_TIMESPAN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x937A6C0)

namespace System
{
	inline static constexpr unsigned int TimeSpan_TypeDefinitionIndex = 23843;

	class TimeSpan : public Il2CppObject
	{
	public:
		::System::Int64 TicksPerMillisecond; // 0x0
		::System::Double MillisecondsPerTick; // 0x0
		::System::Int64 TicksPerSecond; // 0x0
		::System::Double SecondsPerTick; // 0x0
		::System::Int64 TicksPerMinute; // 0x0
		::System::Double MinutesPerTick; // 0x0
		::System::Int64 TicksPerHour; // 0x0
		::System::Double HoursPerTick; // 0x0
		::System::Int64 TicksPerDay; // 0x0
		::System::Double DaysPerTick; // 0x0
		::System::Int32 MillisPerSecond; // 0x0
		::System::Int32 MillisPerMinute; // 0x0
		::System::Int32 MillisPerHour; // 0x0
		::System::Int32 MillisPerDay; // 0x0
		::System::Int64 MaxSeconds; // 0x0
		::System::Int64 MinSeconds; // 0x0
		::System::Int64 MaxMilliSeconds; // 0x0
		::System::Int64 MinMilliSeconds; // 0x0
		::System::Int64 TicksPerTenthSecond; // 0x0
		::System::TimeSpan* Zero; // 0x0
		::System::TimeSpan* MaxValue; // 0x8
		::System::TimeSpan* MinValue; // 0x10
		::System::Int64 _ticks; // 0x10

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int64 get_Ticks()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TICKS_OFFSET))(nullptr);
		}

		::System::Int32 get_Days()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_DAYS_OFFSET))(nullptr);
		}

		::System::Int32 get_Hours()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_HOURS_OFFSET))(nullptr);
		}

		::System::Int32 get_Milliseconds()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_MILLISECONDS_OFFSET))(nullptr);
		}

		::System::Int32 get_Minutes()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_MINUTES_OFFSET))(nullptr);
		}

		::System::Int32 get_Seconds()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_SECONDS_OFFSET))(nullptr);
		}

		::System::Double get_TotalDays()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TOTALDAYS_OFFSET))(nullptr);
		}

		::System::Double get_TotalHours()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TOTALHOURS_OFFSET))(nullptr);
		}

		::System::Double get_TotalMilliseconds()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TOTALMILLISECONDS_OFFSET))(nullptr);
		}

		::System::Double get_TotalMinutes()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TOTALMINUTES_OFFSET))(nullptr);
		}

		::System::Double get_TotalSeconds()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TOTALSECONDS_OFFSET))(nullptr);
		}

		::System::TimeSpan* Add(::System::TimeSpan* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_ADD_OFFSET))(arg, nullptr);
		}

		::System::Int32 Compare(::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Int32(*)(::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareTo(::System::TimeSpan* arg)
		{
			return (return (::System::Int32(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_COMPARETO_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* FromDays(::System::Double arg)
		{
			return (return (::System::TimeSpan*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMDAYS_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* Duration()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_DURATION_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::TimeSpan* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::TimeSpan* FromHours(::System::Double arg)
		{
			return (return (::System::TimeSpan*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMHOURS_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* Interval(::System::Double arg, ::System::Int32 arg)
		{
			return (return (::System::TimeSpan*(*)(::System::Double, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_INTERVAL_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeSpan* FromMilliseconds(::System::Double arg)
		{
			return (return (::System::TimeSpan*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMMILLISECONDS_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* FromMinutes(::System::Double arg)
		{
			return (return (::System::TimeSpan*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMMINUTES_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* Negate()
		{
			return (return (::System::TimeSpan*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_NEGATE_OFFSET))(nullptr);
		}

		::System::TimeSpan* FromSeconds(::System::Double arg)
		{
			return (return (::System::TimeSpan*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMSECONDS_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* Subtract(::System::TimeSpan* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_SUBTRACT_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* FromTicks(::System::Int64 arg)
		{
			return (return (::System::TimeSpan*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMTICKS_OFFSET))(arg, nullptr);
		}

		::System::Int64 TimeToTicks(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TIMETOTICKS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ValidateStyles(::System::Globalization::TimeSpanStyles* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Globalization::TimeSpanStyles*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_VALIDATESTYLES_OFFSET))(arg, str, nullptr);
		}

		::System::TimeSpan* Parse(::System::String* str)
		{
			return (return (::System::TimeSpan*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSE_OFFSET))(str, nullptr);
		}

		::System::TimeSpan* Parse(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryParseExact(::System::String* str, ::System::String* str, ::System::IFormatProvider* arg, ::System::Globalization::TimeSpanStyles* arg, ::System::TimeSpan&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles*, ::System::TimeSpan&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSEEXACT_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TOSTRING_OFFSET))(str, nullptr);
		}

		::System::String* ToString(::System::String* str, ::System::IFormatProvider* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TOSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryFormat(Il2CppObject* arg, int32_t&* arg, Il2CppObject* arg, ::System::IFormatProvider* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, int32_t&*, Il2CppObject*, ::System::IFormatProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYFORMAT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::TimeSpan* op_UnaryNegation(::System::TimeSpan* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_UNARYNEGATION_OFFSET))(arg, nullptr);
		}

		::System::TimeSpan* op_Subtraction(::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_SUBTRACTION_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeSpan* op_Addition(::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_ADDITION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Equality(::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThan(::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_LESSTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_LessThanOrEqual(::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_LESSTHANOREQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_GreaterThan(::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_GREATERTHAN_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_GreaterThanOrEqual(::System::TimeSpan* arg, ::System::TimeSpan* arg)
		{
			return (return (::System::Boolean(*)(::System::TimeSpan*, ::System::TimeSpan*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_GREATERTHANOREQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

