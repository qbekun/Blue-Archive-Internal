#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }

#define ELEMENTPROPERTYPAIR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA33E010)
#define ELEMENTPROPERTYPAIR_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA33E030)

	inline static constexpr unsigned int ElementPropertyPair_TypeDefinitionIndex = 30186;

	class ElementPropertyPair : public Il2CppObject
	{
	public:
		Il2CppObject* Comparer; // 0x0
		::UnityEngine::UIElements::VisualElement* element; // 0x10
		::UnityEngine::UIElements::StyleSheets::StylePropertyId* property; // 0x18

		::System::Void .ctor(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + ELEMENTPROPERTYPAIR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELEMENTPROPERTYPAIR_.CCTOR_OFFSET))(nullptr);
		}

	};

