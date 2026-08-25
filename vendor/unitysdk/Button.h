#pragma once
#include "unitysdk.h"

#define BUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB23C0)
#define BUTTON_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x9FB23D0)
#define BUTTON_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x9FB23E0)

	inline static constexpr unsigned int Button_TypeDefinitionIndex = 33954;

	class Button : public Il2CppObject
	{
	public:
		::System::Action* _action_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTON_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_action(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BUTTON_SET_ACTION_OFFSET))(arg, nullptr);
		}

		::System::Action* get_action()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + BUTTON_GET_ACTION_OFFSET))(nullptr);
		}

	};

