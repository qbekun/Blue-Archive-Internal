#pragma once
#include "unitysdk.h"

class UIRaidBossInfo;
class MXButton;
class UITexture;
namespace MX::GameLogic::DBModel { class RaidDB; }
class UIPopup_PermanentRaidEnter;

#define UIPERMANENTRAIDROOMLISTSCROLLVIEWELEMENT__ONRAIDENTERBUTTONCLICK_B__8_0_OFFSET UNITYSDK_OFFSET(0x26F9FE0)
#define UIPERMANENTRAIDROOMLISTSCROLLVIEWELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26FA140)
#define UIPERMANENTRAIDROOMLISTSCROLLVIEWELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x26FA180)
#define UIPERMANENTRAIDROOMLISTSCROLLVIEWELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x26FA3A0)
#define UIPERMANENTRAIDROOMLISTSCROLLVIEWELEMENT_ONRAIDENTERBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x26FA680)

	inline static constexpr unsigned int UIPermanentRaidRoomListScrollViewElement_TypeDefinitionIndex = 7044;

	class UIPermanentRaidRoomListScrollViewElement : public ::System::Xml::XPath::XPathItem
	{
	public:
		UIRaidBossInfo* raidBossInfo; // 0x28
		MXButton* enterButton; // 0x30
		MXButton* reEnterButton; // 0x38
		UITexture* bossTopologyBG; // 0x40
		::System::Int64 _stageId; // 0x48
		::MX::GameLogic::DBModel::RaidDB* _raidDB; // 0x50

		::System::Void _OnRaidEnterButtonClick_b__8_0(UIPopup_PermanentRaidEnter* arg)
		{
			((::System::Void(*)(UIPopup_PermanentRaidEnter*, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDROOMLISTSCROLLVIEWELEMENT__ONRAIDENTERBUTTONCLICK_B__8_0_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDROOMLISTSCROLLVIEWELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDROOMLISTSCROLLVIEWELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDROOMLISTSCROLLVIEWELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnRaidEnterButtonClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPERMANENTRAIDROOMLISTSCROLLVIEWELEMENT_ONRAIDENTERBUTTONCLICK_OFFSET))(nullptr);
		}

	};

