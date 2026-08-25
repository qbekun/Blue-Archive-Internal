#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class EchelonExtensionTypeModifierDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define ECHELONEXTENSIONTYPEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1701690)
#define ECHELONEXTENSIONTYPEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1701C50)
#define ECHELONEXTENSIONTYPEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1701CA0)

	inline static constexpr unsigned int EchelonExtensionTypeModifierDAOFormatter_TypeDefinitionIndex = 15473;

	class EchelonExtensionTypeModifierDAOFormatter : public ::System::Diagnostics::Contracts::Contract
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONEXTENSIONTYPEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::EchelonExtensionTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::EchelonExtensionTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONEXTENSIONTYPEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::EchelonExtensionTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::EchelonExtensionTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONEXTENSIONTYPEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

