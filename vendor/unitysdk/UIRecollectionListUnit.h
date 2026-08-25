#pragma once
#include "unitysdk.h"

class UILabel;
namespace UnityEngine { class GameObject; }
class ButtonActivator;
class UIRecollectionListController;
namespace MX::Data::Excel { class EventContentScenarioExcel; }
class UIScenarioMode_EpisodePopup;

#define UIRECOLLECTIONLISTUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27AC7F0)
#define UIRECOLLECTIONLISTUNIT_ONCLICKPLAY_OFFSET UNITYSDK_OFFSET(0x27AC830)
#define UIRECOLLECTIONLISTUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x27AC910)
#define UIRECOLLECTIONLISTUNIT__ONCLICKPLAY_B__18_0_OFFSET UNITYSDK_OFFSET(0x27ACB80)
#define UIRECOLLECTIONLISTUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x27ACBC0)

	inline static constexpr unsigned int UIRecollectionListUnit_TypeDefinitionIndex = 7504;

	class UIRecollectionListUnit : public ::System::Xml::XmlNodeType
	{
	public:
		UILabel* recollectionNumberLabel; // 0x28
		UILabel* titleLabel; // 0x30
		UILabel* summaryLabel; // 0x38
		::Il2CppArray<::System::Object*>* cgTextures; // 0x40
		::UnityEngine::GameObject* horizontalRoot; // 0x48
		::UnityEngine::GameObject* verticalRoot; // 0x50
		ButtonActivator* playButton; // 0x58
		::UnityEngine::GameObject* isLock; // 0x60
		::Il2CppArray<::System::Object*>* lockObjects_Date; // 0x68
		::Il2CppArray<::System::Object*>* lockObjects_NoDate; // 0x70
		UILabel* dDayLabel; // 0x78
		::UnityEngine::GameObject* isNew; // 0x80
		::Il2CppArray<::System::Object*>* colliders; // 0x88
		UIRecollectionListController* listController; // 0x90
		::System::Boolean hasHistory; // 0x98
		::MX::Data::Excel::EventContentScenarioExcel* ScenarioExcel; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickPlay()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTUNIT_ONCLICKPLAY_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void _OnClickPlay_b__18_0(UIScenarioMode_EpisodePopup* arg)
		{
			((::System::Void(*)(UIScenarioMode_EpisodePopup*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTUNIT__ONCLICKPLAY_B__18_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::Excel::EventContentScenarioExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::EventContentScenarioExcel*, ::PVOID))((::PBYTE)hIl2Cpp + UIRECOLLECTIONLISTUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

	};

