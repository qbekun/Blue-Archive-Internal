#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class NontargetProjectileEntityDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define NONTARGETPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1734B80)
#define NONTARGETPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1739720)
#define NONTARGETPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1739770)

	inline static constexpr unsigned int NontargetProjectileEntityDAOFormatter_TypeDefinitionIndex = 15502;

	class NontargetProjectileEntityDAOFormatter : public NullStreamReader
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONTARGETPROJECTILEENTITYDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NONTARGETPROJECTILEENTITYDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NontargetProjectileEntityDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NONTARGETPROJECTILEENTITYDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

