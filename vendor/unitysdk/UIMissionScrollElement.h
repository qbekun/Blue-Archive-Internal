#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class UIMissionReceiveButton;
class UISlider;
namespace UnityEngine { class Color; }
class MissionContentBase;

#define UIMISSIONSCROLLELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x269ACB0)
#define UIMISSIONSCROLLELEMENT_FILLDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x269AD40)
#define UIMISSIONSCROLLELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0x269B680)
#define UIMISSIONSCROLLELEMENT_FILLGUIDEMISSIONDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x269B5A0)
#define UIMISSIONSCROLLELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x269BAD0)
#define UIMISSIONSCROLLELEMENT_SETCOUNTLABEL_OFFSET UNITYSDK_OFFSET(0x269B740)
#define UIMISSIONSCROLLELEMENT_FILLPARCELCARDS_OFFSET UNITYSDK_OFFSET(0x269B890)
#define UIMISSIONSCROLLELEMENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x269BDB0)

	inline static constexpr unsigned int UIMissionScrollElement_TypeDefinitionIndex = 6820;

	class UIMissionScrollElement : public ::System::Xml::Serialization::XmlElementEventHandler
	{
	public:
		Il2CppObject* missionColorTable; // 0x0
		::Il2CppArray<::System::Object*>* systemLabels; // 0x28
		::Il2CppArray<::System::Object*>* categoryLabels; // 0x30
		::Il2CppArray<::System::Object*>* categorySprites; // 0x38
		UILabel* eventDisplayNumberLabel; // 0x40
		UILabel* guideMissionNameLabel; // 0x48
		::UnityEngine::GameObject* normalDescriptionRoot; // 0x50
		::UnityEngine::GameObject* eventDescriptionRoot; // 0x58
		::UnityEngine::GameObject* guideDescriptionRoot; // 0x60
		UILabel* numberLabel; // 0x68
		::UnityEngine::GameObject* limitedLabelObject; // 0x70
		UILabel* endDateLabel; // 0x78
		::UnityEngine::GameObject* extensionTimeObject; // 0x80
		::UnityEngine::GameObject* extensionTimeOnLabel; // 0x88
		::UnityEngine::GameObject* extensionTimeOffLabel; // 0x90
		UIMissionReceiveButton* receiveButton; // 0x98
		UILabel* receiveButton_DisableLabel; // 0xA0
		UISlider* progressGauge; // 0xA8
		::Il2CppArray<::System::Object*>* parcelCards; // 0xB0
		::UnityEngine::GameObject* historyWidget; // 0xB8
		::UnityEngine::GameObject* lockedWidget; // 0xC0
		::UnityEngine::Color* DailyColor; // 0xC8
		::UnityEngine::Color* WeeklyColor; // 0xD8
		::UnityEngine::Color* AchievementColor; // 0xE8
		::UnityEngine::Color* EventColor; // 0xF8
		::UnityEngine::Color* MiniGameScoreColor; // 0x108
		::UnityEngine::Color* MiniGameEventColor; // 0x118
		MissionContentBase* mission; // 0x128

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSCROLLELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FillDescription()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSCROLLELEMENT_FILLDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void SetData(MissionContentBase* arg)
		{
			((::System::Void(*)(MissionContentBase*, ::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSCROLLELEMENT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void FillGuideMissionDescription()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSCROLLELEMENT_FILLGUIDEMISSIONDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSCROLLELEMENT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetCountLabel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSCROLLELEMENT_SETCOUNTLABEL_OFFSET))(nullptr);
		}

		::System::Void FillParcelCards()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSCROLLELEMENT_FILLPARCELCARDS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIMISSIONSCROLLELEMENT_.CCTOR_OFFSET))(nullptr);
		}

	};

