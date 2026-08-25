#pragma once
#include "unitysdk.h"

class UIPopup_Input_Nickname;
class UIPopup_Input_Callname;
class UIPopup_Input_Comment;
class MXButton;
class InputType;
class UIPopup_Input_CommentMode;

#define UIPOPUP_INPUT_SHOW_OFFSET UNITYSDK_OFFSET(0x2781E20)
#define UIPOPUP_INPUT_AWAKE_OFFSET UNITYSDK_OFFSET(0x2781F70)
#define UIPOPUP_INPUT_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x27820A0)
#define UIPOPUP_INPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x2782130)

	inline static constexpr unsigned int UIPopup_Input_TypeDefinitionIndex = 7384;

	class UIPopup_Input : public Il2CppObject
	{
	public:
		UIPopup_Input_Nickname* nickname; // 0xD8
		UIPopup_Input_Callname* callname; // 0xE0
		UIPopup_Input_Comment* comment; // 0xE8
		MXButton* closeButton; // 0xF0

		::System::Void Show(InputType* arg, UIPopup_Input_CommentMode* arg2, ::System::String* str)
		{
			((::System::Void(*)(InputType*, UIPopup_Input_CommentMode*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_SHOW_OFFSET))(arg, arg2, str, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_AWAKE_OFFSET))(nullptr);
		}

		::System::Void OnClickClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_ONCLICKCLOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_INPUT_.CTOR_OFFSET))(nullptr);
		}

	};

