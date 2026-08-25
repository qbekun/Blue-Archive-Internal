#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class ContextType; }
namespace UnityEngine::UIElements { class FocusController; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_IPANEL_GET_VISUALTREE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPANEL_GET_DISPATCHER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPANEL_GET_CONTEXTTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPANEL_GET_FOCUSCONTROLLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IPANEL_PICK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IPanel_TypeDefinitionIndex = 30133;

	class IPanel : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::VisualElement* get_visualTree()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPANEL_GET_VISUALTREE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::EventDispatcher* get_dispatcher()
		{
			return (return (::UnityEngine::UIElements::EventDispatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPANEL_GET_DISPATCHER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ContextType* get_contextType()
		{
			return (return (::UnityEngine::UIElements::ContextType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPANEL_GET_CONTEXTTYPE_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::FocusController* get_focusController()
		{
			return (return (::UnityEngine::UIElements::FocusController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPANEL_GET_FOCUSCONTROLLER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* Pick(::UnityEngine::Vector2* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IPANEL_PICK_OFFSET))(arg, nullptr);
		}

	};
}

