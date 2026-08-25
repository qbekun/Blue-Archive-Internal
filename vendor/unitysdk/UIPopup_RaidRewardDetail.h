#pragma once
#include "unitysdk.h"

class UILabel;
class RaidSeasonRewardScrollViewController;
class RaidRewardSubTabController;
class UIRaidRewardPopupRedDotController;
namespace UnityEngine { class GameObject; }
class MXButton;
namespace FlatData { class ContentType; }
namespace MX::NetworkProtocol { class EliminateRaidLimitedRewardResponse; }
class RaidRewardSubTab;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIPOPUP_RAIDREWARDDETAIL_INITLIMITEDRANKING_OFFSET UNITYSDK_OFFSET(0x279EB60)
#define UIPOPUP_RAIDREWARDDETAIL_.CTOR_OFFSET UNITYSDK_OFFSET(0x279F610)
#define UIPOPUP_RAIDREWARDDETAIL_START_OFFSET UNITYSDK_OFFSET(0x279F620)
#define UIPOPUP_RAIDREWARDDETAIL__ONCLICKREWARD_B__19_0_OFFSET UNITYSDK_OFFSET(0x279F670)
#define UIPOPUP_RAIDREWARDDETAIL_ONSUBTABCHANGED_OFFSET UNITYSDK_OFFSET(0x279F890)
#define UIPOPUP_RAIDREWARDDETAIL_GET_CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x27A0670)
#define UIPOPUP_RAIDREWARDDETAIL_INITRANKING_OFFSET UNITYSDK_OFFSET(0x279F8C0)
#define UIPOPUP_RAIDREWARDDETAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x27A0680)
#define UIPOPUP_RAIDREWARDDETAIL_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27A0870)
#define UIPOPUP_RAIDREWARDDETAIL_HANDLERAIDLIMITEDREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x27A0B60)
#define UIPOPUP_RAIDREWARDDETAIL_INITPOINTRANKING_OFFSET UNITYSDK_OFFSET(0x279FE80)
#define UIPOPUP_RAIDREWARDDETAIL_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27A0B70)
#define UIPOPUP_RAIDREWARDDETAIL_SET_CURRENTRAIDTYPE_OFFSET UNITYSDK_OFFSET(0x27A0ED0)
#define UIPOPUP_RAIDREWARDDETAIL_HANDLERAIDRANKINGREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x27A0EE0)
#define UIPOPUP_RAIDREWARDDETAIL_ONCLICKREWARD_OFFSET UNITYSDK_OFFSET(0x27A0EF0)
#define UIPOPUP_RAIDREWARDDETAIL_HANDLERAIDSEASONREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x27A11D0)
#define UIPOPUP_RAIDREWARDDETAIL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x279B890)

	inline static constexpr unsigned int UIPopup_RaidRewardDetail_TypeDefinitionIndex = 7470;

	class UIPopup_RaidRewardDetail : public Il2CppObject
	{
	public:
		UILabel* DateLabel; // 0x18
		RaidSeasonRewardScrollViewController* SeasonRewardScroll; // 0x20
		RaidRewardSubTabController* SubTab; // 0x28
		UIRaidRewardPopupRedDotController* TabReddotController; // 0x30
		::UnityEngine::GameObject* RewardButtonDisable; // 0x38
		MXButton* RewardButton; // 0x40
		::FlatData::ContentType* _CurrentRaidType_k__BackingField; // 0x48

		::System::Void InitLimitedRanking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_INITLIMITEDRANKING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_START_OFFSET))(nullptr);
		}

		::System::Void _OnClickReward_b__19_0(::MX::NetworkProtocol::EliminateRaidLimitedRewardResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EliminateRaidLimitedRewardResponse*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL__ONCLICKREWARD_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Void OnSubTabChanged(::System::Boolean arg, RaidRewardSubTab* arg2)
		{
			((::System::Void(*)(::System::Boolean, RaidRewardSubTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_ONSUBTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::FlatData::ContentType* get_CurrentRaidType()
		{
			return ((::FlatData::ContentType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_GET_CURRENTRAIDTYPE_OFFSET))(nullptr);
		}

		::System::Void InitRanking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_INITRANKING_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleRaidLimitedRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_HANDLERAIDLIMITEDREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void InitPointRanking()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_INITPOINTRANKING_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentRaidType(::FlatData::ContentType* arg)
		{
			((::System::Void(*)(::FlatData::ContentType*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_SET_CURRENTRAIDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleRaidRankingRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_HANDLERAIDRANKINGREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickReward()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_ONCLICKREWARD_OFFSET))(nullptr);
		}

		::System::Boolean HandleRaidSeasonRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_HANDLERAIDSEASONREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_RAIDREWARDDETAIL_INITIALIZE_OFFSET))(nullptr);
		}

	};

