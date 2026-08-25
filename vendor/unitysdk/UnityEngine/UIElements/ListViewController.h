#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class ListView; }
namespace UnityEngine::UIElements { class ReusableCollectionItem; }

#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ADD_ITEMSSOURCESIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA392310)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVE_ITEMSSOURCESIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA3923B0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ADD_ITEMSADDED_OFFSET UNITYSDK_OFFSET(0xA392450)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVE_ITEMSADDED_OFFSET UNITYSDK_OFFSET(0xA3924F0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ADD_ITEMSREMOVED_OFFSET UNITYSDK_OFFSET(0xA392590)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVE_ITEMSREMOVED_OFFSET UNITYSDK_OFFSET(0xA392630)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_GET_LISTVIEW_OFFSET UNITYSDK_OFFSET(0xA3926D0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_INVOKEMAKEITEM_OFFSET UNITYSDK_OFFSET(0xA392740)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_INVOKEBINDITEM_OFFSET UNITYSDK_OFFSET(0xA392DB0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_NEEDSDRAGHANDLE_OFFSET UNITYSDK_OFFSET(0xA392F50)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ADDITEMS_OFFSET UNITYSDK_OFFSET(0xA392F60)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_MOVE_OFFSET UNITYSDK_OFFSET(0xA393A50)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0xA393DB0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVEITEMS_OFFSET UNITYSDK_OFFSET(0xA393F80)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVEITEMS_OFFSET UNITYSDK_OFFSET(0xA394400)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_RAISEONSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xA393A30)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_RAISEITEMSADDED_OFFSET UNITYSDK_OFFSET(0xA393A10)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_RAISEITEMSREMOVED_OFFSET UNITYSDK_OFFSET(0xA3943E0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ADDTOARRAY_OFFSET UNITYSDK_OFFSET(0xA393880)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVEFROMARRAY_OFFSET UNITYSDK_OFFSET(0xA3941F0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_SWAP_OFFSET UNITYSDK_OFFSET(0xA393BB0)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ENSUREITEMSOURCECANBERESIZED_OFFSET UNITYSDK_OFFSET(0xA393760)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA394630)
#define UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER__ADDITEMS_G__ISGENERICLIST|14_0_OFFSET UNITYSDK_OFFSET(0xA393960)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int ListViewController_TypeDefinitionIndex = 30281;

	class ListViewController : public Il2CppObject
	{
	public:
		::System::Action* itemsSourceSizeChanged; // 0x30
		Il2CppObject* itemsAdded; // 0x38
		Il2CppObject* itemsRemoved; // 0x40

		::System::Void add_itemsSourceSizeChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ADD_ITEMSSOURCESIZECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_itemsSourceSizeChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVE_ITEMSSOURCESIZECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_itemsAdded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ADD_ITEMSADDED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_itemsAdded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVE_ITEMSADDED_OFFSET))(arg, nullptr);
		}

		::System::Void add_itemsRemoved(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ADD_ITEMSREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_itemsRemoved(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVE_ITEMSREMOVED_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::ListView* get_listView()
		{
			return (return (::UnityEngine::UIElements::ListView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_GET_LISTVIEW_OFFSET))(nullptr);
		}

		::System::Void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ReusableCollectionItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_INVOKEMAKEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ReusableCollectionItem*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_INVOKEBINDITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean NeedsDragHandle(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_NEEDSDRAGHANDLE_OFFSET))(arg, nullptr);
		}

		::System::Void AddItems(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ADDITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void Move(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_MOVE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RemoveItem(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVEITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveItems(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVEITEMS_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseOnSizeChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_RAISEONSIZECHANGED_OFFSET))(nullptr);
		}

		::System::Void RaiseItemsAdded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_RAISEITEMSADDED_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseItemsRemoved(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_RAISEITEMSREMOVED_OFFSET))(arg, nullptr);
		}

		::System::Array* AddToArray(::System::Array* arg, ::System::Int32 arg)
		{
			return (return (::System::Array*(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ADDTOARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Array* RemoveFromArray(::System::Array* arg, Il2CppObject* arg)
		{
			return (return (::System::Array*(*)(::System::Array*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_REMOVEFROMARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Swap(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_SWAP_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EnsureItemSourceCanBeResized()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_ENSUREITEMSOURCECANBERESIZED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _AddItems_g__IsGenericList|14_0(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_LISTVIEWCONTROLLER__ADDITEMS_G__ISGENERICLIST|14_0_OFFSET))(arg, nullptr);
		}

	};
}

