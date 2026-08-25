#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class WeaponConditionalModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define WEAPONCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1700790)
#define WEAPONCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17007E0)
#define WEAPONCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1700610)

	inline static constexpr unsigned int WeaponConditionalModifierDAOFormatter_TypeDefinitionIndex = 15469;

	class WeaponConditionalModifierDAOFormatter : public __StaticArrayInitTypeSize=10800
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::WeaponConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::WeaponConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONCONDITIONALMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::WeaponConditionalModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::WeaponConditionalModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + WEAPONCONDITIONALMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEAPONCONDITIONALMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

