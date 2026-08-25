#pragma once
#include "unitysdk.h"

class RaidListScollViewController;
class RaidSeasonRewardScrollViewController;
class RaidRewardTabController;
class UILabel;
class UISlider;
class MXButton;
namespace UnityEngine { class GameObject; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
class RaidRewardTab;
class RaidCompleteListNetworkTask;

#define UIRAIDLOBBY_REWARD_HANDLERAIDREWARDRESPONSEMESSAGE_OFFSET UNITYSDK_OFFSET(0x27A7CB0)
#define UIRAIDLOBBY_REWARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0x27A7E40)
#define UIRAIDLOBBY_REWARD_ONCLICKALLRECEIVE_OFFSET UNITYSDK_OFFSET(0x27A8030)
#define UIRAIDLOBBY_REWARD_ONTABCHANGED_OFFSET UNITYSDK_OFFSET(0x27A81B0)
#define UIRAIDLOBBY_REWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A8250)
#define UIRAIDLOBBY_REWARD_REFRESHBUTTON_OFFSET UNITYSDK_OFFSET(0x27A81C0)
#define UIRAIDLOBBY_REWARD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x27A8260)
#define UIRAIDLOBBY_REWARD_HANDELRAIDCOMPLETELISTMESSAGE_OFFSET UNITYSDK_OFFSET(0x27A84B0)
#define UIRAIDLOBBY_REWARD_REFRESHLIST_OFFSET UNITYSDK_OFFSET(0x27A7CC0)
#define UIRAIDLOBBY_REWARD_ONOPENED_OFFSET UNITYSDK_OFFSET(0x27A8BA0)
#define UIRAIDLOBBY_REWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x27A8C20)

	inline static constexpr unsigned int UIRaidLobby_Reward_TypeDefinitionIndex = 7491;

	class UIRaidLobby_Reward : public Il2CppObject
	{
	public:
		RaidListScollViewController* CompleteScroll; // 0xD8
		RaidSeasonRewardScrollViewController* SeasonRewardScroll; // 0xE0
		RaidRewardTabController* RewardTab; // 0xE8
		UILabel* DateLabel; // 0xF0
		UILabel* DamageLabel; // 0xF8
		UISlider* DamageSlider; // 0x100
		MXButton* AllReceiveButton; // 0x108
		::UnityEngine::GameObject* AllReceiveDisable; // 0x110
		::System::Int64 stackedDamage; // 0x118

		::System::Boolean HandleRaidRewardResponseMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REWARD_HANDLERAIDREWARDRESPONSEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REWARD_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnClickAllReceive()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REWARD_ONCLICKALLRECEIVE_OFFSET))(nullptr);
		}

		::System::Void OnTabChanged(::System::Boolean arg, RaidRewardTab* arg2)
		{
			((::System::Void(*)(::System::Boolean, RaidRewardTab*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REWARD_ONTABCHANGED_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REWARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REWARD_REFRESHBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REWARD_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandelRaidCompleteListMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REWARD_HANDELRAIDCOMPLETELISTMESSAGE_OFFSET))(arg, nullptr);
		}

		RaidCompleteListNetworkTask* RefreshList()
		{
			return ((RaidCompleteListNetworkTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REWARD_REFRESHLIST_OFFSET))(nullptr);
		}

		::System::Void OnOpened(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REWARD_ONOPENED_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDLOBBY_REWARD_AWAKE_OFFSET))(nullptr);
		}

	};

