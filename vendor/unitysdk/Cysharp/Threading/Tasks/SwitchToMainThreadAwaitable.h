#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class PlayerLoopTiming; }

#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x9DDE8B0)
#define CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DD7960)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SwitchToMainThreadAwaitable_TypeDefinitionIndex = 35941;

	class SwitchToMainThreadAwaitable : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::PlayerLoopTiming* playerLoopTiming; // 0x10
		::System::Threading::CancellationToken* cancellationToken; // 0x18

		Awaiter* GetAwaiter()
		{
			return (return (Awaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_GETAWAITER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming* arg, ::System::Threading::CancellationToken* arg)
		{
			((::System::Void(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_SWITCHTOMAINTHREADAWAITABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

