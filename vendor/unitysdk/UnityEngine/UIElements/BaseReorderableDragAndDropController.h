#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class BaseVerticalCollectionView; }
namespace UnityEngine::UIElements { class StartDragArgs; }
namespace UnityEngine::UIElements { class DragVisualMode; }
namespace UnityEngine::UIElements { class IListDragAndDropArgs; }

#define UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_GETSORTEDSELECTEDIDS_OFFSET UNITYSDK_OFFSET(0xA3D0180)
#define UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3D0190)
#define UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_GET_ENABLEREORDERING_OFFSET UNITYSDK_OFFSET(0xA3D0240)
#define UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_SET_ENABLEREORDERING_OFFSET UNITYSDK_OFFSET(0xA3D0250)
#define UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_CANSTARTDRAG_OFFSET UNITYSDK_OFFSET(0xA3D0260)
#define UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_SETUPDRAGANDDROP_OFFSET UNITYSDK_OFFSET(0xA3D0280)
#define UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_COMPAREID_OFFSET UNITYSDK_OFFSET(0xA3D0C40)
#define UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_HANDLEDRAGANDDROP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_ONDROP_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_DRAGCLEANUP_OFFSET UNITYSDK_OFFSET(0xA3D0C60)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int BaseReorderableDragAndDropController_TypeDefinitionIndex = 30419;

	class BaseReorderableDragAndDropController : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::BaseVerticalCollectionView* m_View; // 0x10
		Il2CppObject* m_SortedSelectedIds; // 0x18
		::System::Boolean _enableReordering_k__BackingField; // 0x20

		Il2CppObject* GetSortedSelectedIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_GETSORTEDSELECTEDIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVerticalCollectionView*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_enableReordering()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_GET_ENABLEREORDERING_OFFSET))(nullptr);
		}

		::System::Void set_enableReordering(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_SET_ENABLEREORDERING_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanStartDrag(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_CANSTARTDRAG_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StartDragArgs* SetupDragAndDrop(Il2CppObject* arg, ::System::Boolean arg)
		{
			return (return (::UnityEngine::UIElements::StartDragArgs*(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_SETUPDRAGANDDROP_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CompareId(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_COMPAREID_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::UIElements::DragVisualMode* HandleDragAndDrop(::UnityEngine::UIElements::IListDragAndDropArgs* arg)
		{
			return (return (::UnityEngine::UIElements::DragVisualMode*(*)(::UnityEngine::UIElements::IListDragAndDropArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_HANDLEDRAGANDDROP_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrop(::UnityEngine::UIElements::IListDragAndDropArgs* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::IListDragAndDropArgs*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Void DragCleanup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_BASEREORDERABLEDRAGANDDROPCONTROLLER_DRAGCLEANUP_OFFSET))(nullptr);
		}

	};
}

