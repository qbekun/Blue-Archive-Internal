#pragma once
#include "unitysdk.h"

class UILabel;
class UIGrid;
class UIScrollView;
class UISmallParcelCard;
class UIAdmissionDisplay;
class MXButton;

#define UIPOPUP_ROADPUZZLESKIPROUND_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x27C25B0)
#define UIPOPUP_ROADPUZZLESKIPROUND_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27C2640)
#define UIPOPUP_ROADPUZZLESKIPROUND_GET_REWARDPARCELS_OFFSET UNITYSDK_OFFSET(0x27C26D0)
#define UIPOPUP_ROADPUZZLESKIPROUND_ONCLOSED_OFFSET UNITYSDK_OFFSET(0x27C27C0)
#define UIPOPUP_ROADPUZZLESKIPROUND_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x27C27F0)
#define UIPOPUP_ROADPUZZLESKIPROUND_.CTOR_OFFSET UNITYSDK_OFFSET(0x27C2880)
#define UIPOPUP_ROADPUZZLESKIPROUND_SETSKIPDATA_OFFSET UNITYSDK_OFFSET(0x27C2890)
#define UIPOPUP_ROADPUZZLESKIPROUND_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27C2F90)
#define UIPOPUP_ROADPUZZLESKIPROUND_AWAKE_OFFSET UNITYSDK_OFFSET(0x27C2FC0)

	inline static constexpr unsigned int UIPopup_RoadPuzzleSkipRound_TypeDefinitionIndex = 7568;

	class UIPopup_RoadPuzzleSkipRound : public Il2CppObject
	{
	public:
		UILabel* NoticeLabel; // 0xD8
		UILabel* SweepDescLabel; // 0xE0
		UIGrid* RewardGrid; // 0xE8
		UIScrollView* RewardListScrollView; // 0xF0
		UISmallParcelCard* rewardParcelPref; // 0xF8
		UIAdmissionDisplay* CostDisplay; // 0x100
		MXButton* CloseButton; // 0x108
		MXButton* OkButton; // 0x110
		UILabel* OkLabel; // 0x118
		MXButton* CancelButton; // 0x120
		UILabel* CancelLabel; // 0x128
		Il2CppObject* rewardParcels; // 0x130
		::System::Action* onOk; // 0x138

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLESKIPROUND_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLESKIPROUND_ONOPENED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_RewardParcels()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLESKIPROUND_GET_REWARDPARCELS_OFFSET))(nullptr);
		}

		::System::Void OnClosed()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLESKIPROUND_ONCLOSED_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLESKIPROUND_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLESKIPROUND_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetSkipData(Il2CppObject* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLESKIPROUND_SETSKIPDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLESKIPROUND_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_ROADPUZZLESKIPROUND_AWAKE_OFFSET))(nullptr);
		}

	};

