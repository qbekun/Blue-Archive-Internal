#pragma once
#include "unitysdk.h"

#define MAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A357E0)

	inline static constexpr unsigned int Map_TypeDefinitionIndex = 28061;

	class Map : public Il2CppObject
	{
	public:
		::System::Char match; // 0x10
		::System::String* replacement; // 0x18

		::System::Void .ctor(::System::Char arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Char, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MAP_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};

