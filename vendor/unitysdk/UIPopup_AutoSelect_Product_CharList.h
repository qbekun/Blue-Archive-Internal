#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class GameObject; }
class UICharacterFavorSet;
class UICharacterSecretStoneSet;
class UICharacterSort;
class UIAssistScrollViewController;
class UIAutoSelectProductNameSearch;
namespace FlatData { class AutoSelectPopupType; }
class CharacterObject;
class SortingRule;
class UIAssistSetSlot;
class NameSearchResult;

#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_REFRESHCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0xA999A0)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONCLICKCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0xA99EC0)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONSORT_OFFSET UNITYSDK_OFFSET(0xA99F50)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST__ONSORT_B__23_2_OFFSET UNITYSDK_OFFSET(0xA9ACA0)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST__ONSORT_B__23_3_OFFSET UNITYSDK_OFFSET(0xA9ADA0)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONCLICKCHARACTERLISTSLOT_OFFSET UNITYSDK_OFFSET(0xA9AEA0)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_.CTOR_OFFSET UNITYSDK_OFFSET(0xA9AF20)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_SETSELECTEDCHARACTER_OFFSET UNITYSDK_OFFSET(0xA9AA90)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_AWAKE_OFFSET UNITYSDK_OFFSET(0xA9B820)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST__ONSORT_B__23_1_OFFSET UNITYSDK_OFFSET(0xA9B9C0)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONOPENED_OFFSET UNITYSDK_OFFSET(0xA9B9F0)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_SETDATA_OFFSET UNITYSDK_OFFSET(0xA9BA60)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST__SETSELECTEDCHARACTER_G__ISPURCHASABLECHARACTER|24_0_OFFSET UNITYSDK_OFFSET(0xA9B710)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xA9C1E0)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONNAMESEARCHRESULTUPDATED_OFFSET UNITYSDK_OFFSET(0xA9C270)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONCLICKCONFIRMBUTTON_OFFSET UNITYSDK_OFFSET(0xA9C2A0)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_START_OFFSET UNITYSDK_OFFSET(0xA9C340)
#define UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA9C3D0)

	inline static constexpr unsigned int UIPopup_AutoSelect_Product_CharList_TypeDefinitionIndex = 7954;

	class UIPopup_AutoSelect_Product_CharList : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0xD8
		::UnityEngine::GameObject* characterInfoEmptyRoot; // 0xE0
		UICharacterFavorSet* characterInfoForFavor; // 0xE8
		UICharacterSecretStoneSet* characterInfoForSecretStone; // 0xF0
		UICharacterSort* characterSort; // 0xF8
		UIAssistScrollViewController* characterListScrollView; // 0x100
		::UnityEngine::GameObject* characterListEmptyRoot; // 0x108
		UIAutoSelectProductNameSearch* nameSearch; // 0x110
		::UnityEngine::GameObject* FavorBottomRoot; // 0x118
		::UnityEngine::GameObject* SecretStoneBottomRoot; // 0x120
		::FlatData::AutoSelectPopupType* popupType; // 0x128
		::System::Int64 productSelectGroupId; // 0x130
		Il2CppObject* allCharacters; // 0x138
		CharacterObject* selectedCharacter; // 0x140
		::System::Boolean characterSortInitialized; // 0x148
		Il2CppObject* onConfirmCharacter; // 0x150
		Il2CppObject* characterFavorFilterTabExcludeTypes; // 0x158
		Il2CppObject* characterGrowthFilterTabExcludeTypes; // 0x160

		::System::Void RefreshCharacterList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_REFRESHCHARACTERLIST_OFFSET))(nullptr);
		}

		::System::Void OnClickCancelButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONCLICKCANCELBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnSort(Il2CppObject* arg, SortingRule* arg2)
		{
			((::System::Void(*)(Il2CppObject*, SortingRule*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONSORT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean _OnSort_b__23_2(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST__ONSORT_B__23_2_OFFSET))(arg, nullptr);
		}

		::System::Boolean _OnSort_b__23_3(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST__ONSORT_B__23_3_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCharacterListSlot(UIAssistSetSlot* arg)
		{
			((::System::Void(*)(UIAssistSetSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONCLICKCHARACTERLISTSLOT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSelectedCharacter(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_SETSELECTEDCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean _OnSort_b__23_1(CharacterObject* arg)
		{
			return ((::System::Boolean(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST__ONSORT_B__23_1_OFFSET))(arg, nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::FlatData::AutoSelectPopupType* arg, ::System::Int64 arg2, Il2CppObject* arg3, CharacterObject* arg4)
		{
			((::System::Void(*)(::FlatData::AutoSelectPopupType*, ::System::Int64, Il2CppObject*, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_SETDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Boolean _SetSelectedCharacter_g__IsPurchasableCharacter|24_0(<>c__DisplayClass24_0&* arg)
		{
			return ((::System::Boolean(*)(<>c__DisplayClass24_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST__SETSELECTEDCHARACTER_G__ISPURCHASABLECHARACTER|24_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnNameSearchResultUpdated(NameSearchResult* arg)
		{
			((::System::Void(*)(NameSearchResult*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONNAMESEARCHRESULTUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirmButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONCLICKCONFIRMBUTTON_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_START_OFFSET))(nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_AUTOSELECT_PRODUCT_CHARLIST_ONDESTROY_OFFSET))(nullptr);
		}

	};

