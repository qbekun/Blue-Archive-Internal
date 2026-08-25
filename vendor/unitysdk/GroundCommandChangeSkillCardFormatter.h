#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDCHANGESKILLCARDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12C3EB0)
#define GROUNDCOMMANDCHANGESKILLCARDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C58D0)
#define GROUNDCOMMANDCHANGESKILLCARDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12C5920)

	inline static constexpr unsigned int GroundCommandChangeSkillCardFormatter_TypeDefinitionIndex = 14143;

	class GroundCommandChangeSkillCardFormatter : public bucket
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGESKILLCARDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandChangeSkillCard&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandChangeSkillCard&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGESKILLCARDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandChangeSkillCard&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandChangeSkillCard&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDCHANGESKILLCARDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

