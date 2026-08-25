#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::UIElements { class ReusableCollectionItem; }
namespace UnityEngine::UIElements { class BaseVerticalCollectionView; }
namespace UnityEngine::UIElements { class StartDragArgs; }
namespace UnityEngine { class Vector2; }

#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xA3D7E50)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_SET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xA3D7E60)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_GET_DRAGGEDITEM_OFFSET UNITYSDK_OFFSET(0xA3D7E70)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_GET_SUPPORTSDRAGEVENTS_OFFSET UNITYSDK_OFFSET(0xA3D7E80)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3D7E90)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_STARTDRAG_OFFSET UNITYSDK_OFFSET(0xA3D7EB0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0xA3D8F00)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_ANIMATE_OFFSET UNITYSDK_OFFSET(0xA3D8AB0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_ONDROP_OFFSET UNITYSDK_OFFSET(0xA3D9B90)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_CLEARDRAGANDDROPUI_OFFSET UNITYSDK_OFFSET(0xA3DA1C0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_TRYGETDRAGPOSITION_OFFSET UNITYSDK_OFFSET(0xA3DA1D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ListViewDraggerAnimated_TypeDefinitionIndex = 30438;

	class ListViewDraggerAnimated : public Il2CppObject
	{
	public:
		::System::Int32 m_DragStartIndex; // 0x78
		::System::Int32 m_CurrentIndex; // 0x7C
		::System::Single m_SelectionHeight; // 0x80
		::System::Single m_LocalOffsetOnStart; // 0x84
		::UnityEngine::Vector3* m_CurrentPointerPosition; // 0x88
		::UnityEngine::UIElements::ReusableCollectionItem* m_Item; // 0x98
		::UnityEngine::UIElements::ReusableCollectionItem* m_OffsetItem; // 0xA0
		::System::Boolean _isDragging_k__BackingField; // 0xA8

		::System::Boolean get_isDragging()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_GET_ISDRAGGING_OFFSET))(nullptr);
		}

		::System::Void set_isDragging(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_SET_ISDRAGGING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ReusableCollectionItem* get_draggedItem()
		{
			return (return (::UnityEngine::UIElements::ReusableCollectionItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_GET_DRAGGEDITEM_OFFSET))(nullptr);
		}

		::System::Boolean get_supportsDragEvents()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_GET_SUPPORTSDRAGEVENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::UIElements::BaseVerticalCollectionView* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVerticalCollectionView*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_.CTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::StartDragArgs* StartDrag(::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::UIElements::StartDragArgs*(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_STARTDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateDrag(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_UPDATEDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void Animate(::UnityEngine::UIElements::ReusableCollectionItem* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ReusableCollectionItem*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_ANIMATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void OnDrop(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Void ClearDragAndDropUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_CLEARDRAGANDDROPUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetDragPosition(::UnityEngine::Vector2* arg, DragPosition&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector2*, DragPosition&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWDRAGGERANIMATED_TRYGETDRAGPOSITION_OFFSET))(arg, arg, nullptr);
		}

	};
}

