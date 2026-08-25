#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class BulletTypeConditionModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define BULLETTYPECONDITIONMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E40E0)
#define BULLETTYPECONDITIONMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16E4130)
#define BULLETTYPECONDITIONMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16E40A0)

	inline static constexpr unsigned int BulletTypeConditionModifierDAOFormatter_TypeDefinitionIndex = 15401;

	class BulletTypeConditionModifierDAOFormatter : public HebrewValue
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::BulletTypeConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::BulletTypeConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETTYPECONDITIONMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::BulletTypeConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::BulletTypeConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + BULLETTYPECONDITIONMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BULLETTYPECONDITIONMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

