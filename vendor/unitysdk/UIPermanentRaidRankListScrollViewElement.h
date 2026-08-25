#pragma once
#include "unitysdk.h"

class UICharacterCard;
class UILabel;
class UIEmblemParcel;
namespace UnityEngine { class Transform; }
class UIRaidDifficultyTag;
class MXButton;
namespace MX::GameLogic::DBModel { class PermanentRaidBestScoreHistoryDB; }
class UIPopup_ClearDeckGroupDetail;

#define UIPERMANENTRAIDRANKLISTSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26F93C0)
#define UIPERMANENTRAIDRANKLISTSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x26F9400)
#define UIPERMANENTRAIDRANKLISTSCROLLVIEWELEMENT_ONDETAILBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26F9870)
#define UIPERMANENTRAIDRANKLISTSCROLLVIEWELEMENT__ONDETAILBUTTONCLICK_B__14_0_OFFSET UNITYSDK_OFFSET(0x26F9950)
#define UIPERMANENTRAIDRANKLISTSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26F9990)

	inline static constexpr unsigned int UIPermanentRaidRankListScrollViewElement_TypeDefinitionIndex = 7041;

	class UIPermanentRaidRankListScrollViewElement : public ::System::Xml::Serialization::UnreferencedObjectEventHandler
	{
	public:
		UICharacterCard* characterCard; // 0x28
		UILabel* levelLabel; // 0x30
		UILabel* nameLabel; // 0x38
		UIEmblemParcel* emblemParcel; // 0x40
		UILabel* rankLabel; // 0x48
		::UnityEngine::Transform* difficultyLabelTransform; // 0x50
		UIRaidDifficultyTag* difficultyTag; // 0x58
		UILabel* pointLabel; // 0x60
		::Il2CppArray<::System::Object*>* mainCards; // 0x68
		::Il2CppArray<::System::Object*>* supporterCards; // 0x70
		MXButton* detailButton; // 0x78
		::MX::GameLogic::DBModel::PermanentRaidBestScoreHistoryDB* _db; // 0x80

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDRANKLISTSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::GameLogic::DBModel::PermanentRaidBestScoreHistoryDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::PermanentRaidBestScoreHistoryDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDRANKLISTSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnDetailButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDRANKLISTSCROLLVIEWELEMENT_ONDETAILBUTTONCLICK_OFFSET))(nullptr);
		}

		::System::Void _OnDetailButtonClick_b__14_0(UIPopup_ClearDeckGroupDetail* arg)
		{
			((::System::Void(*)(UIPopup_ClearDeckGroupDetail*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDRANKLISTSCROLLVIEWELEMENT__ONDETAILBUTTONCLICK_B__14_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDRANKLISTSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

	};

