#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class TargetBounceProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define TARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x172EFB0)
#define TARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x172F000)
#define TARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x172A670)

	inline static constexpr unsigned int TargetBounceProjectileEntityDAOFormatter_TypeDefinitionIndex = 15498;

	class TargetBounceProjectileEntityDAOFormatter : public __StaticArrayInitTypeSize=84
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetBounceProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TARGETBOUNCEPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

