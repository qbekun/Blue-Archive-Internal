#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_ONNEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_SET_PREV_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_GET_PREV_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int ITriggerHandler`1_TypeDefinitionIndex = 35897;

	class ITriggerHandler`1 : public Il2CppObject
	{
	public:
		::System::Void OnNext(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_ONNEXT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Next(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_SET_NEXT_OFFSET))(arg, nullptr);
		}

		::System::Void set_Prev(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_SET_PREV_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Next()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_GET_NEXT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Prev()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_GET_PREV_OFFSET))(nullptr);
		}

		::System::Void OnCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ITRIGGERHANDLER`1_ONCOMPLETED_OFFSET))(nullptr);
		}

	};
}

