#pragma once
#include "../../../unitysdk.h"

namespace MXStudio::LipSync::Commons { class TimeRange; }

#define MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_EQUALS_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MXStudio::LipSync::Commons
{
	inline static constexpr unsigned int TimedValue`1_TypeDefinitionIndex = 36902;

	class TimedValue`1 : public Il2CppObject
	{
	public:
		::MXStudio::LipSync::Commons::TimeRange* timeRange; // 0x0
		Il2CppObject* value; // 0x0

		::System::Void .ctor(::MXStudio::LipSync::Commons::TimeRange* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::MXStudio::LipSync::Commons::TimeRange*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_BeginTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_GET_BEGINTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_EndTime()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_GET_ENDTIME_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_GET_DURATION_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_TOSTRING_OFFSET))(nullptr);
		}

		::System::Boolean Equals(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTUDIO_LIPSYNC_COMMONS_TIMEDVALUE`1_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

