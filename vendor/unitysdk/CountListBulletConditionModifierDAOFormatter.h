#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListBulletConditionModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define COUNTLISTBULLETCONDITIONMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F13A0)
#define COUNTLISTBULLETCONDITIONMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F19E0)
#define COUNTLISTBULLETCONDITIONMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F1A30)

	inline static constexpr unsigned int CountListBulletConditionModifierDAOFormatter_TypeDefinitionIndex = 15429;

	class CountListBulletConditionModifierDAOFormatter : public DateMapping
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTBULLETCONDITIONMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListBulletConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListBulletConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTBULLETCONDITIONMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListBulletConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListBulletConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTBULLETCONDITIONMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

