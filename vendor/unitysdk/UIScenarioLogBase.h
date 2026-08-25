#pragma once
#include "unitysdk.h"

class MXPhoneticText;
class DialogSpeakerType;
class ScenarioLogData;
class UIPanel;

#define UISCENARIOLOGBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27DD730)
#define UISCENARIOLOGBASE_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOLOGBASE_SETUI_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOLOGBASE_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UISCENARIOLOGBASE_HIDE_OFFSET UNITYSDK_OFFSET(0x27DD740)
#define UISCENARIOLOGBASE_GETPREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int UIScenarioLogBase_TypeDefinitionIndex = 7650;

	class UIScenarioLogBase : public Il2CppObject
	{
	public:
		MXPhoneticText* Script; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOGBASE_.CTOR_OFFSET))(nullptr);
		}

		DialogSpeakerType* get_TargetType()
		{
			return ((DialogSpeakerType*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOGBASE_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Void SetUI(ScenarioLogData* arg)
		{
			((::System::Void(*)(ScenarioLogData*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOGBASE_SETUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsVisible(UIPanel* arg)
		{
			return ((::System::Boolean(*)(UIPanel*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOGBASE_ISVISIBLE_OFFSET))(arg, nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOGBASE_HIDE_OFFSET))(nullptr);
		}

		::System::Int32 GetPreferredHeight(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOLOGBASE_GETPREFERREDHEIGHT_OFFSET))(arg, nullptr);
		}

	};

