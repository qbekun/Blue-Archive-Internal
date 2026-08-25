#pragma once
#include "unitysdk.h"

#define BUTTONSTATE_SET_EVENTDATA_OFFSET UNITYSDK_OFFSET(0xA498AD0)
#define BUTTONSTATE_GET_BUTTON_OFFSET UNITYSDK_OFFSET(0xA498AE0)
#define BUTTONSTATE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA498AF0)
#define BUTTONSTATE_SET_BUTTON_OFFSET UNITYSDK_OFFSET(0xA498B00)
#define BUTTONSTATE_GET_EVENTDATA_OFFSET UNITYSDK_OFFSET(0xA498B10)

	inline static constexpr unsigned int ButtonState_TypeDefinitionIndex = 34925;

	class ButtonState : public Il2CppObject
	{
	public:
		InputButton* m_Button; // 0x10
		MouseButtonEventData* m_EventData; // 0x18

		::System::Void set_eventData(MouseButtonEventData* arg)
		{
			((::System::Void(*)(MouseButtonEventData*, ::PVOID))((::PBYTE)hIl2Cpp + BUTTONSTATE_SET_EVENTDATA_OFFSET))(arg, nullptr);
		}

		InputButton* get_button()
		{
			return (return (InputButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONSTATE_GET_BUTTON_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONSTATE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_button(InputButton* arg)
		{
			((::System::Void(*)(InputButton*, ::PVOID))((::PBYTE)hIl2Cpp + BUTTONSTATE_SET_BUTTON_OFFSET))(arg, nullptr);
		}

		MouseButtonEventData* get_eventData()
		{
			return (return (MouseButtonEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTONSTATE_GET_EVENTDATA_OFFSET))(nullptr);
		}

	};

