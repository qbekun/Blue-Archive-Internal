#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class SummonGroupSpawnerDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SUMMONGROUPSPAWNERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17CAAD0)
#define SUMMONGROUPSPAWNERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CE070)
#define SUMMONGROUPSPAWNERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CE0C0)

	inline static constexpr unsigned int SummonGroupSpawnerDAOFormatter_TypeDefinitionIndex = 15574;

	class SummonGroupSpawnerDAOFormatter : public __StaticArrayInitTypeSize=24
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUMMONGROUPSPAWNERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::SummonGroupSpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::SummonGroupSpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SUMMONGROUPSPAWNERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::SummonGroupSpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::SummonGroupSpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SUMMONGROUPSPAWNERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

