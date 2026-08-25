#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::UIElements { class TreeViewController; }
namespace UnityEngine::UIElements { class ICollectionDragAndDropController; }

#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_TREEVIEW_GET_VIEWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA378FC0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_TREEVIEW_CREATEDRAGANDDROPCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA379030)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_TREEVIEW_GET_EXPANDEDITEMIDS_OFFSET UNITYSDK_OFFSET(0xA379090)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_TREEVIEW_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0xA3790A0)
#define UNITYENGINE_UIELEMENTS_EXPERIMENTAL_TREEVIEW_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA379120)

namespace UnityEngine::UIElements::Experimental
{
	inline static constexpr unsigned int TreeView_TypeDefinitionIndex = 30837;

	class TreeView : public ::UnityEngine::Bindings::ThreadSafeAttribute
	{
	public:
		::System::String* ussClassName; // 0x0
		::System::String* itemUssClassName; // 0x8
		::System::String* itemToggleUssClassName; // 0x10
		::System::String* itemIndentsContainerUssClassName; // 0x18
		::System::String* itemIndentUssClassName; // 0x20
		::System::String* itemContentContainerUssClassName; // 0x28
		Il2CppObject* m_ExpandedItemIds; // 0x4B8

		::UnityEngine::UIElements::TreeViewController* get_viewController()
		{
			return (return (::UnityEngine::UIElements::TreeViewController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_TREEVIEW_GET_VIEWCONTROLLER_OFFSET))(nullptr);
		}

		::UnityEngine::UIElements::ICollectionDragAndDropController* CreateDragAndDropController()
		{
			return (return (::UnityEngine::UIElements::ICollectionDragAndDropController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_TREEVIEW_CREATEDRAGANDDROPCONTROLLER_OFFSET))(nullptr);
		}

		Il2CppObject* get_expandedItemIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_TREEVIEW_GET_EXPANDEDITEMIDS_OFFSET))(nullptr);
		}

		::System::Boolean IsExpanded(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_TREEVIEW_ISEXPANDED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EXPERIMENTAL_TREEVIEW_.CCTOR_OFFSET))(nullptr);
		}

	};
}

