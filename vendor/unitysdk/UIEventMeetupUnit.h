#pragma once
#include "unitysdk.h"

class UITexture;
class UILabel;
class MXButton;
namespace UnityEngine { class GameObject; }
class EventMeetupCharacter;

#define UIEVENTMEETUPUNIT_.CTOR_OFFSET UNITYSDK_OFFSET(0x24B42E0)
#define UIEVENTMEETUPUNIT_SETDATA_OFFSET UNITYSDK_OFFSET(0x24B4320)
#define UIEVENTMEETUPUNIT_ADD_MEETUPCHARACTERSELECTED_OFFSET UNITYSDK_OFFSET(0x24B03D0)
#define UIEVENTMEETUPUNIT_ONCLICKMEETUPBUTTON_OFFSET UNITYSDK_OFFSET(0x24B4690)
#define UIEVENTMEETUPUNIT_AWAKE_OFFSET UNITYSDK_OFFSET(0x24B46B0)
#define UIEVENTMEETUPUNIT_REMOVE_MEETUPCHARACTERSELECTED_OFFSET UNITYSDK_OFFSET(0x24B47F0)

	inline static constexpr unsigned int UIEventMeetupUnit_TypeDefinitionIndex = 5857;

	class UIEventMeetupUnit : public ::System::Xml::XmlResolver
	{
	public:
		UITexture* thumbnailTexture; // 0x28
		UILabel* nameLabel; // 0x30
		UILabel* favorRankLabel; // 0x38
		MXButton* meetupButton; // 0x40
		::UnityEngine::GameObject* lockRoot; // 0x48
		EventMeetupCharacter* eventMeetupCharacter; // 0x50
		Il2CppObject* MeetupCharacterSelected; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPUNIT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(EventMeetupCharacter* arg)
		{
			((::System::Void(*)(EventMeetupCharacter*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPUNIT_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void add_MeetupCharacterSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPUNIT_ADD_MEETUPCHARACTERSELECTED_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickMeetupButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPUNIT_ONCLICKMEETUPBUTTON_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPUNIT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void remove_MeetupCharacterSelected(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTMEETUPUNIT_REMOVE_MEETUPCHARACTERSELECTED_OFFSET))(arg, nullptr);
		}

	};

