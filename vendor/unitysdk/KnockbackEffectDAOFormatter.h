#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class KnockbackEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define KNOCKBACKEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15CBE10)
#define KNOCKBACKEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15C9C80)
#define KNOCKBACKEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15CBE60)

	inline static constexpr unsigned int KnockbackEffectDAOFormatter_TypeDefinitionIndex = 15285;

	class KnockbackEffectDAOFormatter : public ::System::Buffers::ReadOnlySequence
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::KnockbackEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::KnockbackEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + KNOCKBACKEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOCKBACKEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::KnockbackEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::KnockbackEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + KNOCKBACKEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

