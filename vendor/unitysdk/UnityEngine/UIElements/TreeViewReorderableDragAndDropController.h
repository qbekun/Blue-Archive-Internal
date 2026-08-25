#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements::Experimental { class TreeView; }
namespace UnityEngine::UIElements { class StartDragArgs; }
namespace UnityEngine::UIElements { class DragVisualMode; }
namespace UnityEngine::UIElements { class IListDragAndDropArgs; }

#define UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3DA6A0)
#define UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_COMPAREID_OFFSET UNITYSDK_OFFSET(0xA3DA750)
#define UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_SETUPDRAGANDDROP_OFFSET UNITYSDK_OFFSET(0xA3DAE70)
#define UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_HANDLEDRAGANDDROP_OFFSET UNITYSDK_OFFSET(0xA3DAF10)
#define UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_ONDROP_OFFSET UNITYSDK_OFFSET(0xA3DB060)
#define UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_DRAGCLEANUP_OFFSET UNITYSDK_OFFSET(0xA3DB810)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TreeViewReorderableDragAndDropController_TypeDefinitionIndex = 30442;

	class TreeViewReorderableDragAndDropController : public ::UnityEngine::UnityEngineModuleAssembly
	{
	public:
		DropData* m_DropData; // 0x28
		::UnityEngine::UIElements::Experimental::TreeView* m_TreeView; // 0x30

		::System::Void .ctor(::UnityEngine::UIElements::Experimental::TreeView* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::Experimental::TreeView*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 CompareId(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_COMPAREID_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::StartDragArgs* SetupDragAndDrop(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::UIElements::StartDragArgs*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_SETUPDRAGANDDROP_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::DragVisualMode* HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* arg)
		{
			return (return (::UnityEngine::UIElements::DragVisualMode*(*)(::UnityEngine::UIElements::IListDragAndDropArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_HANDLEDRAGANDDROP_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IListDragAndDropArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Void DragCleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWREORDERABLEDRAGANDDROPCONTROLLER_DRAGCLEANUP_OFFSET))(nullptr);
		}

	};
}

