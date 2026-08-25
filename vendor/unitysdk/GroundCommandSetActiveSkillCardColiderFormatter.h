#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12F9B20)
#define GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12FA7D0)
#define GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12FA820)

	inline static constexpr unsigned int GroundCommandSetActiveSkillCardColiderFormatter_TypeDefinitionIndex = 14204;

	class GroundCommandSetActiveSkillCardColiderFormatter : public Entry
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetActiveSkillCardColider&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetActiveSkillCardColider&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetActiveSkillCardColider&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetActiveSkillCardColider&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETACTIVESKILLCARDCOLIDERFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

