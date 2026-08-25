#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class TacticEntityDamageModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define TACTICENTITYDAMAGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FE930)
#define TACTICENTITYDAMAGEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16FE3A0)
#define TACTICENTITYDAMAGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16FE980)

	inline static constexpr unsigned int TacticEntityDamageModifierDAOFormatter_TypeDefinitionIndex = 15463;

	class TacticEntityDamageModifierDAOFormatter : public __StaticArrayInitTypeSize=44
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TacticEntityDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TacticEntityDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICENTITYDAMAGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICENTITYDAMAGEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TacticEntityDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TacticEntityDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICENTITYDAMAGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

