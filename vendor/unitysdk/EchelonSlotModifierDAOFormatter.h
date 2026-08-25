#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class EchelonSlotModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define ECHELONSLOTMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1702790)
#define ECHELONSLOTMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1702750)
#define ECHELONSLOTMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17027E0)

	inline static constexpr unsigned int EchelonSlotModifierDAOFormatter_TypeDefinitionIndex = 15475;

	class EchelonSlotModifierDAOFormatter : public ::System::Diagnostics::Tracing::EventOpcode
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::EchelonSlotModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::EchelonSlotModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::EchelonSlotModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::EchelonSlotModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSLOTMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

