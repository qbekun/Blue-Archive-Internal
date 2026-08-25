#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VisualTreeAsset; }

#define UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_GET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0xA37C5B0)
#define UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_SET_TEMPLATEID_OFFSET UNITYSDK_OFFSET(0xA37C5C0)
#define UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_SET_TEMPLATESOURCE_OFFSET UNITYSDK_OFFSET(0xA37C5E0)
#define UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37C600)
#define UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA37C650)
#define UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_GET_CONTENTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA37C6A0)
#define UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_SETCONTENTCONTAINER_OFFSET UNITYSDK_OFFSET(0xA37C6B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TemplateContainer_TypeDefinitionIndex = 30211;

	class TemplateContainer : public Il2CppObject
	{
	public:
		::System::String* _templateId_k__BackingField; // 0x3C0
		::UnityEngine::UIElements::VisualElement* m_ContentContainer; // 0x3C8
		::UnityEngine::UIElements::VisualTreeAsset* m_TemplateSource; // 0x3D0

		::System::String* get_templateId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_GET_TEMPLATEID_OFFSET))(nullptr);
		}

		::System::Void set_templateId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_SET_TEMPLATEID_OFFSET))(str, nullptr);
		}

		::System::Void set_templateSource(::UnityEngine::UIElements::VisualTreeAsset* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualTreeAsset*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_SET_TEMPLATESOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_.CTOR_OFFSET))(str, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* get_contentContainer()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_GET_CONTENTCONTAINER_OFFSET))(nullptr);
		}

		::System::Void SetContentContainer(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TEMPLATECONTAINER_SETCONTENTCONTAINER_OFFSET))(arg, nullptr);
		}

	};
}

