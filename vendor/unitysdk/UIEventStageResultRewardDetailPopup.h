#pragma once
#include "unitysdk.h"

class MXButton;
class UITexture;
class UILabel;
class UIGrid;
class UIEventRewardDetailPopupDebuffItem;
namespace UnityEngine { class GameObject; }
class UIScrollView;
class UIEventRewardDetailPopupBonusCharacterItem;
namespace MX::Data { class EventContentStageInfo; }
class UIEventStageResultRewardSlot;
namespace MX::GameLogic::Parcel { class ParcelInfo; }
namespace MX::GameLogic::DBModel { class EventContentBonusRewardDB; }

#define UIEVENTSTAGERESULTREWARDDETAILPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0x24C4B90)
#define UIEVENTSTAGERESULTREWARDDETAILPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x24C2A90)
#define UIEVENTSTAGERESULTREWARDDETAILPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x24C5CD0)
#define UIEVENTSTAGERESULTREWARDDETAILPOPUP_SETDEBUFFBONUS_OFFSET UNITYSDK_OFFSET(0x24C4BC0)
#define UIEVENTSTAGERESULTREWARDDETAILPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x24C5F10)
#define UIEVENTSTAGERESULTREWARDDETAILPOPUP_SETCHARACTERBONUS_OFFSET UNITYSDK_OFFSET(0x24C52B0)

	inline static constexpr unsigned int UIEventStageResultRewardDetailPopup_TypeDefinitionIndex = 5904;

	class UIEventStageResultRewardDetailPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		UITexture* rewardIconTexture; // 0x20
		UILabel* rewardAmountLabel; // 0x28
		UILabel* maxDebuffBonusPercentageLabel; // 0x30
		UILabel* debuffBonusPercentageLabel; // 0x38
		UILabel* maxCharacterBonusPercentageLabel; // 0x40
		UILabel* characterBonusPercentageLabel; // 0x48
		UIGrid* debuffListGrid; // 0x50
		UIEventRewardDetailPopupDebuffItem* debuffListItemPrefab; // 0x58
		::UnityEngine::GameObject* debuffListEmptyMarkRoot; // 0x60
		UIScrollView* bonusCharacterListScrollView; // 0x68
		UIGrid* bonusCharacterListGrid; // 0x70
		UIEventRewardDetailPopupBonusCharacterItem* bonusCharacterListItemPrefab; // 0x78
		::UnityEngine::GameObject* bonusCharacterListEmptyMarkRoot; // 0x80
		Il2CppObject* debuffListItemList; // 0x88
		Il2CppObject* bonusCharacterListItemList; // 0x90

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDDETAILPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentStageInfo* arg, UIEventStageResultRewardSlot* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentStageInfo*, UIEventStageResultRewardSlot*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDDETAILPOPUP_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDDETAILPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetDebuffBonus(::MX::Data::EventContentStageInfo* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentStageInfo*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDDETAILPOPUP_SETDEBUFFBONUS_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDDETAILPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCharacterBonus(::MX::Data::EventContentStageInfo* arg, ::MX::GameLogic::Parcel::ParcelInfo* arg2, Il2CppObject* arg3, ::MX::GameLogic::DBModel::EventContentBonusRewardDB* arg4)
		{
			((::System::Void(*)(::MX::Data::EventContentStageInfo*, ::MX::GameLogic::Parcel::ParcelInfo*, Il2CppObject*, ::MX::GameLogic::DBModel::EventContentBonusRewardDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTSTAGERESULTREWARDDETAILPOPUP_SETCHARACTERBONUS_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

	};

