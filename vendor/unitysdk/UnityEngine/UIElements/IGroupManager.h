#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IGroupBoxOption; }

#define UNITYENGINE_UIELEMENTS_IGROUPMANAGER_ONOPTIONSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IGROUPMANAGER_REGISTEROPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IGROUPMANAGER_UNREGISTEROPTION_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IGroupManager_TypeDefinitionIndex = 30105;

	class IGroupManager : public Il2CppObject
	{
	public:
		::System::Void OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IGroupBoxOption*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IGROUPMANAGER_ONOPTIONSELECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterOption(::UnityEngine::UIElements::IGroupBoxOption* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IGroupBoxOption*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IGROUPMANAGER_REGISTEROPTION_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IGroupBoxOption*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IGROUPMANAGER_UNREGISTEROPTION_OFFSET))(arg, nullptr);
		}

	};
}

