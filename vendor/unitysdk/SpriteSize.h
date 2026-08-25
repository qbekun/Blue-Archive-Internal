#pragma once
#include "unitysdk.h"

#define SPRITESIZE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA1890D0)

	inline static constexpr unsigned int SpriteSize_TypeDefinitionIndex = 33764;

	class SpriteSize : public Il2CppObject
	{
	public:
		::System::Single w; // 0x10
		::System::Single h; // 0x14

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPRITESIZE_TOSTRING_OFFSET))(nullptr);
		}

	};

