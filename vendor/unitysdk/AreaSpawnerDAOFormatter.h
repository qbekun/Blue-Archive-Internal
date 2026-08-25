#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class AreaSpawnerDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define AREASPAWNERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17C0D40)
#define AREASPAWNERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C1EE0)
#define AREASPAWNERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C1F30)

	inline static constexpr unsigned int AreaSpawnerDAOFormatter_TypeDefinitionIndex = 15566;

	class AreaSpawnerDAOFormatter : public ::System::Reflection::StrongNameKeyPair
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AREASPAWNERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::AreaSpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::AreaSpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AREASPAWNERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::AreaSpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::AreaSpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + AREASPAWNERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

