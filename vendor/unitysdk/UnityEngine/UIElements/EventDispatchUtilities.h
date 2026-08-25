#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATEEVENT_OFFSET UNITYSDK_OFFSET(0xA3DC0C0)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATETOIMGUICONTAINER_OFFSET UNITYSDK_OFFSET(0xA3DBE10)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0xA3E1230)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatchUtilities_TypeDefinitionIndex = 30480;

	class EventDispatchUtilities : public Il2CppObject
	{
	public:
		::System::Void PropagateEvent(::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void PropagateToIMGUIContainer(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::EventBase* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATETOIMGUICONTAINER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* arg, ::UnityEngine::UIElements::IPanel* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_EXECUTEDEFAULTACTION_OFFSET))(arg, arg, nullptr);
		}

	};
}

