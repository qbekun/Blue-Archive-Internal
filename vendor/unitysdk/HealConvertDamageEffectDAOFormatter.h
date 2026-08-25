#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class HealConvertDamageEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define HEALCONVERTDAMAGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x155ACA0)
#define HEALCONVERTDAMAGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1555550)
#define HEALCONVERTDAMAGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x155ACF0)

	inline static constexpr unsigned int HealConvertDamageEffectDAOFormatter_TypeDefinitionIndex = 15261;

	class HealConvertDamageEffectDAOFormatter : public ::System::Collections::Generic::EnumEqualityComparer`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HealConvertDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HealConvertDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HEALCONVERTDAMAGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALCONVERTDAMAGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HealConvertDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HealConvertDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HEALCONVERTDAMAGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

