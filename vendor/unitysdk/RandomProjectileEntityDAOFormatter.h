#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class RandomProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define RANDOMPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CA410)
#define RANDOMPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17CA460)
#define RANDOMPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17CA260)

	inline static constexpr unsigned int RandomProjectileEntityDAOFormatter_TypeDefinitionIndex = 15572;

	class RandomProjectileEntityDAOFormatter : public <InternalWriteAllBytesAsync>d__74
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::RandomProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::RandomProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + RANDOMPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::RandomProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::RandomProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + RANDOMPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RANDOMPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

