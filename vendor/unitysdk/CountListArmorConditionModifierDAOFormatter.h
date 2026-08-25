#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class CountListArmorConditionModifierDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define COUNTLISTARMORCONDITIONMODIFIERDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16F0C30)
#define COUNTLISTARMORCONDITIONMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F0C70)
#define COUNTLISTARMORCONDITIONMODIFIERDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16F0CC0)

	inline static constexpr unsigned int CountListArmorConditionModifierDAOFormatter_TypeDefinitionIndex = 15427;

	class CountListArmorConditionModifierDAOFormatter : public ::System::Globalization::ThaiBuddhistCalendar
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTARMORCONDITIONMODIFIERDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::CountListArmorConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::CountListArmorConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTARMORCONDITIONMODIFIERDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::CountListArmorConditionModifierDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::CountListArmorConditionModifierDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + COUNTLISTARMORCONDITIONMODIFIERDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

