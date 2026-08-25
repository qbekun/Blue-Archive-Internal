#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class NontargetDestructibleOnRailsProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1744B10)
#define NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x173FAB0)
#define NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1744B60)

	inline static constexpr unsigned int NontargetDestructibleOnRailsProjectileEntityDAOFormatter_TypeDefinitionIndex = 15506;

	class NontargetDestructibleOnRailsProjectileEntityDAOFormatter : public ::System::IO::SeekOrigin
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NontargetDestructibleOnRailsProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NontargetDestructibleOnRailsProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NontargetDestructibleOnRailsProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NontargetDestructibleOnRailsProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEONRAILSPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

