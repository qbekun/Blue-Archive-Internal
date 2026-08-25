#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Component; }

#define CYSHARP_THREADING_TASKS_UNITASKCANCELLATIONEXTENSIONS_GETCANCELLATIONTOKENONDESTROY_OFFSET UNITYSDK_OFFSET(0x9DD4AD0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCancellationExtensions_TypeDefinitionIndex = 35899;

	class UniTaskCancellationExtensions : public Il2CppObject
	{
	public:
		::System::Threading::CancellationToken* GetCancellationTokenOnDestroy(::UnityEngine::Component* arg)
		{
			return (return (::System::Threading::CancellationToken*(*)(::UnityEngine::Component*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCANCELLATIONEXTENSIONS_GETCANCELLATIONTOKENONDESTROY_OFFSET))(arg, nullptr);
		}

	};
}

