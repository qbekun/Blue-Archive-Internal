#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ExtraHitTargetProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define EXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1734170)
#define EXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17341D0)
#define EXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1734230)

	inline static constexpr unsigned int ExtraHitTargetProjectileEntityDAOFormatter_TypeDefinitionIndex = 15500;

	class ExtraHitTargetProjectileEntityDAOFormatter : public ::System::Configuration::Assemblies::AssemblyHashAlgorithm
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ExtraHitTargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXTRAHITTARGETPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

