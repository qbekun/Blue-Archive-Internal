#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IGroupBoxOption; }

#define UNITYENGINE_UIELEMENTS_DEFAULTGROUPMANAGER_ONOPTIONSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA31A000)
#define UNITYENGINE_UIELEMENTS_DEFAULTGROUPMANAGER_REGISTEROPTION_OFFSET UNITYSDK_OFFSET(0xA31A220)
#define UNITYENGINE_UIELEMENTS_DEFAULTGROUPMANAGER_UNREGISTEROPTION_OFFSET UNITYSDK_OFFSET(0xA31A300)
#define UNITYENGINE_UIELEMENTS_DEFAULTGROUPMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA319A90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int DefaultGroupManager_TypeDefinitionIndex = 30106;

	class DefaultGroupManager : public Il2CppObject
	{
	public:
		Il2CppObject* m_GroupOptions; // 0x10
		::UnityEngine::UIElements::IGroupBoxOption* m_SelectedOption; // 0x18

		::System::Void OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IGroupBoxOption*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTGROUPMANAGER_ONOPTIONSELECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void RegisterOption(::UnityEngine::UIElements::IGroupBoxOption* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IGroupBoxOption*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTGROUPMANAGER_REGISTEROPTION_OFFSET))(arg, nullptr);
		}

		::System::Void UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IGroupBoxOption*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTGROUPMANAGER_UNREGISTEROPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_DEFAULTGROUPMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

