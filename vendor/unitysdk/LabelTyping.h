#pragma once
#include "unitysdk.h"

class UILabel;
class UIPanel;

#define LABELTYPING_.CTOR_OFFSET UNITYSDK_OFFSET(0x2057900)
#define LABELTYPING_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2057930)
#define LABELTYPING_SETTEXT_OFFSET UNITYSDK_OFFSET(0x20579F0)
#define LABELTYPING_TESTLONG_OFFSET UNITYSDK_OFFSET(0x2057B00)
#define LABELTYPING_UPDATE_OFFSET UNITYSDK_OFFSET(0x2057B40)
#define LABELTYPING_GET_CURRENTTYPINGDURATION_OFFSET UNITYSDK_OFFSET(0x2057EA0)
#define LABELTYPING_TESTSHORT_OFFSET UNITYSDK_OFFSET(0x2057EC0)

	inline static constexpr unsigned int LabelTyping_TypeDefinitionIndex = 3350;

	class LabelTyping : public Il2CppObject
	{
	public:
		UILabel* label; // 0x18
		::System::Single typingDuration; // 0x20
		::System::Single typingWhileScrollDuration; // 0x24
		UIPanel* uiPanel; // 0x28
		::System::Single marginRight; // 0x30
		::System::UInt32 localizeHash; // 0x34
		::System::Single textMaxWidth; // 0x38
		::System::String* textSaved; // 0x40
		::System::Int32 indexTextOverFlow; // 0x48
		::System::Int32 indexTextSaved; // 0x4C
		::System::Single nextLetterTime; // 0x50
		::System::Single expectedTextWidth; // 0x54

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELTYPING_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELTYPING_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void SetText(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + LABELTYPING_SETTEXT_OFFSET))(str, nullptr);
		}

		::System::Void TestLong()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELTYPING_TESTLONG_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELTYPING_UPDATE_OFFSET))(nullptr);
		}

		::System::Single get_CurrentTypingDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELTYPING_GET_CURRENTTYPINGDURATION_OFFSET))(nullptr);
		}

		::System::Void TestShort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABELTYPING_TESTSHORT_OFFSET))(nullptr);
		}

	};

