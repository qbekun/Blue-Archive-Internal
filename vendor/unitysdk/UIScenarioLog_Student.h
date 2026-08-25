#pragma once
#include "unitysdk.h"

class UIWidget;
class UITexture;
class UILabel;
class MXButton;
class UISprite;
class SpriteColorPair;
namespace UnityEngine { class Color; }
class ScenarioLogData;
namespace UnityEngine { class Texture; }
class UIPanel;
class DialogSpeakerType;

#define UISCENARIOLOG_STUDENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27DDDD0)
#define UISCENARIOLOG_STUDENT_ONCLICKVOICEBUTTON_OFFSET UNITYSDK_OFFSET(0x27DDDE0)
#define UISCENARIOLOG_STUDENT_SETUI_OFFSET UNITYSDK_OFFSET(0x27DDE30)
#define UISCENARIOLOG_STUDENT__SETPORTRAIT_B__17_1_OFFSET UNITYSDK_OFFSET(0x27DE310)
#define UISCENARIOLOG_STUDENT__SETPORTRAIT_B__17_0_OFFSET UNITYSDK_OFFSET(0x27DE340)
#define UISCENARIOLOG_STUDENT_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x27DE4D0)
#define UISCENARIOLOG_STUDENT_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x27DE4E0)
#define UISCENARIOLOG_STUDENT_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x27DE550)
#define UISCENARIOLOG_STUDENT_HIDE_OFFSET UNITYSDK_OFFSET(0x27DE560)
#define UISCENARIOLOG_STUDENT_SETPORTRAIT_OFFSET UNITYSDK_OFFSET(0x27DE1A0)

	inline static constexpr unsigned int UIScenarioLog_Student_TypeDefinitionIndex = 7654;

	class UIScenarioLog_Student : public Il2CppObject
	{
	public:
		UIWidget* talkWidget; // 0x20
		UIWidget* nameWidget; // 0x28
		UITexture* portrait; // 0x30
		UILabel* name; // 0x38
		MXButton* voiceButton; // 0x40
		UISprite* nameBarBg; // 0x48
		SpriteColorPair* bgColorPair; // 0x50
		::UnityEngine::Color* replaceColor; // 0x70
		::System::String* defaultTexturePath; // 0x0
		::System::String* errorTexturePath; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_STUDENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnClickVoiceButton(::System::UInt32 arg)
		{
			((::System::Void(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_STUDENT_ONCLICKVOICEBUTTON_OFFSET))(arg, nullptr);
		}

		::System::Void SetUI(ScenarioLogData* arg)
		{
			((::System::Void(*)(ScenarioLogData*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_STUDENT_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Void _SetPortrait_b__17_1(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_STUDENT__SETPORTRAIT_B__17_1_OFFSET))(arg, nullptr);
		}

		::System::Void _SetPortrait_b__17_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_STUDENT__SETPORTRAIT_B__17_0_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetPreferredHeight(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_STUDENT_GETPREFERREDHEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVisible(UIPanel* arg)
		{
			return ((::System::Boolean(*)(UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_STUDENT_ISVISIBLE_OFFSET))(arg, nullptr);
		}

		DialogSpeakerType* get_TargetType()
		{
			return ((DialogSpeakerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_STUDENT_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_STUDENT_HIDE_OFFSET))(nullptr);
		}

		::System::Void SetPortrait(ScenarioLogData* arg)
		{
			((::System::Void(*)(ScenarioLogData*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOG_STUDENT_SETPORTRAIT_OFFSET))(arg, nullptr);
		}

	};

