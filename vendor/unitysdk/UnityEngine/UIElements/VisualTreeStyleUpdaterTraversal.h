#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class StyleVariableContext; }
namespace UnityEngine::UIElements { class StyleMatchingContext; }
namespace UnityEngine::UIElements::StyleSheets { class StylePropertyReader; }
namespace UnityEngine::UIElements { class VisualElement; }
namespace UnityEngine::UIElements { class VersionChangeType; }
namespace UnityEngine::UIElements::StyleSheets { class MatchResultInfo; }
namespace UnityEngine::UIElements { class ComputedStyle&; }
namespace UnityEngine::UIElements { class ComputedStyle; }
namespace UnityEngine::UIElements { class StyleSheet; }
namespace UnityEngine::UIElements { class StyleRule; }

#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_GET_CURRENTPIXELSPERPOINT_OFFSET UNITYSDK_OFFSET(0xA38C240)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_SET_CURRENTPIXELSPERPOINT_OFFSET UNITYSDK_OFFSET(0xA38C250)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PREPARETRAVERSAL_OFFSET UNITYSDK_OFFSET(0xA38BB60)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_ADDCHANGEDELEMENT_OFFSET UNITYSDK_OFFSET(0xA38B260)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_CLEAR_OFFSET UNITYSDK_OFFSET(0xA38B7B0)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PROPAGATETOCHILDREN_OFFSET UNITYSDK_OFFSET(0xA38C260)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PROPAGATETOPARENTS_OFFSET UNITYSDK_OFFSET(0xA38C320)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_ONPROCESSMATCHRESULT_OFFSET UNITYSDK_OFFSET(0xA38C3D0)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_TRAVERSERECURSIVE_OFFSET UNITYSDK_OFFSET(0xA38C400)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PROCESSTRANSITIONS_OFFSET UNITYSDK_OFFSET(0xA38DC10)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_FORCEUPDATETRANSITIONS_OFFSET UNITYSDK_OFFSET(0xA38DD20)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_CANCELANIMATIONSWITHNOTRANSITIONPROPERTY_OFFSET UNITYSDK_OFFSET(0xA38B850)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_SHOULDSKIPELEMENT_OFFSET UNITYSDK_OFFSET(0xA38CD00)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PROCESSMATCHEDRULES_OFFSET UNITYSDK_OFFSET(0xA38CD80)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PROCESSMATCHEDVARIABLES_OFFSET UNITYSDK_OFFSET(0xA38DFE0)
#define UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xA38BC70)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeStyleUpdaterTraversal_TypeDefinitionIndex = 30270;

	class VisualTreeStyleUpdaterTraversal : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::StyleVariableContext* m_ProcessVarContext; // 0x10
		Il2CppObject* m_UpdateList; // 0x18
		Il2CppObject* m_ParentList; // 0x20
		Il2CppObject* m_TempMatchResults; // 0x28
		::System::Single _currentPixelsPerPoint_k__BackingField; // 0x30
		::UnityEngine::UIElements::StyleMatchingContext* m_StyleMatchingContext; // 0x38
		::UnityEngine::UIElements::StyleSheets::StylePropertyReader* m_StylePropertyReader; // 0x40
		Il2CppObject* m_AnimatedProperties; // 0x48

		::System::Single get_currentPixelsPerPoint()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_GET_CURRENTPIXELSPERPOINT_OFFSET))(nullptr);
		}

		::System::Void set_currentPixelsPerPoint(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_SET_CURRENTPIXELSPERPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareTraversal(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PREPARETRAVERSAL_OFFSET))(arg, nullptr);
		}

		::System::Void AddChangedElement(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::VersionChangeType* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_ADDCHANGEDELEMENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_CLEAR_OFFSET))(nullptr);
		}

		::System::Void PropagateToChildren(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PROPAGATETOCHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Void PropagateToParents(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PROPAGATETOPARENTS_OFFSET))(arg, nullptr);
		}

		::System::Void OnProcessMatchResult(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::MatchResultInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_ONPROCESSMATCHRESULT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void TraverseRecursive(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_TRAVERSERECURSIVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessTransitions(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::ComputedStyle&* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ComputedStyle&*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PROCESSTRANSITIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ForceUpdateTransitions(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_FORCEUPDATETRANSITIONS_OFFSET))(arg, nullptr);
		}

		::System::Void CancelAnimationsWithNoTransitionProperty(::UnityEngine::UIElements::VisualElement* arg, ::UnityEngine::UIElements::ComputedStyle&* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::ComputedStyle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_CANCELANIMATIONSWITHNOTRANSITIONPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldSkipElement(::UnityEngine::UIElements::VisualElement* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_SHOULDSKIPELEMENT_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ComputedStyle* ProcessMatchedRules(::UnityEngine::UIElements::VisualElement* arg, Il2CppObject* arg)
		{
			return (return (::UnityEngine::UIElements::ComputedStyle*(*)(::UnityEngine::UIElements::VisualElement*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PROCESSMATCHEDRULES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ProcessMatchedVariables(::UnityEngine::UIElements::StyleSheet* arg, ::UnityEngine::UIElements::StyleRule* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleRule*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_PROCESSMATCHEDVARIABLES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREESTYLEUPDATERTRAVERSAL_.CTOR_OFFSET))(nullptr);
		}

	};
}

