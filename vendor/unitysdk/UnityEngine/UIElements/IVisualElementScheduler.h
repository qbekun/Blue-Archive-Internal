#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IVisualElementScheduledItem; }

#define UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IVisualElementScheduler_TypeDefinitionIndex = 30257;

	class IVisualElementScheduler : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::IVisualElementScheduledItem* Execute(Il2CppObject* arg)
		{
			return (return (::UnityEngine::UIElements::IVisualElementScheduledItem*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULER_EXECUTE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::IVisualElementScheduledItem* Execute(::System::Action* arg)
		{
			return (return (::UnityEngine::UIElements::IVisualElementScheduledItem*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IVISUALELEMENTSCHEDULER_EXECUTE_OFFSET))(arg, nullptr);
		}

	};
}

