#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_IUXMLFACTORY_GET_UXMLQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IUXMLFACTORY_ACCEPTSATTRIBUTEBAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_IUXMLFACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IUxmlFactory_TypeDefinitionIndex = 30695;

	class IUxmlFactory : public Il2CppObject
	{
	public:
		::System::String* get_uxmlQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IUXMLFACTORY_GET_UXMLQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Boolean AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IUXMLFACTORY_ACCEPTSATTRIBUTEBAG_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IUXMLFACTORY_CREATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

