#pragma once
#include "unitysdk.h"

class UITexture;
class UISprite;
class UILabel;
namespace UnityEngine { class GameObject; }
class UIParcelCardRewardTag;
class MXButton;
class TooltipButton;
namespace MX::GameLogic::DBModel { class ShopCashProductSelectionDB; }
class UIDragScrollView;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace FlatData { class RewardTag; }
class UIScrollView;

#define UISMALLPARCELCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x2345EE0)
#define UISMALLPARCELCARD_ONCLICK_OFFSET UNITYSDK_OFFSET(0x2346000)
#define UISMALLPARCELCARD_SETSELECTABLE_OFFSET UNITYSDK_OFFSET(0x2346020)
#define UISMALLPARCELCARD_SET_SELECTIONDB_OFFSET UNITYSDK_OFFSET(0x2346210)
#define UISMALLPARCELCARD_GET_TOOLTIPBUTTON_OFFSET UNITYSDK_OFFSET(0x2345F70)
#define UISMALLPARCELCARD_GET_SELECTIONSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x2346220)
#define UISMALLPARCELCARD_GET_SELECTIONDB_OFFSET UNITYSDK_OFFSET(0x2346230)
#define UISMALLPARCELCARD_GET_PARCELCARDREWARDTAG_OFFSET UNITYSDK_OFFSET(0x2346240)
#define UISMALLPARCELCARD_SETGIFTPREFERENCEICON_OFFSET UNITYSDK_OFFSET(0x23462B0)
#define UISMALLPARCELCARD_GET_ISSELECTPARCEL_OFFSET UNITYSDK_OFFSET(0x2346420)
#define UISMALLPARCELCARD_SETCAMPAIGNTAGFORREWARDONCEONLY_OFFSET UNITYSDK_OFFSET(0x2346430)
#define UISMALLPARCELCARD_SET_ISSELECTPARCEL_OFFSET UNITYSDK_OFFSET(0x23465A0)
#define UISMALLPARCELCARD_SET_ISTOOLTIPENABLE_OFFSET UNITYSDK_OFFSET(0x23465B0)
#define UISMALLPARCELCARD_INIT_OFFSET UNITYSDK_OFFSET(0x2346640)
#define UISMALLPARCELCARD_SET_SELECTIONSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x2346D40)
#define UISMALLPARCELCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2346D50)
#define UISMALLPARCELCARD_CACHESELECTIONDB_OFFSET UNITYSDK_OFFSET(0x2346D60)
#define UISMALLPARCELCARD_HIDECOUNTLABEL_OFFSET UNITYSDK_OFFSET(0x2346E50)
#define UISMALLPARCELCARD_SETCOUNTLABEL_OFFSET UNITYSDK_OFFSET(0x2346EA0)
#define UISMALLPARCELCARD_SETCALLBACKLISTENER_OFFSET UNITYSDK_OFFSET(0x2346F30)
#define UISMALLPARCELCARD_RESETSELECTINFO_OFFSET UNITYSDK_OFFSET(0x2346F50)
#define UISMALLPARCELCARD_SETDISABLED_OFFSET UNITYSDK_OFFSET(0x2346CC0)
#define UISMALLPARCELCARD_GET_ISTOOLTIPENABLE_OFFSET UNITYSDK_OFFSET(0x2346F90)
#define UISMALLPARCELCARD_SETDRAGSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x2347010)
#define UISMALLPARCELCARD_INITSELECTABLE_OFFSET UNITYSDK_OFFSET(0x23470D0)

	inline static constexpr unsigned int UISmallParcelCard_TypeDefinitionIndex = 5003;

	class UISmallParcelCard : public Il2CppObject
	{
	public:
		UITexture* Texture; // 0x18
		UISprite* Rarity; // 0x20
		UILabel* CountLabel; // 0x28
		::UnityEngine::GameObject* disabled; // 0x30
		UIParcelCardRewardTag* parcelCardRewardTag; // 0x38
		::UnityEngine::GameObject* overlayTagObject; // 0x40
		::UnityEngine::GameObject* overlaySelectable; // 0x48
		::UnityEngine::GameObject* selectableTag; // 0x50
		::UnityEngine::GameObject* expireTimeTag; // 0x58
		::UnityEngine::GameObject* giftPreferenceTag; // 0x60
		UISprite* giftPreferenceIcon; // 0x68
		MXButton* selectableButton; // 0x70
		TooltipButton* tooltipButton; // 0x78
		::MX::GameLogic::DBModel::ShopCashProductSelectionDB* _SelectionDB_k__BackingField; // 0x80
		::System::Boolean _IsSelectParcel_k__BackingField; // 0x88
		::System::Int32 _SelectionSlotIndex_k__BackingField; // 0x8C
		Il2CppObject* onClickCallback; // 0x90
		UIDragScrollView* dragScrollView; // 0x98

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void SetSelectable(::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_SETSELECTABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void set_SelectionDB(::MX::GameLogic::DBModel::ShopCashProductSelectionDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ShopCashProductSelectionDB*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_SET_SELECTIONDB_OFFSET))(arg, nullptr);
		}

		TooltipButton* get_TooltipButton()
		{
			return ((TooltipButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_GET_TOOLTIPBUTTON_OFFSET))(nullptr);
		}

		::System::Int32 get_SelectionSlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_GET_SELECTIONSLOTINDEX_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ShopCashProductSelectionDB* get_SelectionDB()
		{
			return ((::MX::GameLogic::DBModel::ShopCashProductSelectionDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_GET_SELECTIONDB_OFFSET))(nullptr);
		}

		UIParcelCardRewardTag* get_ParcelCardRewardTag()
		{
			return ((UIParcelCardRewardTag*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_GET_PARCELCARDREWARDTAG_OFFSET))(nullptr);
		}

		::System::Void SetGiftPreferenceIcon(::MX::GameLogic::Parcel::ParcelInfo* arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_SETGIFTPREFERENCEICON_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsSelectParcel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_GET_ISSELECTPARCEL_OFFSET))(nullptr);
		}

		::System::Void SetCampaignTagForRewardOnceOnly(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_SETCAMPAIGNTAGFORREWARDONCEONLY_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsSelectParcel(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_SET_ISSELECTPARCEL_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsTooltipEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_SET_ISTOOLTIPENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::MX::GameLogic::Parcel::ParcelInfo* arg, ::FlatData::RewardTag* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelInfo*, ::FlatData::RewardTag*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_INIT_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void set_SelectionSlotIndex(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_SET_SELECTIONSLOTINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CacheSelectionDB(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_CACHESELECTIONDB_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void HideCountLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_HIDECOUNTLABEL_OFFSET))(nullptr);
		}

		::System::Void SetCountLabel(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_SETCOUNTLABEL_OFFSET))(arg, nullptr);
		}

		::System::Void SetCallbackListener(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_SETCALLBACKLISTENER_OFFSET))(arg, nullptr);
		}

		::System::Void ResetSelectInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_RESETSELECTINFO_OFFSET))(nullptr);
		}

		::System::Void SetDisabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_SETDISABLED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTooltipEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_GET_ISTOOLTIPENABLE_OFFSET))(nullptr);
		}

		::System::Void SetDragScrollView(UIScrollView* arg)
		{
			((::System::Void(*)(UIScrollView*, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_SETDRAGSCROLLVIEW_OFFSET))(arg, nullptr);
		}

		::System::Void InitSelectable(::System::Int64 arg, ::System::Int64 arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISMALLPARCELCARD_INITSELECTABLE_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

