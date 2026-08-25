#pragma once
#include "unitysdk.h"

#define GROUNDCOMMANDSETSKILLDECKDECAGRAMFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1314160)
#define GROUNDCOMMANDSETSKILLDECKDECAGRAMFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x13141B0)
#define GROUNDCOMMANDSETSKILLDECKDECAGRAMFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1314200)

	inline static constexpr unsigned int GroundCommandSetSkillDeckDecagramFormatter_TypeDefinitionIndex = 14226;

	class GroundCommandSetSkillDeckDecagramFormatter : public ::System::Collections::Generic::ICollection`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKDECAGRAMFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCommandSetSkillDeckDecagram&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCommandSetSkillDeckDecagram&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKDECAGRAMFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCommandSetSkillDeckDecagram&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCommandSetSkillDeckDecagram&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCOMMANDSETSKILLDECKDECAGRAMFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

