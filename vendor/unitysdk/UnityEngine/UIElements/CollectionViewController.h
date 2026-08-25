#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UIElements { class BaseVerticalCollectionView; }
namespace UnityEngine::UIElements { class ReusableCollectionItem; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_ADD_ITEMSSOURCECHANGED_OFFSET UNITYSDK_OFFSET(0xA391820)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_REMOVE_ITEMSSOURCECHANGED_OFFSET UNITYSDK_OFFSET(0xA3918C0)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_ADD_ITEMINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0xA391960)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_REMOVE_ITEMINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0xA391A00)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GET_ITEMSSOURCE_OFFSET UNITYSDK_OFFSET(0xA391AA0)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_SET_ITEMSSOURCE_OFFSET UNITYSDK_OFFSET(0xA391AB0)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_SETITEMSSOURCEWITHOUTNOTIFY_OFFSET UNITYSDK_OFFSET(0xA391B20)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xA391B30)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_SETVIEW_OFFSET UNITYSDK_OFFSET(0xA391B40)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GETITEMSCOUNT_OFFSET UNITYSDK_OFFSET(0xA391BD0)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GETINDEXFORID_OFFSET UNITYSDK_OFFSET(0xA391C70)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GETIDFORINDEX_OFFSET UNITYSDK_OFFSET(0xA391C80)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GETITEMFORINDEX_OFFSET UNITYSDK_OFFSET(0xA391CC0)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_INVOKEMAKEITEM_OFFSET UNITYSDK_OFFSET(0xA391E00)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_INVOKEBINDITEM_OFFSET UNITYSDK_OFFSET(0xA391E50)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_INVOKEUNBINDITEM_OFFSET UNITYSDK_OFFSET(0xA391F20)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_INVOKEDESTROYITEM_OFFSET UNITYSDK_OFFSET(0xA391F50)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_MAKEITEM_OFFSET UNITYSDK_OFFSET(0xA391F80)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_BINDITEM_OFFSET UNITYSDK_OFFSET(0xA392060)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_UNBINDITEM_OFFSET UNITYSDK_OFFSET(0xA392260)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_DESTROYITEM_OFFSET UNITYSDK_OFFSET(0xA3922A0)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_RAISEITEMSSOURCECHANGED_OFFSET UNITYSDK_OFFSET(0xA391B00)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_RAISEITEMINDEXCHANGED_OFFSET UNITYSDK_OFFSET(0xA3922E0)
#define UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA392300)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CollectionViewController_TypeDefinitionIndex = 30280;

	class CollectionViewController : public Il2CppObject
	{
	public:
		::UnityEngine::UIElements::BaseVerticalCollectionView* m_View; // 0x10
		::System::Collections::IList* m_ItemsSource; // 0x18
		::System::Action* itemsSourceChanged; // 0x20
		Il2CppObject* itemIndexChanged; // 0x28

		::System::Void add_itemsSourceChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_ADD_ITEMSSOURCECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_itemsSourceChanged(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_REMOVE_ITEMSSOURCECHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_itemIndexChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_ADD_ITEMINDEXCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_itemIndexChanged(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_REMOVE_ITEMINDEXCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* get_itemsSource()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GET_ITEMSSOURCE_OFFSET))(nullptr);
		}

		::System::Void set_itemsSource(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_SET_ITEMSSOURCE_OFFSET))(arg, nullptr);
		}

		::System::Void SetItemsSourceWithoutNotify(::System::Collections::IList* arg)
		{
			((::System::Void(*)(::System::Collections::IList*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_SETITEMSSOURCEWITHOUTNOTIFY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::BaseVerticalCollectionView* get_view()
		{
			return (return (::UnityEngine::UIElements::BaseVerticalCollectionView*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GET_VIEW_OFFSET))(nullptr);
		}

		::System::Void SetView(::UnityEngine::UIElements::BaseVerticalCollectionView* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::BaseVerticalCollectionView*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_SETVIEW_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetItemsCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GETITEMSCOUNT_OFFSET))(nullptr);
		}

		::System::Int32 GetIndexForId(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GETINDEXFORID_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetIdForIndex(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GETIDFORINDEX_OFFSET))(arg, nullptr);
		}

		::System::Object* GetItemForIndex(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_GETITEMFORINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeMakeItem(::UnityEngine::UIElements::ReusableCollectionItem* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ReusableCollectionItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_INVOKEMAKEITEM_OFFSET))(arg, nullptr);
		}

		::System::Void InvokeBindItem(::UnityEngine::UIElements::ReusableCollectionItem* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ReusableCollectionItem*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_INVOKEBINDITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeUnbindItem(::UnityEngine::UIElements::ReusableCollectionItem* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ReusableCollectionItem*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_INVOKEUNBINDITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InvokeDestroyItem(::UnityEngine::UIElements::ReusableCollectionItem* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::ReusableCollectionItem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_INVOKEDESTROYITEM_OFFSET))(arg, nullptr);
		}

		::UnityEngine::UIElements::VisualElement* MakeItem()
		{
			return (return (::UnityEngine::UIElements::VisualElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_MAKEITEM_OFFSET))(nullptr);
		}

		::System::Void BindItem(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_BINDITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UnbindItem(::UnityEngine::UIElements::VisualElement* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_UNBINDITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void DestroyItem(::UnityEngine::UIElements::VisualElement* arg)
		{
			((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_DESTROYITEM_OFFSET))(arg, nullptr);
		}

		::System::Void RaiseItemsSourceChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_RAISEITEMSSOURCECHANGED_OFFSET))(nullptr);
		}

		::System::Void RaiseItemIndexChanged(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_RAISEITEMINDEXCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COLLECTIONVIEWCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};
}

