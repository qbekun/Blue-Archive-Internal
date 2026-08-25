#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int Meta_TypeDefinitionIndex = 33766;

	class Meta : public Il2CppObject
	{
	public:
		::System::String* app; // 0x10
		::System::String* version; // 0x18
		::System::String* image; // 0x20
		::System::String* format; // 0x28
		SpriteSize* size; // 0x30
		::System::Single scale; // 0x38
		::System::String* smartupdate; // 0x40

	};

