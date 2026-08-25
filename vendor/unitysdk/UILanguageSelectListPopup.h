#pragma once
#include "unitysdk.h"

class MXButton;
class UIScrollView;
class IntTabController;
class GameMainGlobalOption;

#define UILANGUAGESELECTLISTPOPUP_.CTOR_OFFSET UNITYSDK_OFFSET(0xCD41C0)
#define UILANGUAGESELECTLISTPOPUP_INITIALIZEBYLAGUAGETYPE_OFFSET UNITYSDK_OFFSET(0xCD41D0)
#define UILANGUAGESELECTLISTPOPUP_AWAKE_OFFSET UNITYSDK_OFFSET(0xCD4340)
#define UILANGUAGESELECTLISTPOPUP_ONCLICKCLOSEBUTTON_OFFSET UNITYSDK_OFFSET(0xCD4610)
#define UILANGUAGESELECTLISTPOPUP_OPENPOPUP_OFFSET UNITYSDK_OFFSET(0xCD3830)
#define UILANGUAGESELECTLISTPOPUP_CLOSE_OFFSET UNITYSDK_OFFSET(0xCD1C60)
#define UILANGUAGESELECTLISTPOPUP_ONCHANGEDLANGUAGES_OFFSET UNITYSDK_OFFSET(0xCD4640)

	inline static constexpr unsigned int UILanguageSelectListPopup_TypeDefinitionIndex = 9149;

	class UILanguageSelectListPopup : public Il2CppObject
	{
	public:
		MXButton* closeButton; // 0x18
		UIScrollView* languageScrollView; // 0x20
		IntTabController* languageController; // 0x28
		UIScrollView* voiceLanguageScrollView; // 0x30
		IntTabController* voiceLanguageController; // 0x38
		GameMainGlobalOption* currentOptionType; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILANGUAGESELECTLISTPOPUP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void InitializeByLaguageType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILANGUAGESELECTLISTPOPUP_INITIALIZEBYLAGUAGETYPE_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILANGUAGESELECTLISTPOPUP_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickCloseButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILANGUAGESELECTLISTPOPUP_ONCLICKCLOSEBUTTON_OFFSET))(nullptr);
		}

		::System::Void OpenPopup(GameMainGlobalOption* arg)
		{
			((::System::Void(*)(GameMainGlobalOption*, ::PVOID))((::PBYTE)hIl2Cpp + UILANGUAGESELECTLISTPOPUP_OPENPOPUP_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILANGUAGESELECTLISTPOPUP_CLOSE_OFFSET))(nullptr);
		}

		::System::Void OnChangedLanguages(::System::Boolean arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILANGUAGESELECTLISTPOPUP_ONCHANGEDLANGUAGES_OFFSET))(arg, arg2, nullptr);
		}

	};

