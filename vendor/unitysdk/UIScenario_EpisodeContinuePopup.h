#pragma once
#include "unitysdk.h"

class UILabel;
class MXButton;
class IEpisodeContinueHandler;

#define UISCENARIO_EPISODECONTINUEPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x2818470)
#define UISCENARIO_EPISODECONTINUEPOPUP_ONANDROIDBACKBUTTON_OFFSET UNITYSDK_OFFSET(0x2818760)
#define UISCENARIO_EPISODECONTINUEPOPUP_SETDATA_OFFSET UNITYSDK_OFFSET(0x27FDB80)
#define UISCENARIO_EPISODECONTINUEPOPUP_ONCLICKCANCEL_OFFSET UNITYSDK_OFFSET(0x2818770)
#define UISCENARIO_EPISODECONTINUEPOPUP_ONCLICKOK_OFFSET UNITYSDK_OFFSET(0x2818890)
#define UISCENARIO_EPISODECONTINUEPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0x28189B0)

	inline static constexpr unsigned int UIScenario_EpisodeContinuePopup_TypeDefinitionIndex = 7811;

	class UIScenario_EpisodeContinuePopup : public Il2CppObject
	{
	public:
		UILabel* chapterNameLabel; // 0xD8
		UILabel* episodeNameLabel; // 0xE0
		MXButton* continueButton; // 0xE8
		MXButton* cancelButton; // 0xF0
		MXButton* closeButton; // 0xF8
		IEpisodeContinueHandler* handler; // 0x100

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIO_EPISODECONTINUEPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnAndroidBackButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIO_EPISODECONTINUEPOPUP_ONANDROIDBACKBUTTON_OFFSET))(nullptr);
		}

		::System::Void SetData(IEpisodeContinueHandler* arg)
		{
			((::System::Void(*)(IEpisodeContinueHandler*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIO_EPISODECONTINUEPOPUP_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void OnClickCancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIO_EPISODECONTINUEPOPUP_ONCLICKCANCEL_OFFSET))(nullptr);
		}

		::System::Void OnClickOk()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIO_EPISODECONTINUEPOPUP_ONCLICKOK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIO_EPISODECONTINUEPOPUP_.CTOR_OFFSET))(nullptr);
		}

	};

