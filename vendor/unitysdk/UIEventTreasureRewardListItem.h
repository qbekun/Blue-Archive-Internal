#pragma once
#include "unitysdk.h"

class MXButton;
namespace UnityEngine { class Transform; }
namespace UnityEngine { class GameObject; }
class UILabel;
class UITexture;
namespace MX::Data { class EventContentTreasureCellRewardInfo; }
namespace MX::Data { class EventContentTreasureSimpleRewardInfo; }
namespace MX::Data { class EventContentTreasureRewardInfo; }

#define UIEVENTTREASUREREWARDLISTITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x24CC7F0)
#define UIEVENTTREASUREREWARDLISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x24CC910)
#define UIEVENTTREASUREREWARDLISTITEM_SETREWARDPARCEL_OFFSET UNITYSDK_OFFSET(0x24CC990)
#define UIEVENTTREASUREREWARDLISTITEM_SETTREASURECELLREWARDDATA_OFFSET UNITYSDK_OFFSET(0x24CCCD0)
#define UIEVENTTREASUREREWARDLISTITEM_ONCLICKTOTALREWARDPOPUPBUTTON_OFFSET UNITYSDK_OFFSET(0x24CCE70)
#define UIEVENTTREASUREREWARDLISTITEM_SETTREASURESIMPLEREWARDDATA_OFFSET UNITYSDK_OFFSET(0x24CD010)
#define UIEVENTTREASUREREWARDLISTITEM_SETTREASUREREWARDDATA_OFFSET UNITYSDK_OFFSET(0x24CD1D0)

	inline static constexpr unsigned int UIEventTreasureRewardListItem_TypeDefinitionIndex = 5928;

	class UIEventTreasureRewardListItem : public Il2CppObject
	{
	public:
		MXButton* totalRewardPopupBtn; // 0x18
		::UnityEngine::Transform* totalRewardPopupBtnRoot; // 0x20
		::UnityEngine::GameObject* treasureRewardRoot; // 0x28
		UILabel* treasureName; // 0x30
		UILabel* treasureRound; // 0x38
		UITexture* treasureImage; // 0x40
		::UnityEngine::GameObject* cellRewardRoot; // 0x48
		UILabel* cellInfoName; // 0x50
		UILabel* cellRound; // 0x58
		::UnityEngine::GameObject* simpleRewardRoot; // 0x60
		UILabel* simpleRound; // 0x68
		Il2CppObject* smallParcelCard; // 0x70
		Il2CppObject* showMoreRewardList; // 0x78

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTITEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRewardParcel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTITEM_SETREWARDPARCEL_OFFSET))(nullptr);
		}

		::System::Void SetTreasureCellRewardData(::MX::Data::EventContentTreasureCellRewardInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentTreasureCellRewardInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTITEM_SETTREASURECELLREWARDDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnClicktotalRewardPopupButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTITEM_ONCLICKTOTALREWARDPOPUPBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetTreasureSimpleRewardData(::MX::Data::EventContentTreasureSimpleRewardInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentTreasureSimpleRewardInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTITEM_SETTREASURESIMPLEREWARDDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTreasureRewardData(::MX::Data::EventContentTreasureRewardInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentTreasureRewardInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTREASUREREWARDLISTITEM_SETTREASUREREWARDDATA_OFFSET))(arg, arg2, nullptr);
		}

	};

