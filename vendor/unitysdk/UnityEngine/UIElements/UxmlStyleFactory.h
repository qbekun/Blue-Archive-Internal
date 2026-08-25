#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLSTYLEFACTORY_GET_UXMLNAME_OFFSET UNITYSDK_OFFSET(0xA422A30)
#define UNITYENGINE_UIELEMENTS_UXMLSTYLEFACTORY_GET_UXMLQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0xA422A60)
#define UNITYENGINE_UIELEMENTS_UXMLSTYLEFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xA422AD0)
#define UNITYENGINE_UIELEMENTS_UXMLSTYLEFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA422AE0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlStyleFactory_TypeDefinitionIndex = 30671;

	class UxmlStyleFactory : public ::Mono::Unity::Debug
	{
	public:
		::System::String* get_uxmlName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLSTYLEFACTORY_GET_UXMLNAME_OFFSET))(nullptr);
		}

		::System::String* get_uxmlQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLSTYLEFACTORY_GET_UXMLQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLSTYLEFACTORY_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLSTYLEFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

