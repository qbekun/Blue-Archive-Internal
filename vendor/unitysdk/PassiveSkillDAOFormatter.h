#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class PassiveSkillDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define PASSIVESKILLDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17EF9B0)
#define PASSIVESKILLDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17EE8D0)
#define PASSIVESKILLDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17EFA00)

	inline static constexpr unsigned int PassiveSkillDAOFormatter_TypeDefinitionIndex = 15610;

	class PassiveSkillDAOFormatter : public ::System::IO::TextWriter
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::PassiveSkillDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::PassiveSkillDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + PASSIVESKILLDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PASSIVESKILLDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::PassiveSkillDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::PassiveSkillDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + PASSIVESKILLDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

