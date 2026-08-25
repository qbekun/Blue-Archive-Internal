#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x133D1D0)
#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x133C0E0)
#define GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x133D220)

	inline static constexpr unsigned int GroundConditionAliveCharacterCountCheckBySpawnTemplateIdFormatter_TypeDefinitionIndex = 14282;

	class GroundConditionAliveCharacterCountCheckBySpawnTemplateIdFormatter : public Entry
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheckBySpawnTemplateId&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheckBySpawnTemplateId&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheckBySpawnTemplateId&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionAliveCharacterCountCheckBySpawnTemplateId&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONALIVECHARACTERCOUNTCHECKBYSPAWNTEMPLATEIDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

