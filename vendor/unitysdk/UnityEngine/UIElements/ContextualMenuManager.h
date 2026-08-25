#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IEventHandler; }
namespace UnityEngine::UIElements { class DropdownMenu; }

#define UNITYENGINE_UIELEMENTS_CONTEXTUALMENUMANAGER_DISPLAYMENUIFEVENTMATCHES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CONTEXTUALMENUMANAGER_DODISPLAYMENU_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_CONTEXTUALMENUMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA311B00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ContextualMenuManager_TypeDefinitionIndex = 30073;

	class ContextualMenuManager : public Il2CppObject
	{
	public:
		::System::Boolean _displayMenuHandledOSX_k__BackingField; // 0x10

		::System::Void DisplayMenuIfEventMatches(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IEventHandler* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTUALMENUMANAGER_DISPLAYMENUIFEVENTMATCHES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DoDisplayMenu(::UnityEngine::UIElements::DropdownMenu* arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::DropdownMenu*, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTUALMENUMANAGER_DODISPLAYMENU_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CONTEXTUALMENUMANAGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

