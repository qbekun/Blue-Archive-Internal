#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_HIERARCHYTRAVERSAL_TRAVERSE_OFFSET UNITYSDK_OFFSET(0xA362110)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_HIERARCHYTRAVERSAL_TRAVERSERECURSIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_HIERARCHYTRAVERSAL_RECURSE_OFFSET UNITYSDK_OFFSET(0xA362130)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_HIERARCHYTRAVERSAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA362210)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int HierarchyTraversal_TypeDefinitionIndex = 30792;

	class HierarchyTraversal : public Il2CppObject
	{
	public:
		::System::Void Traverse(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_HIERARCHYTRAVERSAL_TRAVERSE_OFFSET))(arg, nullptr);
		}

		::System::Void TraverseRecursive(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_HIERARCHYTRAVERSAL_TRAVERSERECURSIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Recurse(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_HIERARCHYTRAVERSAL_RECURSE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_HIERARCHYTRAVERSAL_.CTOR_OFFSET))(nullptr);
		}

	};
}

