#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UNITYENGINE_UIELEMENTS_UXMLTRAITS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA422A10)
#define UNITYENGINE_UIELEMENTS_UXMLTRAITS_SET_CANHAVEANYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0xA424BC0)
#define UNITYENGINE_UIELEMENTS_UXMLTRAITS_INIT_OFFSET UNITYSDK_OFFSET(0xA424BD0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UxmlTraits_TypeDefinitionIndex = 30694;

	class UxmlTraits : public Il2CppObject
	{
	public:
		::System::Boolean _canHaveAnyAttribute_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLTRAITS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_canHaveAnyAttribute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLTRAITS_SET_CANHAVEANYATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UXMLTRAITS_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

