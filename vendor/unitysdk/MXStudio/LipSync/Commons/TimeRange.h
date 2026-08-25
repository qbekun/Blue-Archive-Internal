#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Commons { class TimeRange; }

#define MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9441ED0)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x9441360)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_GET_MIDDLE_OFFSET UNITYSDK_OFFSET(0x9441370)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9441380)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_SHIFTED_OFFSET UNITYSDK_OFFSET(0x9445020)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_BEGINADJUSTED_OFFSET UNITYSDK_OFFSET(0x9443660)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_ENDADJUSTED_OFFSET UNITYSDK_OFFSET(0x943AAA0)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94450A0)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9445120)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9445140)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x94451C0)

namespace MXStudio::LipSync::Commons
{
	inline static constexpr unsigned int TimeRange_TypeDefinitionIndex = 36909;

	class TimeRange : public Il2CppObject
	{
	public:
		::System::Int32 begin; // 0x10
		::System::Int32 end; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Duration()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_GET_DURATION_OFFSET))(nullptr);
		}

		::System::Int32 get_Middle()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_GET_MIDDLE_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_CONTAINS_OFFSET))(arg, nullptr);
		}

		::MXStudio::LipSync::Commons::TimeRange* Shifted(::System::Int32 arg)
		{
			return (return (::MXStudio::LipSync::Commons::TimeRange*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_SHIFTED_OFFSET))(arg, nullptr);
		}

		::MXStudio::LipSync::Commons::TimeRange* BeginAdjusted(::System::Int32 arg)
		{
			return (return (::MXStudio::LipSync::Commons::TimeRange*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_BEGINADJUSTED_OFFSET))(arg, nullptr);
		}

		::MXStudio::LipSync::Commons::TimeRange* EndAdjusted(::System::Int32 arg)
		{
			return (return (::MXStudio::LipSync::Commons::TimeRange*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_ENDADJUSTED_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::MXStudio::LipSync::Commons::TimeRange* arg)
		{
			return (return (::System::Boolean(*)(::MXStudio::LipSync::Commons::TimeRange*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMERANGE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

