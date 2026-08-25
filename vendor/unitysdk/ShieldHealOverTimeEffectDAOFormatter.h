#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ShieldHealOverTimeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define SHIELDHEALOVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15FE7C0)
#define SHIELDHEALOVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15F9C70)
#define SHIELDHEALOVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15FE810)

	inline static constexpr unsigned int ShieldHealOverTimeEffectDAOFormatter_TypeDefinitionIndex = 15307;

	class ShieldHealOverTimeEffectDAOFormatter : public ::System::IO::BinaryWriter
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ShieldHealOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ShieldHealOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SHIELDHEALOVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHIELDHEALOVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ShieldHealOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ShieldHealOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SHIELDHEALOVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

