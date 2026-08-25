#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class RandomProjectileEntitySpawnerDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define RANDOMPROJECTILEENTITYSPAWNERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C9C80)
#define RANDOMPROJECTILEENTITYSPAWNERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17C9CD0)
#define RANDOMPROJECTILEENTITYSPAWNERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17C7880)

	inline static constexpr unsigned int RandomProjectileEntitySpawnerDAOFormatter_TypeDefinitionIndex = 15570;

	class RandomProjectileEntitySpawnerDAOFormatter : public ::System::IO::File
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RandomProjectileEntitySpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RandomProjectileEntitySpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + RANDOMPROJECTILEENTITYSPAWNERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RandomProjectileEntitySpawnerDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RandomProjectileEntitySpawnerDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + RANDOMPROJECTILEENTITYSPAWNERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMPROJECTILEENTITYSPAWNERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

