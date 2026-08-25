#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ShieldHealByHitEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define SHIELDHEALBYHITEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16D62A0)
#define SHIELDHEALBYHITEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16DBF90)
#define SHIELDHEALBYHITEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x16DBFE0)

	inline static constexpr unsigned int ShieldHealByHitEffectDAOFormatter_TypeDefinitionIndex = 15389;

	class ShieldHealByHitEffectDAOFormatter : public ::System::IO::__Error
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHIELDHEALBYHITEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ShieldHealByHitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ShieldHealByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SHIELDHEALBYHITEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ShieldHealByHitEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ShieldHealByHitEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SHIELDHEALBYHITEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

