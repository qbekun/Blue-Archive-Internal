#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class DeadlyAttackEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define DEADLYATTACKEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15106A0)
#define DEADLYATTACKEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15106F0)
#define DEADLYATTACKEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x150EFE0)

	inline static constexpr unsigned int DeadlyAttackEffectDAOFormatter_TypeDefinitionIndex = 15231;

	class DeadlyAttackEffectDAOFormatter : public ::System::Diagnostics::DebuggableAttribute
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DeadlyAttackEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DeadlyAttackEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DEADLYATTACKEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DeadlyAttackEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DeadlyAttackEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DEADLYATTACKEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEADLYATTACKEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

