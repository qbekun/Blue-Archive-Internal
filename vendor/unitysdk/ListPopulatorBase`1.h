#pragma once
#include "unitysdk.h"

class UIGrid;
class UIScrollView;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LISTPOPULATORBASE`1_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_GETLISTUNITPARENTGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_GET_CELLHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_GET_DIRECTIONMODIFIER_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_CLEARPOOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_ONLISTUNITVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_AWAKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_GETITEMFROMPOOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_PREPARELOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_GET_CURRENTDRAGMOMENTUM_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_ITEMVISIBILITYCHANGES_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_GETLISTUNITPARENTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_ONDRAGFINISHED_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_INITLISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_ADDITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_REFRESHPOOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_INITLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_ADDITEMPOOL_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_INITTABLEVIEW_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_CANREPOPULATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_CREATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_PREPARELISTITEMWITHINDEX_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_INITAFTERITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_GET_ISTOPALIGN_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_CHECKUNITSANDREPOPULATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_PREPAREADDEDUNITPOSITION_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_GETPANEL_OFFSET UNITYSDK_OFFSET(0x000000)
#define LISTPOPULATORBASE`1_ONDRATSTARTED_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int ListPopulatorBase`1_TypeDefinitionIndex = 8840;

	class ListPopulatorBase`1 : public Il2CppObject
	{
	public:
		Il2CppObject* itemPrefab; // 0x0
		UIGrid* grid; // 0x0
		UIScrollView* scrollView; // 0x0
		::System::Int32 poolSize; // 0x0
		::System::Int32 extraBuffer; // 0x0
		Il2CppObject* itemPool; // 0x0
		::System::Int32 startIndex; // 0x0
		Il2CppObject* dataTracker; // 0x0
		::System::Int32 TotalItemCount; // 0x0
		::System::Single prevScrollBarValue; // 0x0

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_ONDESTROY_OFFSET))(nullptr);
		}

		::UnityEngine::GameObject* GetListUnitParentGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_GETLISTUNITPARENTGAMEOBJECT_OFFSET))(nullptr);
		}

		::System::Single get_CellHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_GET_CELLHEIGHT_OFFSET))(nullptr);
		}

		::System::Int32 get_DirectionModifier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_GET_DIRECTIONMODIFIER_OFFSET))(nullptr);
		}

		::System::Void ClearPool()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_CLEARPOOL_OFFSET))(nullptr);
		}

		::System::Void OnListUnitVisibilityChanged(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_ONLISTUNITVISIBILITYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_AWAKE_OFFSET))(nullptr);
		}

		Il2CppObject* GetItemFromPool(::System::Int32 arg)
		{
			return ((Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_GETITEMFROMPOOL_OFFSET))(arg, nullptr);
		}

		::System::Void PrepareLocalPosition(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_PREPARELOCALPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single get_CurrentDragMomentum()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_GET_CURRENTDRAGMOMENTUM_OFFSET))(nullptr);
		}

		::System::Void ItemVisibilityChanges(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_ITEMVISIBILITYCHANGES_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* GetListUnitParentTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_GETLISTUNITPARENTTRANSFORM_OFFSET))(nullptr);
		}

		::System::Void OnDragFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_ONDRAGFINISHED_OFFSET))(nullptr);
		}

		::System::Void InitListItemWithIndex(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_INITLISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void AddItem(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_ADDITEM_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshPool()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_REFRESHPOOL_OFFSET))(nullptr);
		}

		::System::Void InitLocalPosition(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_INITLOCALPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void AddItemPool(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_ADDITEMPOOL_OFFSET))(arg, nullptr);
		}

		::System::Void InitTableView(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_INITTABLEVIEW_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanRepopulate(::System::Single arg, ::System::Int32 arg2, Il2CppObject* arg3, Il2CppObject* arg4)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Int32, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_CANREPOPULATE_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		Il2CppObject* Create(Il2CppObject* arg, ::System::Int32 arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_CREATE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void PrepareListItemWithIndex(Il2CppObject* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_PREPARELISTITEMWITHINDEX_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void InitAfterItemCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_INITAFTERITEMCOUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsTopAlign()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_GET_ISTOPALIGN_OFFSET))(nullptr);
		}

		::System::Void CheckUnitsAndRepopulate(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_CHECKUNITSANDREPOPULATE_OFFSET))(arg, nullptr);
		}

		::System::Void SetItemData(Il2CppObject* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_SETITEMDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareAddedUnitPosition(Il2CppObject* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_PREPAREADDEDUNITPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		UIScrollView* GetPanel()
		{
			return ((UIScrollView*(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_GETPANEL_OFFSET))(nullptr);
		}

		::System::Void OnDratStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LISTPOPULATORBASE`1_ONDRATSTARTED_OFFSET))(nullptr);
		}

	};

