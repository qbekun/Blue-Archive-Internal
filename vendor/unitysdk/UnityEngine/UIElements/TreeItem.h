#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_UIELEMENTS_TREEITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0xA3C7E80)
#define UNITYENGINE_UIELEMENTS_TREEITEM_GET_PARENTID_OFFSET UNITYSDK_OFFSET(0xA3C7E90)
#define UNITYENGINE_UIELEMENTS_TREEITEM_GET_CHILDRENIDS_OFFSET UNITYSDK_OFFSET(0xA3C7EA0)
#define UNITYENGINE_UIELEMENTS_TREEITEM_GET_HASCHILDREN_OFFSET UNITYSDK_OFFSET(0xA3C7EB0)
#define UNITYENGINE_UIELEMENTS_TREEITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA3C7F00)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int TreeItem_TypeDefinitionIndex = 30406;

	class TreeItem : public Il2CppObject
	{
	public:
		::System::Int32 _id_k__BackingField; // 0x10
		::System::Int32 _parentId_k__BackingField; // 0x14
		Il2CppObject* _childrenIds_k__BackingField; // 0x18

		::System::Int32 get_id()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEITEM_GET_ID_OFFSET))(nullptr);
		}

		::System::Int32 get_parentId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEITEM_GET_PARENTID_OFFSET))(nullptr);
		}

		Il2CppObject* get_childrenIds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEITEM_GET_CHILDRENIDS_OFFSET))(nullptr);
		}

		::System::Boolean get_hasChildren()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEITEM_GET_HASCHILDREN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_TREEITEM_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

