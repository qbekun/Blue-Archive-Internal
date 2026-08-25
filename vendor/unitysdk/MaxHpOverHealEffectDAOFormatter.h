#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class MaxHpOverHealEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define MAXHPOVERHEALEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1659CA0)
#define MAXHPOVERHEALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x165D0E0)
#define MAXHPOVERHEALEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x165D130)

	inline static constexpr unsigned int MaxHpOverHealEffectDAOFormatter_TypeDefinitionIndex = 15343;

	class MaxHpOverHealEffectDAOFormatter : public ::System::IO::FileAccess
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAXHPOVERHEALEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::MaxHpOverHealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::MaxHpOverHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MAXHPOVERHEALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::MaxHpOverHealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::MaxHpOverHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MAXHPOVERHEALEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

