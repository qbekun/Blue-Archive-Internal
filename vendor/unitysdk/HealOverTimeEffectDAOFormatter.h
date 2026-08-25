#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class HealOverTimeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define HEALOVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x156AE80)
#define HEALOVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x156AE40)
#define HEALOVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x156AED0)

	inline static constexpr unsigned int HealOverTimeEffectDAOFormatter_TypeDefinitionIndex = 15267;

	class HealOverTimeEffectDAOFormatter : public ::System::Collections::Generic::ShortEnumEqualityComparer`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HealOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HealOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HEALOVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALOVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HealOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HealOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HEALOVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

