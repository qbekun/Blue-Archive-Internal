#pragma once
#include "../unitysdk.h"

namespace RuntimeInspectorNamespace { class HierarchyData; }
namespace UnityEngine { class Transform; }
namespace RuntimeInspectorNamespace { class HierarchyDataRoot; }
namespace RuntimeInspectorNamespace { class RuntimeHierarchy; }
namespace RuntimeInspectorNamespace { class HierarchyDataTransform; }

#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9562CB0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_CANEXPAND_OFFSET UNITYSDK_OFFSET(0x955B6C0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x9562CC0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9561390)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9562CD0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x955D880)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_REMOVECHILDITEM_OFFSET UNITYSDK_OFFSET(0x9562DD0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_ABSOLUTEINDEX_OFFSET UNITYSDK_OFFSET(0x955DB00)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x9562FA0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9562FB0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_POOLCHILDRENLIST_OFFSET UNITYSDK_OFFSET(0x9563780)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GENERATECHILDITEM_OFFSET UNITYSDK_OFFSET(0x9563440)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_FINDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x955E210)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_FINDDATAATINDEX_OFFSET UNITYSDK_OFFSET(0x955DB30)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GETSIBLINGINDEXTRAVERSALLIST_OFFSET UNITYSDK_OFFSET(0x955D910)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_SET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x9559760)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x9559750)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GETCHILD_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_CLEARPOOL_OFFSET UNITYSDK_OFFSET(0x9559F90)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x9563CD0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_TRAVERSESIBLINGINDEXLIST_OFFSET UNITYSDK_OFFSET(0x955DA50)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_BOUNDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_POPCHILDRENLIST_OFFSET UNITYSDK_OFFSET(0x9563AA0)
#define RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_FINDTRANSFORMINVISIBLECHILDREN_OFFSET UNITYSDK_OFFSET(0x9563CE0)

namespace RuntimeInspectorNamespace
{
	inline static constexpr unsigned int HierarchyData_TypeDefinitionIndex = 35628;

	class HierarchyData : public Il2CppObject
	{
	public:
		Il2CppObject* transformDataPool; // 0x0
		Il2CppObject* childrenListPool; // 0x8
		Il2CppObject* children; // 0x10
		::RuntimeInspectorNamespace::HierarchyData* parent; // 0x18
		::System::Int32 m_index; // 0x20
		::System::Int32 m_height; // 0x24
		::System::Int32 m_depth; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_CanExpand()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_CANEXPAND_OFFSET))(nullptr);
		}

		::System::Int32 get_Depth()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_DEPTH_OFFSET))(nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ChildCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_CHILDCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 IndexOf(::UnityEngine::Transform* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_.CCTOR_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::HierarchyDataRoot* get_Root()
		{
			return (return (::RuntimeInspectorNamespace::HierarchyDataRoot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_ROOT_OFFSET))(nullptr);
		}

		::System::Void RemoveChildItem(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_REMOVECHILDITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_AbsoluteIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_ABSOLUTEINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_INDEX_OFFSET))(nullptr);
		}

		::System::Boolean Refresh()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_REFRESH_OFFSET))(nullptr);
		}

		::System::Void PoolChildrenList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_POOLCHILDRENLIST_OFFSET))(nullptr);
		}

		::System::Void GenerateChildItem(::UnityEngine::Transform* arg, ::System::Int32 arg, ::RuntimeInspectorNamespace::RuntimeHierarchy* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::RuntimeInspectorNamespace::RuntimeHierarchy*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GENERATECHILDITEM_OFFSET))(arg, arg, arg, nullptr);
		}

		::RuntimeInspectorNamespace::HierarchyDataTransform* FindTransform(::UnityEngine::Transform* arg, ::UnityEngine::Transform* arg)
		{
			return (return (::RuntimeInspectorNamespace::HierarchyDataTransform*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_FINDTRANSFORM_OFFSET))(arg, arg, nullptr);
		}

		::RuntimeInspectorNamespace::HierarchyData* FindDataAtIndex(::System::Int32 arg)
		{
			return (return (::RuntimeInspectorNamespace::HierarchyData*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_FINDDATAATINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void GetSiblingIndexTraversalList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GETSIBLINGINDEXTRAVERSALLIST_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsExpanded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_SET_ISEXPANDED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsActive()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_ISACTIVE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsExpanded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_ISEXPANDED_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* GetChild(::System::Int32 arg)
		{
			return (return (::UnityEngine::Transform*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GETCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void ClearPool()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_CLEARPOOL_OFFSET))(nullptr);
		}

		::System::Int32 get_Height()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_HEIGHT_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::HierarchyData* TraverseSiblingIndexList(Il2CppObject* arg)
		{
			return (return (::RuntimeInspectorNamespace::HierarchyData*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_TRAVERSESIBLINGINDEXLIST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_BoundTransform()
		{
			return (return (::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_GET_BOUNDTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void PopChildrenList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_POPCHILDRENLIST_OFFSET))(nullptr);
		}

		::RuntimeInspectorNamespace::HierarchyDataTransform* FindTransformInVisibleChildren(::UnityEngine::Transform* arg, ::System::Int32 arg)
		{
			return (return (::RuntimeInspectorNamespace::HierarchyDataTransform*(*)(::UnityEngine::Transform*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RUNTIMEINSPECTORNAMESPACE_HIERARCHYDATA_FINDTRANSFORMINVISIBLECHILDREN_OFFSET))(arg, arg, nullptr);
		}

	};
}

