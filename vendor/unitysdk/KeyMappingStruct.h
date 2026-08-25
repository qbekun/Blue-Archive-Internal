#pragma once
#include "unitysdk.h"

	inline static constexpr unsigned int KeyMappingStruct_TypeDefinitionIndex = 4119;

	class KeyMappingStruct : public Il2CppObject
	{
	public:
		::System::String* Id; // 0x10
		::System::String* TargetKeyCode; // 0x18
		::System::String* AlterTargetKeyCode; // 0x20
		::System::Boolean isDisplay; // 0x28
		::System::Boolean isUsed; // 0x29
		::System::Boolean isLongPress; // 0x2A
		::System::Boolean IgnorePosCheck; // 0x2B
		::System::Single IconPositionX; // 0x2C
		::System::Single IconPositionY; // 0x30
		::System::Single IconScaleX; // 0x34
		::System::Single IconScaleY; // 0x38

	};

