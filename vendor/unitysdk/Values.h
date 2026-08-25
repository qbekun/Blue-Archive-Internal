#pragma once
#include "unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyId; }

#define VALUES_CANCELALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES_CANCELALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES_CANCELANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES_UPDATEANIMATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES_GETALLANIMATIONS_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES_UPDATEVALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES_UPDATECOMPUTEDSTYLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define VALUES_.CTOR_OFFSET UNITYSDK_OFFSET(0xA33E120)

	inline static constexpr unsigned int Values_TypeDefinitionIndex = 30187;

	class Values : public Il2CppObject
	{
	public:
		::System::Void CancelAllAnimations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUES_CANCELALLANIMATIONS_OFFSET))(nullptr);
		}

		::System::Void CancelAllAnimations(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + VALUES_CANCELALLANIMATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void CancelAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + VALUES_CANCELANIMATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UpdateAnimation(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::StylePropertyId* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId*, ::PVOID))((::PBYTE)hIl2Cpp + VALUES_UPDATEANIMATION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetAllAnimations(::UnityEngine::UIElements::VisualElement* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + VALUES_GETALLANIMATIONS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + VALUES_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateValues()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUES_UPDATEVALUES_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUES_UPDATECOMPUTEDSTYLE_OFFSET))(nullptr);
		}

		::System::Void UpdateComputedStyle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VALUES_UPDATECOMPUTEDSTYLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VALUES_.CTOR_OFFSET))(nullptr);
		}

	};

