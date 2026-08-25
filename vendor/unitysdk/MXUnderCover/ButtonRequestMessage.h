#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UIUCHUDButton; }

#define MXUNDERCOVER_BUTTONREQUESTMESSAGE_GET_BUTTONCALLBACK_OFFSET UNITYSDK_OFFSET(0xDB1C20)
#define MXUNDERCOVER_BUTTONREQUESTMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDB1C30)

namespace MXUnderCover
{
	inline static constexpr unsigned int ButtonRequestMessage_TypeDefinitionIndex = 9952;

	class ButtonRequestMessage : public Il2CppObject
	{
	public:
		::System::Action* _ButtonCallback_k__BackingField; // 0x10
		::MXUnderCover::UIUCHUDButton* Sender; // 0x18

		::System::Action* get_ButtonCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BUTTONREQUESTMESSAGE_GET_BUTTONCALLBACK_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Action* arg, ::MXUnderCover::UIUCHUDButton* arg2)
		{
			((::System::Void(*)(::System::Action*, ::MXUnderCover::UIUCHUDButton*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_BUTTONREQUESTMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

