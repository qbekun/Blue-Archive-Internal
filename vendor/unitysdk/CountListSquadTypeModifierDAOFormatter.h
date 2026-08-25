#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListSquadTypeModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define COUNTLISTSQUADTYPEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EFF00)
#define COUNTLISTSQUADTYPEMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16EFEC0)
#define COUNTLISTSQUADTYPEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16EFF50)

	inline static constexpr unsigned int CountListSquadTypeModifierDAOFormatter_TypeDefinitionIndex = 15425;

	class CountListSquadTypeModifierDAOFormatter : public ::System::Globalization::EncodingTable
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListSquadTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListSquadTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTSQUADTYPEMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTSQUADTYPEMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListSquadTypeModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListSquadTypeModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTSQUADTYPEMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

