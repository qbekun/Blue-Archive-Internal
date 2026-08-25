#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class NontargetDestructibleProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define NONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x173EF20)
#define NONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x173EF70)
#define NONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x173A1E0)

	inline static constexpr unsigned int NontargetDestructibleProjectileEntityDAOFormatter_TypeDefinitionIndex = 15504;

	class NontargetDestructibleProjectileEntityDAOFormatter : public ::System::IO::StreamHelpers
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NontargetDestructibleProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NontargetDestructibleProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NontargetDestructibleProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NontargetDestructibleProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONTARGETDESTRUCTIBLEPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

