#pragma once
#include "unitysdk.h"

class UILabel;
class UISprite;
class UISlider;
namespace UnityEngine { class GameObject; }
class TweenScale;
class UIMissionReceiveButton;
namespace UnityEngine { class Color; }
class MissionContentBase;

#define UIBATTLEPASSMISSIONSCROLLELEMENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x2247F40)
#define UIBATTLEPASSMISSIONSCROLLELEMENT_SETCOUNTLABEL_OFFSET UNITYSDK_OFFSET(0x2247FE0)
#define UIBATTLEPASSMISSIONSCROLLELEMENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x2248130)
#define UIBATTLEPASSMISSIONSCROLLELEMENT_SETMISSIONCOLOR_OFFSET UNITYSDK_OFFSET(0x2248200)
#define UIBATTLEPASSMISSIONSCROLLELEMENT__SETMISSIONCOLOR_G__INITMISSIONCOLORTABLE|20_0_OFFSET UNITYSDK_OFFSET(0x22483C0)
#define UIBATTLEPASSMISSIONSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2248540)
#define UIBATTLEPASSMISSIONSCROLLELEMENT_SETREWARDINFO_OFFSET UNITYSDK_OFFSET(0x22485B0)
#define UIBATTLEPASSMISSIONSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x2248660)

	inline static constexpr unsigned int UIBattlePassMissionScrollElement_TypeDefinitionIndex = 4504;

	class UIBattlePassMissionScrollElement : public ::System::Xml::Serialization::XmlElementEventHandler
	{
	public:
		UILabel* systemLabel; // 0x28
		UILabel* numberLabel; // 0x30
		UISprite* categorySprite; // 0x38
		UILabel* categoryLabel; // 0x40
		UISlider* progressGauge; // 0x48
		UISprite* rewardIconSprite; // 0x50
		UILabel* rewardCountLabel; // 0x58
		::UnityEngine::GameObject* rewardCompleteWidget; // 0x60
		TweenScale* rewardCompleteTween; // 0x68
		::UnityEngine::GameObject* historyWidget; // 0x70
		UIMissionReceiveButton* receiveButton; // 0x78
		::UnityEngine::Color* DailyColor; // 0x80
		::UnityEngine::Color* WeeklyColor; // 0x90
		::UnityEngine::Color* AchievementColor; // 0xA0
		Il2CppObject* missionColorTable; // 0x0
		MissionContentBase* mission; // 0xB0
		::System::Boolean isRewardComplete; // 0xB8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLLELEMENT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void SetCountLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLLELEMENT_SETCOUNTLABEL_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLLELEMENT_UPDATE_OFFSET))(nullptr);
		}

		::System::Void SetMissionColor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLLELEMENT_SETMISSIONCOLOR_OFFSET))(nullptr);
		}

		::System::Void _SetMissionColor_g__InitMissionColorTable|20_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLLELEMENT__SETMISSIONCOLOR_G__INITMISSIONCOLORTABLE|20_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetRewardInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLLELEMENT_SETREWARDINFO_OFFSET))(nullptr);
		}

		::System::Void SetData(MissionContentBase* arg)
		{
			((::System::Void(*)(MissionContentBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIBATTLEPASSMISSIONSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

