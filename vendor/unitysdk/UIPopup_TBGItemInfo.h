#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
class UIGrid;
class UIScrollView;
class UISmallParcelCard;
class UIAdmissionDisplay;
class MXButton;
namespace MX::Data { class ITBGItemInfo; }
namespace MX::Data { class ITBGThemaRewardInfo; }
namespace MX::TableBoard { class TBGThemaClearRecord; }

#define UIPOPUP_TBGITEMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB3C390)
#define UIPOPUP_TBGITEMINFO_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0xB3C3A0)
#define UIPOPUP_TBGITEMINFO_SETITEMDATA_OFFSET UNITYSDK_OFFSET(0xB3C430)
#define UIPOPUP_TBGITEMINFO_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0xB3C970)
#define UIPOPUP_TBGITEMINFO_ONOPENED_OFFSET UNITYSDK_OFFSET(0xB3CA00)
#define UIPOPUP_TBGITEMINFO_SETREWARDOPTIONDATA_OFFSET UNITYSDK_OFFSET(0xB3CA90)
#define UIPOPUP_TBGITEMINFO_AWAKE_OFFSET UNITYSDK_OFFSET(0xB3CDA0)
#define UIPOPUP_TBGITEMINFO_SETSWEEPDATA_OFFSET UNITYSDK_OFFSET(0xB3D230)
#define UIPOPUP_TBGITEMINFO_ONCLICKUSE_OFFSET UNITYSDK_OFFSET(0xB3DD80)
#define UIPOPUP_TBGITEMINFO_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0xB3DC90)
#define UIPOPUP_TBGITEMINFO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB3DE10)
#define UIPOPUP_TBGITEMINFO_ONCLOSED_OFFSET UNITYSDK_OFFSET(0xB3DE40)

	inline static constexpr unsigned int UIPopup_TBGItemInfo_TypeDefinitionIndex = 8322;

	class UIPopup_TBGItemInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* ItemSet; // 0xD8
		::UnityEngine::GameObject* SweepSet; // 0xE0
		::UnityEngine::GameObject* OneButtonSet; // 0xE8
		::UnityEngine::GameObject* TwoButtonSet; // 0xF0
		UILabel* ItemTitle; // 0xF8
		UILabel* ItemSubTitle; // 0x100
		UITexture* ItemIcon; // 0x108
		UILabel* ItemName; // 0x110
		UILabel* ItemDesc; // 0x118
		UILabel* NoticeLabel; // 0x120
		UILabel* CancelLabel; // 0x128
		UILabel* OkLabel; // 0x130
		UIGrid* RewardGrid; // 0x138
		UIScrollView* RewardListScrollView; // 0x140
		UISmallParcelCard* rewardParcelPref; // 0x148
		UILabel* SweepDescLabel; // 0x150
		Il2CppObject* rewardParcels; // 0x158
		UIAdmissionDisplay* CostDisplay; // 0x160
		MXButton* CloseButton; // 0x168
		MXButton* OkButton; // 0x170
		MXButton* UseButton; // 0x178
		MXButton* CancelButton; // 0x180
		MXButton* OneButton; // 0x188
		::System::Action* onOk; // 0x190
		::System::Action* onUse; // 0x198
		::System::Action* onCancel; // 0x1A0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void SetItemData(::MX::Data::ITBGItemInfo* arg)
		{
			((::System::Void(*)(::MX::Data::ITBGItemInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_SETITEMDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void SetRewardOptionData(::MX::Data::ITBGItemInfo* arg, ::System::Action* arg2, ::System::Action* arg3, ::System::Action* arg4)
		{
			((::System::Void(*)(::MX::Data::ITBGItemInfo*, ::System::Action*, ::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_SETREWARDOPTIONDATA_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetSweepData(::MX::Data::ITBGThemaRewardInfo* arg, ::MX::TableBoard::TBGThemaClearRecord* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::Data::ITBGThemaRewardInfo*, ::MX::TableBoard::TBGThemaClearRecord*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_SETSWEEPDATA_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnClickUse()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_ONCLICKUSE_OFFSET))(nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_TBGITEMINFO_ONCLOSED_OFFSET))(nullptr);
		}

	};

