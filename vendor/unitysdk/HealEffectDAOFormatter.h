#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class HealEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define HEALEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1565920)
#define HEALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1565960)
#define HEALEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15659B0)

	inline static constexpr unsigned int HealEffectDAOFormatter_TypeDefinitionIndex = 15265;

	class HealEffectDAOFormatter : public ::System::Collections::Generic::SByteEnumEqualityComparer`1
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HEALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HEALEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

