#pragma once
#include "unitysdk.h"

#define SETSKILLDECKDECAGRAMINITABILITYINFOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1315B60)
#define SETSKILLDECKDECAGRAMINITABILITYINFOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1315BB0)
#define SETSKILLDECKDECAGRAMINITABILITYINFOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x13146C0)

	inline static constexpr unsigned int SetSkillDeckDecagramInitAbilityInfoFormatter_TypeDefinitionIndex = 14229;

	class SetSkillDeckDecagramInitAbilityInfoFormatter : public <FinishWriteAsync>d__57
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::SetSkillDeckDecagramInitAbilityInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::SetSkillDeckDecagramInitAbilityInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SETSKILLDECKDECAGRAMINITABILITYINFOFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::SetSkillDeckDecagramInitAbilityInfo&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::SetSkillDeckDecagramInitAbilityInfo&*, ::PVOID))((::PBYTE)hIl2Cpp + SETSKILLDECKDECAGRAMINITABILITYINFOFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SETSKILLDECKDECAGRAMINITABILITYINFOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

