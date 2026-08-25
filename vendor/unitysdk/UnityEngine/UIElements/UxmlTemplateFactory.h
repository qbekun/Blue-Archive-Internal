#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLTEMPLATEFACTORY_GET_UXMLNAME_OFFSET UNITYSDK_OFFSET(0xA422C60)
#define UNITYENGINE_UIELEMENTS_UXMLTEMPLATEFACTORY_GET_UXMLQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0xA422C90)
#define UNITYENGINE_UIELEMENTS_UXMLTEMPLATEFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xA422D00)
#define UNITYENGINE_UIELEMENTS_UXMLTEMPLATEFACTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xA422D10)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlTemplateFactory_TypeDefinitionIndex = 30673;

	class UxmlTemplateFactory : public unitytls_error_code
	{
	public:
		::System::String* get_uxmlName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLTEMPLATEFACTORY_GET_UXMLNAME_OFFSET))(nullptr);
		}

		::System::String* get_uxmlQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLTEMPLATEFACTORY_GET_UXMLQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLTEMPLATEFACTORY_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLTEMPLATEFACTORY_.CTOR_OFFSET))(nullptr);
		}

	};
}

