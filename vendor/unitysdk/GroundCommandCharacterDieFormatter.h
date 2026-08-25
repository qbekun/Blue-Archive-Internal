#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCHARACTERDIEFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C7940)
#define GROUNDCOMMANDCHARACTERDIEFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12C79A0)
#define GROUNDCOMMANDCHARACTERDIEFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C79E0)

	inline static constexpr unsigned int GroundCommandCharacterDieFormatter_TypeDefinitionIndex = 14145;

	class GroundCommandCharacterDieFormatter : public KeyCollection
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandCharacterDie&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandCharacterDie&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERDIEFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERDIEFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandCharacterDie&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandCharacterDie&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHARACTERDIEFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

