#pragma once
#include "../unitysdk.h"

class ButtonActivator;
class UITexture;
class MXButton;
namespace MXUnderCover { class UIUCInvenItemInfo; }
namespace UnityEngine { class GameObject; }
namespace MXUnderCover { class UCInventoryModel; }
namespace MXUnderCover { class ItemDataAsset; }
namespace FlatData { class UnderCoverItemCategory; }

#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_REFRESHITEMLIST_OFFSET UNITYSDK_OFFSET(0xDC8020)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY___N__0_OFFSET UNITYSDK_OFFSET(0xDC8BB0)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_ONCLICKDETAIL_OFFSET UNITYSDK_OFFSET(0xDC8BC0)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_CO_LOADING_OFFSET UNITYSDK_OFFSET(0xDC8DF0)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY__AWAKE_B__23_2_OFFSET UNITYSDK_OFFSET(0xDC8E80)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_GETCURRENTITEMDATAS_OFFSET UNITYSDK_OFFSET(0xDC83F0)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_CACHEINVEN_OFFSET UNITYSDK_OFFSET(0xDC8F00)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY__REFRESHSELECTINFO_G__SETTAG|30_0_OFFSET UNITYSDK_OFFSET(0xDC9290)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_REFRESHSELECTINFO_OFFSET UNITYSDK_OFFSET(0xDC8660)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_ONCLICKCATEGORY_OFFSET UNITYSDK_OFFSET(0xDC8E90)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY__AWAKE_B__23_1_OFFSET UNITYSDK_OFFSET(0xDC9960)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_ONBACK_OFFSET UNITYSDK_OFFSET(0xDC9970)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_SETINFOOBJECTS_OFFSET UNITYSDK_OFFSET(0xDC84F0)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_SET_CLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xDC9A00)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY__AWAKE_B__23_0_OFFSET UNITYSDK_OFFSET(0xDC9A20)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY__REFRESHITEMLIST_B__29_0_OFFSET UNITYSDK_OFFSET(0xDC9A30)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_AWAKE_OFFSET UNITYSDK_OFFSET(0xDC9A90)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_SETSCROLLOBJECTS_OFFSET UNITYSDK_OFFSET(0xDC8470)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xDC9E70)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCA070)
#define MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_GET_CLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xDCA170)

namespace MXUnderCover
{
	inline static constexpr unsigned int UIPopup_UndercoverInventory_TypeDefinitionIndex = 10037;

	class UIPopup_UndercoverInventory : public Il2CppObject
	{
	public:
		ButtonActivator* ConsumableButton; // 0xD8
		ButtonActivator* SkillButton; // 0xE0
		ButtonActivator* CollectionButton; // 0xE8
		UITexture* itemTexture; // 0xF0
		MXButton* detailButton; // 0xF8
		::Il2CppArray<::System::Object*>* itemTags; // 0x100
		::MXUnderCover::UIUCInvenItemInfo* ConsumableInfoSet; // 0x108
		::MXUnderCover::UIUCInvenItemInfo* SkillInfoSet; // 0x110
		::MXUnderCover::UIUCInvenItemInfo* CollectionInfoSet; // 0x118
		::Il2CppArray<::System::Object*>* itemGroups; // 0x120
		::Il2CppArray<::System::Object*>* infoObjects; // 0x128
		::UnityEngine::GameObject* infoEmptyObject; // 0x130
		::Il2CppArray<::System::Object*>* scrollObjects; // 0x138
		::UnityEngine::GameObject* scrollEmptyObject; // 0x140
		::System::Action* _CloseCallback_k__BackingField; // 0x148
		::MXUnderCover::UCInventoryModel* inven; // 0x150
		Il2CppObject* consumableItemDatas; // 0x158
		Il2CppObject* skillItemDatas; // 0x160
		Il2CppObject* collectionItemDatas; // 0x168
		::MXUnderCover::ItemDataAsset* selectedItemData; // 0x170

		::System::Void RefreshItemList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_REFRESHITEMLIST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* __n__0()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY___N__0_OFFSET))(nullptr);
		}

		::System::Void OnClickDetail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_ONCLICKDETAIL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Co_Loading()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_CO_LOADING_OFFSET))(nullptr);
		}

		::System::Void _Awake_b__23_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY__AWAKE_B__23_2_OFFSET))(nullptr);
		}

		Il2CppObject* GetCurrentItemDatas()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_GETCURRENTITEMDATAS_OFFSET))(nullptr);
		}

		::System::Void CacheInven()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_CACHEINVEN_OFFSET))(nullptr);
		}

		::System::Void _RefreshSelectInfo_g__SetTag|30_0(::System::Boolean arg, <>c__DisplayClass30_0&* arg2)
		{
			((::System::Void(*)(::System::Boolean, <>c__DisplayClass30_0&*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY__REFRESHSELECTINFO_G__SETTAG|30_0_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RefreshSelectInfo(::MXUnderCover::ItemDataAsset* arg)
		{
			((::System::Void(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_REFRESHSELECTINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCategory(::FlatData::UnderCoverItemCategory* arg)
		{
			((::System::Void(*)(::FlatData::UnderCoverItemCategory*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_ONCLICKCATEGORY_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__23_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY__AWAKE_B__23_1_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_ONBACK_OFFSET))(nullptr);
		}

		::System::Void SetInfoObjects(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_SETINFOOBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CloseCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_SET_CLOSECALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void _Awake_b__23_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY__AWAKE_B__23_0_OFFSET))(nullptr);
		}

		::System::Boolean _RefreshItemList_b__29_0(::MXUnderCover::ItemDataAsset* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::ItemDataAsset*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY__REFRESHITEMLIST_B__29_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetScrollObjects(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_SETSCROLLOBJECTS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickItem(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_ONCLICKITEM_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_.CTOR_OFFSET))(nullptr);
		}

		::System::Action* get_CloseCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UIPOPUP_UNDERCOVERINVENTORY_GET_CLOSECALLBACK_OFFSET))(nullptr);
		}

	};
}

