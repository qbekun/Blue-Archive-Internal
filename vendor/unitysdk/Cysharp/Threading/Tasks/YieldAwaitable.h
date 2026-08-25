#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define CYSHARP_THREADING_TASKS_YIELDAWAITABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DDE840)
#define CYSHARP_THREADING_TASKS_YIELDAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x9DDE5B0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int YieldAwaitable_TypeDefinitionIndex = 35939;

	class YieldAwaitable : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::PlayerLoopTiming* timing; // 0x10

		::System::Void .ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming* arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_YIELDAWAITABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		Awaiter* GetAwaiter()
		{
			return (return (Awaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_YIELDAWAITABLE_GETAWAITER_OFFSET))(nullptr);
		}

	};
}

