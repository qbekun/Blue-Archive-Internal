#pragma once
#include "unitysdk.h"

#define DICEDISPLAYINFOS_.CTOR_OFFSET UNITYSDK_OFFSET(0xB51840)

	inline static constexpr unsigned int DiceDisplayinfos_TypeDefinitionIndex = 8371;

	class DiceDisplayinfos : public Il2CppObject
	{
	public:
		::System::Int32 DiceCount; // 0x10
		::System::String* SpriteName; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICEDISPLAYINFOS_.CTOR_OFFSET))(nullptr);
		}

	};

