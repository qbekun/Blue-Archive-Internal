#pragma once
#include "unitysdk.h"

class UIWidget;
class UITexture;
class UILabel;
class MXButton;
class UIPanel;
namespace UnityEngine { class Texture; }
class ScenarioLogData;
class DialogSpeakerType;

#define UISCENARIOLOG_SENSEI_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x27DD7B0)
#define UISCENARIOLOG_SENSEI_.CTOR_OFFSET UNITYSDK_OFFSET(0x27DD820)
#define UISCENARIOLOG_SENSEI_HIDE_OFFSET UNITYSDK_OFFSET(0x27DD830)
#define UISCENARIOLOG_SENSEI_ONCLICKVOICEBUTTON_OFFSET UNITYSDK_OFFSET(0x27DD900)
#define UISCENARIOLOG_SENSEI_SETPORTRAIT_OFFSET UNITYSDK_OFFSET(0x27DD950)
#define UISCENARIOLOG_SENSEI_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x27DDA50)
#define UISCENARIOLOG_SENSEI__SETPORTRAIT_B__13_0_OFFSET UNITYSDK_OFFSET(0x27DDA60)
#define UISCENARIOLOG_SENSEI_SETUI_OFFSET UNITYSDK_OFFSET(0x27DDAB0)
#define UISCENARIOLOG_SENSEI_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x27DDD60)

	inline static constexpr unsigned int UIScenarioLog_Sensei_TypeDefinitionIndex = 7652;

	class UIScenarioLog_Sensei : public Il2CppObject
	{
	public:
		UIWidget* talkWidget; // 0x20
		UIWidget* nameWidget; // 0x28
		UITexture* portrait; // 0x30
		UILabel* name; // 0x38
		MXButton* voiceButton; // 0x40
		::System::String* teacherTexturePath; // 0x0

		::System::Boolean IsVisible(UIPanel* arg)
		{
			return ((::System::Boolean(*)(UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SENSEI_ISVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SENSEI_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SENSEI_HIDE_OFFSET))(nullptr);
		}

		::System::Void OnClickVoiceButton(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SENSEI_ONCLICKVOICEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetPortrait()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SENSEI_SETPORTRAIT_OFFSET))(nullptr);
		}

		::System::Int32 GetPreferredHeight(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SENSEI_GETPREFERREDHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void _SetPortrait_b__13_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SENSEI__SETPORTRAIT_B__13_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI(ScenarioLogData* arg)
		{
			((::System::Void(*)(ScenarioLogData*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SENSEI_SETUI_OFFSET))(arg, nullptr);
		}

		DialogSpeakerType* get_TargetType()
		{
			return ((DialogSpeakerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_SENSEI_GET_TARGETTYPE_OFFSET))(nullptr);
		}

	};

