#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_TRIGGEREVENT`1_ADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TRIGGEREVENT`1_SETCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TRIGGEREVENT`1_REMOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TRIGGEREVENT`1_SETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_TRIGGEREVENT`1_LOGERROR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TriggerEvent`1_TypeDefinitionIndex = 35898;

	class TriggerEvent`1 : public Il2CppObject
	{
	public:
		Il2CppObject* head; // 0x0
		Il2CppObject* iteratingHead; // 0x0
		Il2CppObject* iteratingNode; // 0x0

		::System::Void Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGEREVENT`1_ADD_OFFSET))(arg, nullptr);
		}

		::System::Void SetCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGEREVENT`1_SETCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void Remove(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGEREVENT`1_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void SetResult(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGEREVENT`1_SETRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void LogError(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGEREVENT`1_LOGERROR_OFFSET))(arg, nullptr);
		}

	};
}

