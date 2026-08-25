#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEOVERRIDESFACTORY_GET_UXMLNAME_OFFSET UNITYSDK_OFFSET(0xA422E90)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEOVERRIDESFACTORY_GET_UXMLQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0xA422EC0)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEOVERRIDESFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xA422F30)
#define UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEOVERRIDESFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA422F40)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlAttributeOverridesFactory_TypeDefinitionIndex = 30675;

	class UxmlAttributeOverridesFactory : public ::Mono::Util::MonoPInvokeCallbackAttribute
	{
	public:
		::System::String* get_uxmlName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEOVERRIDESFACTORY_GET_UXMLNAME_OFFSET))(nullptr);
		}

		::System::String* get_uxmlQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEOVERRIDESFACTORY_GET_UXMLQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEOVERRIDESFACTORY_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLATTRIBUTEOVERRIDESFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

