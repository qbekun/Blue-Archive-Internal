#pragma once
#include "../../../../unitysdk.h"

namespace Cysharp::Threading::Tasks::Internal { class ValueStopwatch; }

#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DF3580)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x9DDBDC0)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ELAPSEDTICKS_OFFSET UNITYSDK_OFFSET(0x9DDBDD0)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_STARTNEW_OFFSET UNITYSDK_OFFSET(0x9DDBAA0)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DF3590)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int ValueStopwatch_TypeDefinitionIndex = 36140;

	class ValueStopwatch : public Il2CppObject
	{
	public:
		::System::Double TimestampToTicks; // 0x0
		::System::Int64 startTimestamp; // 0x10

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsInvalid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ISINVALID_OFFSET))(nullptr);
		}

		::System::Int64 get_ElapsedTicks()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ELAPSEDTICKS_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Internal::ValueStopwatch* StartNew()
		{
			return (return (::Cysharp::Threading::Tasks::Internal::ValueStopwatch*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_STARTNEW_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_.CCTOR_OFFSET))(nullptr);
		}

	};
}

