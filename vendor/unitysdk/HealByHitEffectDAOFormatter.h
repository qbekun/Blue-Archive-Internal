#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class HealByHitEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define HEALBYHITEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15531A0)
#define HEALBYHITEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1555180)
#define HEALBYHITEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15551D0)

	inline static constexpr unsigned int HealByHitEffectDAOFormatter_TypeDefinitionIndex = 15259;

	class HealByHitEffectDAOFormatter : public ::System::Collections::Generic::ByteEqualityComparer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEALBYHITEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::HealByHitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::HealByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HEALBYHITEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::HealByHitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::HealByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + HEALBYHITEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

