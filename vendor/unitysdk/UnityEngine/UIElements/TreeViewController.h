#pragma once
#include "../../unitysdk.h"

namespace Unity::Profiling { class ProfilerMarker; }
namespace UnityEngine::UIElements::Experimental { class TreeView; }

#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GET_TREEVIEW_OFFSET UNITYSDK_OFFSET(0xA394640)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_REBUILDTREE_OFFSET UNITYSDK_OFFSET(0xA3946B0)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETROOTITEMIDS_OFFSET UNITYSDK_OFFSET(0xA394C10)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETALLITEMIDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETPARENTID_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETCHILDRENIDS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_MOVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0xA394C20)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_HASCHILDRENBYINDEX_OFFSET UNITYSDK_OFFSET(0xA394C90)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETCHILDRENIDSBYINDEX_OFFSET UNITYSDK_OFFSET(0xA394D90)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETCHILDINDEXFORID_OFFSET UNITYSDK_OFFSET(0xA394E40)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETINDENTATIONDEPTH_OFFSET UNITYSDK_OFFSET(0xA3951E0)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0xA395240)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_ISEXPANDEDBYINDEX_OFFSET UNITYSDK_OFFSET(0xA395300)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_EXPANDITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xA3953C0)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_EXPANDITEM_OFFSET UNITYSDK_OFFSET(0xA3968E0)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_REGENERATEWRAPPERS_OFFSET UNITYSDK_OFFSET(0xA394B50)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_CREATEWRAPPERS_OFFSET UNITYSDK_OFFSET(0xA396150)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_ISINDEXVALID_OFFSET UNITYSDK_OFFSET(0xA394D40)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_RAISEITEMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0xA396BD0)
#define UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA396BF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TreeViewController_TypeDefinitionIndex = 30282;

	class TreeViewController : public Il2CppObject
	{
	public:
		Il2CppObject* m_TreeItems; // 0x30
		Il2CppObject* m_RootIndices; // 0x38
		Il2CppObject* m_ItemWrappers; // 0x40
		Il2CppObject* m_TreeItemIdsWithItemWrappers; // 0x48
		Il2CppObject* m_WrapperInsertionList; // 0x50
		::Unity::Profiling::ProfilerMarker* K_ExpandItemByIndex; // 0x0
		::Unity::Profiling::ProfilerMarker* k_CreateWrappers; // 0x8

		::UnityEngine::UIElements::Experimental::TreeView* get_treeView()
		{
			return (return (::UnityEngine::UIElements::Experimental::TreeView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GET_TREEVIEW_OFFSET))(nullptr);
		}

		::System::Void RebuildTree()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_REBUILDTREE_OFFSET))(nullptr);
		}

		Il2CppObject* GetRootItemIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETROOTITEMIDS_OFFSET))(nullptr);
		}

		Il2CppObject* GetAllItemIds(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETALLITEMIDS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetParentId(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETPARENTID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetChildrenIds(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETCHILDRENIDS_OFFSET))(arg, nullptr);
		}

		::System::Void Move(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_MOVE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean HasChildren(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_HASCHILDREN_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasChildrenByIndex(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_HASCHILDRENBYINDEX_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetChildrenIdsByIndex(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETCHILDRENIDSBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetChildIndexForId(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETCHILDINDEXFORID_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetIndentationDepth(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_GETINDENTATIONDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpanded(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_ISEXPANDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsExpandedByIndex(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_ISEXPANDEDBYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void ExpandItemByIndex(::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_EXPANDITEMBYINDEX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ExpandItem(::System::Int32 arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_EXPANDITEM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RegenerateWrappers()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_REGENERATEWRAPPERS_OFFSET))(nullptr);
		}

		::System::Void CreateWrappers(Il2CppObject* arg, ::System::Int32 arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_CREATEWRAPPERS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsIndexValid(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_ISINDEXVALID_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseItemParentChanged(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_RAISEITEMPARENTCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEVIEWCONTROLLER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

