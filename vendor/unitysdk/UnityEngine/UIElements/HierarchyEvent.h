#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class HierarchyChangeType; }

#define UNITYENGINE_UIELEMENTS_HIERARCHYEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA31FF40)
#define UNITYENGINE_UIELEMENTS_HIERARCHYEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0xA320050)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int HierarchyEvent_TypeDefinitionIndex = 30132;

	class HierarchyEvent : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_HIERARCHYEVENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::HierarchyChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::HierarchyChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_HIERARCHYEVENT_INVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

