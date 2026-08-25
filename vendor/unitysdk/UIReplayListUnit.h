#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class ButtonActivator;
class UIReplayListController;
namespace MX::Data::Excel { class MiniGameDreamReplayScenarioExcel; }
class UIScenarioMode_EpisodePopup;

#define UIREPLAYLISTUNIT_ONCLICKPLAY_OFFSET UNITYSDK_OFFSET(0xD119C0)
#define UIREPLAYLISTUNIT__ONCLICKPLAY_B__15_0_OFFSET UNITYSDK_OFFSET(0xD11AA0)
#define UIREPLAYLISTUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0xD11AE0)
#define UIREPLAYLISTUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0xD11D50)
#define UIREPLAYLISTUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD12330)

	inline static constexpr unsigned int UIReplayListUnit_TypeDefinitionIndex = 629;

	class UIReplayListUnit : public ::System::Xml::Serialization::XmlAttributeEventHandler
	{
	public:
		UILabel* replaySummaryTitleLabel; // 0x28
		UILabel* titleLabel; // 0x30
		UILabel* summaryLabel; // 0x38
		::Il2CppArray<::System::Object*>* cgTextures; // 0x40
		::UnityEngine::GameObject* horizontalRoot; // 0x48
		::UnityEngine::GameObject* verticalRoot; // 0x50
		ButtonActivator* playButton; // 0x58
		::UnityEngine::GameObject* isLock; // 0x60
		::UnityEngine::GameObject* isNew; // 0x68
		::Il2CppArray<::System::Object*>* colliders; // 0x70
		UIReplayListController* listController; // 0x78
		::System::Boolean hasHistory; // 0x80
		::MX::Data::Excel::MiniGameDreamReplayScenarioExcel* ScenarioExcel; // 0x88

		::System::Void OnClickPlay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTUNIT_ONCLICKPLAY_OFFSET))(nullptr);
		}

		::System::Void _OnClickPlay_b__15_0(UIScenarioMode_EpisodePopup* arg)
		{
			((::System::Void(*)(UIScenarioMode_EpisodePopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTUNIT__ONCLICKPLAY_B__15_0_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::MiniGameDreamReplayScenarioExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::MiniGameDreamReplayScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIREPLAYLISTUNIT_.CTOR_OFFSET))(nullptr);
		}

	};

