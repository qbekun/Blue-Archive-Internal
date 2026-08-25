#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_GET_UXMLNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_GET_UXMLNAMESPACE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_GET_UXMLQUALIFIEDNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_ACCEPTSATTRIBUTEBAG_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlFactory`2_TypeDefinitionIndex = 30696;

	class UxmlFactory`2 : public Il2CppObject
	{
	public:
		Il2CppObject* m_Traits; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_uxmlName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_GET_UXMLNAME_OFFSET))(nullptr);
		}

		::System::String* get_uxmlNamespace()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_GET_UXMLNAMESPACE_OFFSET))(nullptr);
		}

		::System::String* get_uxmlQualifiedName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_GET_UXMLQUALIFIEDNAME_OFFSET))(nullptr);
		}

		::System::Boolean AcceptsAttributeBag(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_ACCEPTSATTRIBUTEBAG_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* Create(::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLFACTORY`2_CREATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

