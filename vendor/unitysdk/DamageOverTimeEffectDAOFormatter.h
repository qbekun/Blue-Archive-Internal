#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class DamageOverTimeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define DAMAGEOVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15080A0)
#define DAMAGEOVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15080F0)
#define DAMAGEOVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1505840)

	inline static constexpr unsigned int DamageOverTimeEffectDAOFormatter_TypeDefinitionIndex = 15227;

	class DamageOverTimeEffectDAOFormatter : public ::System::Diagnostics::StackTraceHiddenAttribute
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DamageOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DamageOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEOVERTIMEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DamageOverTimeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DamageOverTimeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGEOVERTIMEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGEOVERTIMEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

