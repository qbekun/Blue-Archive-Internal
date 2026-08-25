#pragma once
#include "unitysdk.h"

#define TIMEUTILITY_TIMEMS_OFFSET UNITYSDK_OFFSET(0x20BF160)
#define TIMEUTILITY_ELAPSEDMS_OFFSET UNITYSDK_OFFSET(0x20BF1C0)
#define TIMEUTILITY_ELAPSEDRATIO_OFFSET UNITYSDK_OFFSET(0x20BF180)

	inline static constexpr unsigned int TimeUtility_TypeDefinitionIndex = 3665;

	class TimeUtility : public Il2CppObject
	{
	public:
		::System::Int32 TimeMs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEUTILITY_TIMEMS_OFFSET))(nullptr);
		}

		::System::Int32 ElapsedMs(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMEUTILITY_ELAPSEDMS_OFFSET))(arg, nullptr);
		}

		::System::Single ElapsedRatio(::System::Int32 arg, ::System::Int32 arg2)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TIMEUTILITY_ELAPSEDRATIO_OFFSET))(arg, arg2, nullptr);
		}

	};

