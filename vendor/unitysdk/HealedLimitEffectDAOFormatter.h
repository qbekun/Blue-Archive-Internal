#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class HealedLimitEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define HEALEDLIMITEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1560850)
#define HEALEDLIMITEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1560800)
#define HEALEDLIMITEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15608A0)

	inline static constexpr unsigned int HealedLimitEffectDAOFormatter_TypeDefinitionIndex = 15263;

	class HealedLimitEffectDAOFormatter : public ::System::Collections::Generic::LongEnumEqualityComparer`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HealedLimitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HealedLimitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HEALEDLIMITEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALEDLIMITEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HealedLimitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HealedLimitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HEALEDLIMITEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

