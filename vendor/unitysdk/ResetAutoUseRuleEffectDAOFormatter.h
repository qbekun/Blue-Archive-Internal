#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ResetAutoUseRuleEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define RESETAUTOUSERULEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16CB710)
#define RESETAUTOUSERULEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16CB7B0)
#define RESETAUTOUSERULEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16CB800)

	inline static constexpr unsigned int ResetAutoUseRuleEffectDAOFormatter_TypeDefinitionIndex = 15383;

	class ResetAutoUseRuleEffectDAOFormatter : public <FlushAsyncInternal>d__38
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RESETAUTOUSERULEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ResetAutoUseRuleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ResetAutoUseRuleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + RESETAUTOUSERULEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ResetAutoUseRuleEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ResetAutoUseRuleEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + RESETAUTOUSERULEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

