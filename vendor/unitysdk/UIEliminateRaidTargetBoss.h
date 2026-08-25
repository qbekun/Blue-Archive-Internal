#pragma once
#include "unitysdk.h"

class UIEliminateRaidBossGroupInfo;
namespace UnityEngine { class GameObject; }
class UILabel;
class MXButton;
class UISprite;
namespace MX::GameLogic::DBModel { class RaidDB; }
namespace FlatData { class RaidSeasonType; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIELIMINATERAIDTARGETBOSS_REFRESH_OFFSET UNITYSDK_OFFSET(0x23E3EB0)
#define UIELIMINATERAIDTARGETBOSS_SETTICKET_OFFSET UNITYSDK_OFFSET(0x23E61E0)
#define UIELIMINATERAIDTARGETBOSS_ONCLICKBUTTON_OFFSET UNITYSDK_OFFSET(0x23E6580)
#define UIELIMINATERAIDTARGETBOSS_AWAKE_OFFSET UNITYSDK_OFFSET(0x23E65A0)
#define UIELIMINATERAIDTARGETBOSS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x23E67D0)
#define UIELIMINATERAIDTARGETBOSS_HANDLECURRENCYUPDATEMESSAGE_OFFSET UNITYSDK_OFFSET(0x23E68D0)
#define UIELIMINATERAIDTARGETBOSS_ONCLICKUNPLAYABLEBUTTON_OFFSET UNITYSDK_OFFSET(0x23E68E0)
#define UIELIMINATERAIDTARGETBOSS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x23E69B0)
#define UIELIMINATERAIDTARGETBOSS_UPDATE_OFFSET UNITYSDK_OFFSET(0x23E6B30)
#define UIELIMINATERAIDTARGETBOSS_.CTOR_OFFSET UNITYSDK_OFFSET(0x23E6EF0)
#define UIELIMINATERAIDTARGETBOSS_SETTIME_OFFSET UNITYSDK_OFFSET(0x23E5F80)

	inline static constexpr unsigned int UIEliminateRaidTargetBoss_TypeDefinitionIndex = 5388;

	class UIEliminateRaidTargetBoss : public Il2CppObject
	{
	public:
		UIEliminateRaidBossGroupInfo* eliminateBossGroup; // 0x18
		::UnityEngine::GameObject* clearCover; // 0x20
		::UnityEngine::GameObject* clearIndicateLine; // 0x28
		::UnityEngine::GameObject* lockCover; // 0x30
		UILabel* lockCoverLabel; // 0x38
		MXButton* lockCoverButton; // 0x40
		::UnityEngine::GameObject* timeObject; // 0x48
		UILabel* timeLabel; // 0x50
		MXButton* button; // 0x58
		::UnityEngine::GameObject* TicketObject; // 0x60
		UISprite* TicketImage; // 0x68
		UILabel* TicketCount; // 0x70
		::System::Int32 BossGroupIndex; // 0x78
		::MX::GameLogic::DBModel::RaidDB* raidDB; // 0x80
		::System::Int32 lastRemainTimeSec; // 0x88
		::System::Boolean isTimeEnd; // 0x8C
		Il2CppObject* onclickCallback; // 0x90
		::FlatData::RaidSeasonType* seasonOpenType; // 0x98

		::System::Void Refresh(::FlatData::RaidSeasonType* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::FlatData::RaidSeasonType*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDTARGETBOSS_REFRESH_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetTicket()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDTARGETBOSS_SETTICKET_OFFSET))(nullptr);
		}

		::System::Void OnClickButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDTARGETBOSS_ONCLICKBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDTARGETBOSS_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDTARGETBOSS_ONENABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleCurrencyUpdateMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDTARGETBOSS_HANDLECURRENCYUPDATEMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickUnplayableButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDTARGETBOSS_ONCLICKUNPLAYABLEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDTARGETBOSS_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDTARGETBOSS_UPDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDTARGETBOSS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetTime(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIELIMINATERAIDTARGETBOSS_SETTIME_OFFSET))(str, nullptr);
		}

	};

