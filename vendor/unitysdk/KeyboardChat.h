#pragma once
#include "unitysdk.h"

#define KEYBOARDCHAT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BCAF60)

	inline static constexpr unsigned int KeyboardChat_TypeDefinitionIndex = 25624;

	class KeyboardChat : public Il2CppObject
	{
	public:
		::System::String* message; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEYBOARDCHAT_.CTOR_OFFSET))(nullptr);
		}

	};

