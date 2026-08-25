#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_COMPLETIONSENTINEL_OFFSET UNITYSDK_OFFSET(0x9DDED90)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9DDEDF0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCompletionSourceCoreShared_TypeDefinitionIndex = 35946;

	class UniTaskCompletionSourceCoreShared : public Il2CppObject
	{
	public:
		Il2CppObject* s_sentinel; // 0x0

		::System::Void CompletionSentinel(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_COMPLETIONSENTINEL_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCECORESHARED_.CCTOR_OFFSET))(nullptr);
		}

	};
}

