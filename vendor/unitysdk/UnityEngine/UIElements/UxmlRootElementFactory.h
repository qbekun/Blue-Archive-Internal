#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLROOTELEMENTFACTORY_GET_UXMLNAME_OFFSET UNITYSDK_OFFSET(0xA422780)
#define UNITYENGINE_UIELEMENTS_UXMLROOTELEMENTFACTORY_GET_UXMLQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0xA4227B0)
#define UNITYENGINE_UIELEMENTS_UXMLROOTELEMENTFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xA422820)
#define UNITYENGINE_UIELEMENTS_UXMLROOTELEMENTFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA422830)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlRootElementFactory_TypeDefinitionIndex = 30669;

	class UxmlRootElementFactory : public ::Mono::Unity::CertHelper
	{
	public:
		::System::String* get_uxmlName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLROOTELEMENTFACTORY_GET_UXMLNAME_OFFSET))(nullptr);
		}

		::System::String* get_uxmlQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLROOTELEMENTFACTORY_GET_UXMLQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLROOTELEMENTFACTORY_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLROOTELEMENTFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

