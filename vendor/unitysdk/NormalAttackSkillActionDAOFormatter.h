#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class NormalAttackSkillActionDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define NORMALATTACKSKILLACTIONDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E5850)
#define NORMALATTACKSKILLACTIONDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x17E4460)
#define NORMALATTACKSKILLACTIONDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x17E58A0)

	inline static constexpr unsigned int NormalAttackSkillActionDAOFormatter_TypeDefinitionIndex = 15603;

	class NormalAttackSkillActionDAOFormatter : public <WriteAsyncInternal>d__57
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKSKILLACTIONDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKSKILLACTIONDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::NormalAttackSkillActionDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + NORMALATTACKSKILLACTIONDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

