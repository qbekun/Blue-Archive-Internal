#pragma once
#include "unitysdk.h"

class UILabel;

#define TYPEWRITEREFFECT_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x27CCCE0)
#define TYPEWRITEREFFECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x27CCE50)
#define TYPEWRITEREFFECT_REMOVECOMMANDS_OFFSET UNITYSDK_OFFSET(0x27CD990)
#define TYPEWRITEREFFECT_SETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x27CD8C0)
#define TYPEWRITEREFFECT_STARTANIMATION_OFFSET UNITYSDK_OFFSET(0x27CDAA0)
#define TYPEWRITEREFFECT_SETINTERVALTIME_OFFSET UNITYSDK_OFFSET(0x27CDC50)
#define TYPEWRITEREFFECT_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x27CDD10)
#define TYPEWRITEREFFECT_GET_ORIGINALTEXT_OFFSET UNITYSDK_OFFSET(0x27CDD20)
#define TYPEWRITEREFFECT_GET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x27CDD30)
#define TYPEWRITEREFFECT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x27CCDC0)
#define TYPEWRITEREFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CDDD0)
#define TYPEWRITEREFFECT_SET_ORIGINALTEXT_OFFSET UNITYSDK_OFFSET(0x27CDCC0)
#define TYPEWRITEREFFECT_SET_FONTSIZE_OFFSET UNITYSDK_OFFSET(0x27CDDF0)
#define TYPEWRITEREFFECT_USESCENARIOSETTINGINTERVALTIME_OFFSET UNITYSDK_OFFSET(0x27CDE90)

	inline static constexpr unsigned int TypeWriterEffect_TypeDefinitionIndex = 7603;

	class TypeWriterEffect : public Il2CppObject
	{
	public:
		::System::String* originalText; // 0x18
		::System::String* handledText; // 0x20
		::System::Single IntervalTime; // 0x28
		::System::Single LineIntervalTime; // 0x2C
		::System::Single intervalTime; // 0x30
		UILabel* text; // 0x38
		::System::String* currentText; // 0x40
		::System::String* currentTextToShow; // 0x48
		::Il2CppArray<::System::Object*>* segments; // 0x50
		::System::Boolean bStarted; // 0x58
		::System::Boolean bCompleted; // 0x59
		::System::Int32 index; // 0x5C
		::System::Single prevTime; // 0x60
		::System::Int32 lineCount; // 0x64
		::System::Action* onComplete; // 0x68
		::System::Action* onTextChanged; // 0x70
		::System::Boolean useScenarioSettingIntervalTime; // 0x78

		::System::Boolean IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_UPDATE_OFFSET))(nullptr);
		}

		::System::String* RemoveCommands(::System::String* str, ::System::Boolean arg)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_REMOVECOMMANDS_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_SETCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void StartAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_STARTANIMATION_OFFSET))(nullptr);
		}

		::System::Single SetIntervalTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_SETINTERVALTIME_OFFSET))(nullptr);
		}

		::System::Boolean IsStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_ISSTARTED_OFFSET))(nullptr);
		}

		::System::String* get_OriginalText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_GET_ORIGINALTEXT_OFFSET))(nullptr);
		}

		::System::Int32 get_FontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_GET_FONTSIZE_OFFSET))(nullptr);
		}

		UILabel* get_Text()
		{
			return ((UILabel*(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_GET_TEXT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OriginalText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_SET_ORIGINALTEXT_OFFSET))(str, nullptr);
		}

		::System::Void set_FontSize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_SET_FONTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void UseScenarioSettingIntervalTime(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TYPEWRITEREFFECT_USESCENARIOSETTINGINTERVALTIME_OFFSET))(arg, nullptr);
		}

	};

