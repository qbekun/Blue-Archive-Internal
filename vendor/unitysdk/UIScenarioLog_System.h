#pragma once
#include "unitysdk.h"

class UIWidget;
class UISprite;
class SpriteColorPair;
class TextColorPair;
namespace UnityEngine { class Color; }
class MXButton;
class UIPanel;
class ScenarioLogData;
class DialogSpeakerType;

#define UISCENARIOLOG_SYSTEM_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x27DE690)
#define UISCENARIOLOG_SYSTEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x27DE6C0)
#define UISCENARIOLOG_SYSTEM_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x27DE7F0)
#define UISCENARIOLOG_SYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x27DE840)
#define UISCENARIOLOG_SYSTEM_SETUI_OFFSET UNITYSDK_OFFSET(0x27DE870)
#define UISCENARIOLOG_SYSTEM_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x27DEC40)
#define UISCENARIOLOG_SYSTEM_ONCLICKVOICEBUTTON_OFFSET UNITYSDK_OFFSET(0x27DEC50)

	inline static constexpr unsigned int UIScenarioLog_System_TypeDefinitionIndex = 7655;

	class UIScenarioLog_System : public Il2CppObject
	{
	public:
		UIWidget* talkWidget; // 0x20
		UISprite* scriptBg; // 0x28
		::System::Int32 noneScriptBgHeight_1; // 0x30
		::System::Int32 noneScriptBgHeight_2; // 0x34
		::System::Int32 noneScriptPosY_1; // 0x38
		::System::Int32 noneScriptPosY_2; // 0x3C
		::System::Int32 noneSoundButtonPosY_1; // 0x40
		::System::Int32 noneSoundButtonPosY_2; // 0x44
		::System::Int32 noneScriptHeightDelta; // 0x48
		SpriteColorPair* bgColorPair; // 0x4C
		TextColorPair* baseTextColorPair; // 0x6C
		::UnityEngine::Color* replaceColor; // 0x8C
		MXButton* noneCharacterRootVoiceButton; // 0xA0
		::System::UInt32 savedVoiceId; // 0xA8

		::System::Int32 GetPreferredHeight(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SYSTEM_GETPREFERREDHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SYSTEM_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean IsVisible(UIPanel* arg)
		{
			return ((::System::Boolean(*)(UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SYSTEM_ISVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUI(ScenarioLogData* arg)
		{
			((::System::Void(*)(ScenarioLogData*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SYSTEM_SETUI_OFFSET))(arg, nullptr);
		}

		DialogSpeakerType* get_TargetType()
		{
			return ((DialogSpeakerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SYSTEM_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Void OnClickVoiceButton()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SYSTEM_ONCLICKVOICEBUTTON_OFFSET))(nullptr);
		}

	};

