#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class UxmlIntAttributeDescription; }
namespace UnityEngine::UIElements { class UxmlBoolAttributeDescription; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class IUxmlAttributes; }
namespace UnityEngine::UIElements { class CreationContext; }

#define UXMLTRAITS_INIT_OFFSET UNITYSDK_OFFSET(0xA3CF6B0)
#define UXMLTRAITS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3CF980)

	inline static constexpr unsigned int UxmlTraits_TypeDefinitionIndex = 30414;

	class UxmlTraits : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::UxmlIntAttributeDescription* m_ItemHeight; // 0x70
		::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ShowBorder; // 0x78
		Il2CppObject* m_SelectionType; // 0x80
		Il2CppObject* m_ShowAlternatingRowBackgrounds; // 0x88

		::System::Void Init(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::IUxmlAttributes* arg, ::UnityEngine::UIElements::CreationContext* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IUxmlAttributes*, ::UnityEngine::UIElements::CreationContext*, ::PVOID))((::PBYTE)hIl2Cpp + UXMLTRAITS_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UXMLTRAITS_.CTOR_OFFSET))(nullptr);
		}

	};

