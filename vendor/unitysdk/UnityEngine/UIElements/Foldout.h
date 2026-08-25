#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class Toggle; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class AttachToPanelEvent; }

#define UNITYENGINE_UIELEMENTS_FOLDOUT_GET_CONTENTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA3A25D0)
#define UNITYENGINE_UIELEMENTS_FOLDOUT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0xA3A25E0)
#define UNITYENGINE_UIELEMENTS_FOLDOUT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3A2780)
#define UNITYENGINE_UIELEMENTS_FOLDOUT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xA3A2790)
#define UNITYENGINE_UIELEMENTS_FOLDOUT_SETVALUEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA3A2960)
#define UNITYENGINE_UIELEMENTS_FOLDOUT_ONVIEWDATAREADY_OFFSET UNITYSDK_OFFSET(0xA3A2A80)
#define UNITYENGINE_UIELEMENTS_FOLDOUT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3A2AC0)
#define UNITYENGINE_UIELEMENTS_FOLDOUT_ONATTACHTOPANEL_OFFSET UNITYSDK_OFFSET(0xA3A2E60)
#define UNITYENGINE_UIELEMENTS_FOLDOUT_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA3A3020)
#define UNITYENGINE_UIELEMENTS_FOLDOUT__.CTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0xA3A3280)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Foldout_TypeDefinitionIndex = 30323;

	class Foldout : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::Toggle* m_Toggle; // 0x3C0
		::UnityEngine::UIElements::VisualElement* m_Container; // 0x3C8
		::System::Boolean m_Value; // 0x3D0
		::System::String* ussClassName; // 0x0
		::System::String* toggleUssClassName; // 0x8
		::System::String* contentUssClassName; // 0x10
		::System::String* inputUssClassName; // 0x18
		::System::String* checkmarkUssClassName; // 0x20
		::System::String* textUssClassName; // 0x28
		::System::String* ussFoldoutDepthClassName; // 0x30
		::System::Int32 ussFoldoutMaxDepth; // 0x38

		::UnityEngine::UIElements::VisualElement* get_contentContainer()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOLDOUT_GET_CONTENTCONTAINER_OFFSET))(nullptr);
		}

		::System::Void set_text(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOLDOUT_SET_TEXT_OFFSET))(str, nullptr);
		}

		::System::Boolean get_value()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOLDOUT_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_value(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOLDOUT_SET_VALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetValueWithoutNotify(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOLDOUT_SETVALUEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::System::Void OnViewDataReady()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOLDOUT_ONVIEWDATAREADY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOLDOUT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::AttachToPanelEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOLDOUT_ONATTACHTOPANEL_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOLDOUT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _.ctor_b__25_0(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOLDOUT__.CTOR_B__25_0_OFFSET))(arg, nullptr);
		}

	};
}

