#pragma once
#include "../unitysdk.h"

namespace Animancer { class SimpleTimer; }

#define ANIMANCER_SIMPLETIMER_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x4AC240)
#define ANIMANCER_SIMPLETIMER_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x4AC2F0)
#define ANIMANCER_SIMPLETIMER_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AC310)
#define ANIMANCER_SIMPLETIMER_START_OFFSET UNITYSDK_OFFSET(0x4AC330)
#define ANIMANCER_SIMPLETIMER_START_OFFSET UNITYSDK_OFFSET(0x4AC3B0)
#define ANIMANCER_SIMPLETIMER_STOP_OFFSET UNITYSDK_OFFSET(0x4AC420)
#define ANIMANCER_SIMPLETIMER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x4AC4A0)
#define ANIMANCER_SIMPLETIMER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4AC5F0)
#define ANIMANCER_SIMPLETIMER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x4AC670)

namespace Animancer
{
	inline static constexpr unsigned int SimpleTimer_TypeDefinitionIndex = 35140;

	class SimpleTimer : public Il2CppObject
	{
	public:
		::System::Diagnostics::Stopwatch* Stopwatch; // 0x0
		::System::String* name; // 0x10
		::System::Double startTime; // 0x18
		::System::Double total; // 0x20
		::System::String* Format; // 0x0

		::System::Double get_CurrentTime()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SIMPLETIMER_GET_CURRENTTIME_OFFSET))(nullptr);
		}

		::System::Boolean get_IsStarted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SIMPLETIMER_GET_ISSTARTED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SIMPLETIMER_.CTOR_OFFSET))(str, nullptr);
		}

		::Animancer::SimpleTimer* Start(::System::String* str)
		{
			return (return (::Animancer::SimpleTimer*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SIMPLETIMER_START_OFFSET))(str, nullptr);
		}

		::System::Boolean Start()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SIMPLETIMER_START_OFFSET))(nullptr);
		}

		::System::Boolean Stop()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SIMPLETIMER_STOP_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SIMPLETIMER_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SIMPLETIMER_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_SIMPLETIMER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

