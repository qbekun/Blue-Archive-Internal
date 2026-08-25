#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_AWAITERACTIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DDE740)
#define CYSHARP_THREADING_TASKS_AWAITERACTIONS_CONTINUATION_OFFSET UNITYSDK_OFFSET(0x9DDE7E0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AwaiterActions_TypeDefinitionIndex = 35933;

	class AwaiterActions : public Il2CppObject
	{
	public:
		Il2CppObject* InvokeContinuationDelegate; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AWAITERACTIONS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Continuation(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_AWAITERACTIONS_CONTINUATION_OFFSET))(arg, nullptr);
		}

	};
}

