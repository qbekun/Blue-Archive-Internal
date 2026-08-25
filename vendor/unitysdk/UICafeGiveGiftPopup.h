#pragma once
#include "unitysdk.h"

class MXButton;
class UILabel;
class UITexture;
class UIShopMaxMinButtonController;
class ItemObject;
class CharacterObject;

#define UICAFEGIVEGIFTPOPUP_SETITEMINFO_OFFSET UNITYSDK_OFFSET(0x227EB60)
#define UICAFEGIVEGIFTPOPUP_SETCHARACTERINFO_OFFSET UNITYSDK_OFFSET(0x227ED70)
#define UICAFEGIVEGIFTPOPUP_ONCLICKCONFIRM_OFFSET UNITYSDK_OFFSET(0x227EF60)
#define UICAFEGIVEGIFTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x227F0A0)
#define UICAFEGIVEGIFTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x227F2B0)
#define UICAFEGIVEGIFTPOPUP_GET_TARGETCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x227F2C0)
#define UICAFEGIVEGIFTPOPUP_SET_TARGETCHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x227F2D0)
#define UICAFEGIVEGIFTPOPUP_GET_SELECTABLEMAX_OFFSET UNITYSDK_OFFSET(0x227F2E0)
#define UICAFEGIVEGIFTPOPUP_SET_SELECTEDITEMSERVERID_OFFSET UNITYSDK_OFFSET(0x227F2F0)
#define UICAFEGIVEGIFTPOPUP_GET_SELECTEDITEMSERVERID_OFFSET UNITYSDK_OFFSET(0x227F300)
#define UICAFEGIVEGIFTPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x227F310)
#define UICAFEGIVEGIFTPOPUP_SETSELECTABLEMAX_OFFSET UNITYSDK_OFFSET(0x227F320)
#define UICAFEGIVEGIFTPOPUP_GET_SELECTEDITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x227F080)
#define UICAFEGIVEGIFTPOPUP_SET_SELECTABLEMAX_OFFSET UNITYSDK_OFFSET(0x227F620)
#define UICAFEGIVEGIFTPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x227F630)

	inline static constexpr unsigned int UICafeGiveGiftPopup_TypeDefinitionIndex = 4655;

	class UICafeGiveGiftPopup : public Il2CppObject
	{
	public:
		MXButton* cancel; // 0xD8
		MXButton* confirm; // 0xE0
		UILabel* info; // 0xE8
		UITexture* texture; // 0xF0
		UILabel* itemName; // 0xF8
		UILabel* itemCount; // 0x100
		UIShopMaxMinButtonController* maxMinButtonController; // 0x108
		UILabel* characterName; // 0x110
		UITexture* characterTexture; // 0x118
		UILabel* characterFavorRank; // 0x120
		::System::Int64 _SelectableMax_k__BackingField; // 0x128
		::System::Int64 _SelectedItemServerId_k__BackingField; // 0x130
		::System::Int64 _TargetCharacterUniqueId_k__BackingField; // 0x138

		::System::Void SetItemInfo(ItemObject* arg, CharacterObject* arg2)
		{
			((::System::Void(*)(ItemObject*, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_SETITEMINFO_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetCharacterInfo(CharacterObject* arg)
		{
			((::System::Void(*)(CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_SETCHARACTERINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickConfirm()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_ONCLICKCONFIRM_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetCharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_GET_TARGETCHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_TargetCharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_SET_TARGETCHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SelectableMax()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_GET_SELECTABLEMAX_OFFSET))(nullptr);
		}

		::System::Void set_SelectedItemServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_SET_SELECTEDITEMSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_SelectedItemServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_GET_SELECTEDITEMSERVERID_OFFSET))(nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void SetSelectableMax(ItemObject* arg, CharacterObject* arg2)
		{
			((::System::Void(*)(ItemObject*, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_SETSELECTABLEMAX_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int64 get_SelectedItemCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_GET_SELECTEDITEMCOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SelectableMax(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_SET_SELECTABLEMAX_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::System::Int64 arg, CharacterObject* arg2)
		{
			((::System::Void(*)(::System::Int64, CharacterObject*, ::PVOID))((::PBYTE)hIl2Cpp + UICAFEGIVEGIFTPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

