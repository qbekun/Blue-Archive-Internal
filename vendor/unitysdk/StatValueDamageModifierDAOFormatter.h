#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class StatValueDamageModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define STATVALUEDAMAGEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1702B60)
#define STATVALUEDAMAGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17032D0)
#define STATVALUEDAMAGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1703320)

	inline static constexpr unsigned int StatValueDamageModifierDAOFormatter_TypeDefinitionIndex = 15477;

	class StatValueDamageModifierDAOFormatter : public <>c__DisplayClass7_0
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATVALUEDAMAGEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatValueDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatValueDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATVALUEDAMAGEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatValueDamageModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatValueDamageModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATVALUEDAMAGEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

