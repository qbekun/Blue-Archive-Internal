#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETSKILLDECKFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x130E7B0)
#define GROUNDCOMMANDSETSKILLDECKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1310EE0)
#define GROUNDCOMMANDSETSKILLDECKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1310F30)

	inline static constexpr unsigned int GroundCommandSetSkillDeckFormatter_TypeDefinitionIndex = 14224;

	class GroundCommandSetSkillDeckFormatter : public ::System::Collections::Generic::Dictionary`2
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetSkillDeck&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetSkillDeck&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

