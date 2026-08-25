#pragma once
#include "unitysdk.h"

class UIScrollView;
class UITexture;
class UILabel;
class MXPhoneticText;
class MXButton;
class UICharacterGiftMatchListPopulator;

#define UICHARACTERPROFILE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x22C2A70)
#define UICHARACTERPROFILE_ONGIFTMATCHCLOSEBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x22C2BC0)
#define UICHARACTERPROFILE_AWAKE_OFFSET UNITYSDK_OFFSET(0x22C2C60)
#define UICHARACTERPROFILE_SETDATAPROFILE_OFFSET UNITYSDK_OFFSET(0x22C2F20)
#define UICHARACTERPROFILE_ONGIFTMATCHBUTTONCLICKED_OFFSET UNITYSDK_OFFSET(0x22C37E0)
#define UICHARACTERPROFILE_.CTOR_OFFSET UNITYSDK_OFFSET(0x22C3890)

	inline static constexpr unsigned int UICharacterProfile_TypeDefinitionIndex = 4799;

	class UICharacterProfile : public Il2CppObject
	{
	public:
		UIScrollView* scrollView; // 0x18
		UITexture* StudentTexture; // 0x20
		UITexture* SchoolIconTexture; // 0x28
		UILabel* School; // 0x30
		UILabel* Grade; // 0x38
		UILabel* FamilyName; // 0x40
		UILabel* FamilyNameRuby; // 0x48
		UILabel* PersonalName; // 0x50
		UILabel* PersonalNameRuby; // 0x58
		MXPhoneticText* Name; // 0x60
		UILabel* Circles; // 0x68
		UILabel* Age; // 0x70
		UILabel* Birth; // 0x78
		UILabel* Height; // 0x80
		UILabel* Hobby; // 0x88
		UILabel* Design; // 0x90
		UILabel* Illust; // 0x98
		UILabel* VoiceActor; // 0xA0
		UILabel* StatusMessage; // 0xA8
		UILabel* VoiceActorGL; // 0xB0
		MXButton* giftMatchButton; // 0xB8
		MXButton* giftMatchCloseButton; // 0xC0
		UICharacterGiftMatchListPopulator* uiCharacterGiftMatchListPopulator; // 0xC8

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERPROFILE_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnGiftMatchCloseButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERPROFILE_ONGIFTMATCHCLOSEBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERPROFILE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetDataProfile(::System::Int64 arg, ::System::Int64 arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERPROFILE_SETDATAPROFILE_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnGiftMatchButtonClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERPROFILE_ONGIFTMATCHBUTTONCLICKED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHARACTERPROFILE_.CTOR_OFFSET))(nullptr);
		}

	};

