#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class StackDamageEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define STACKDAMAGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x161B370)
#define STACKDAMAGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x161B3D0)
#define STACKDAMAGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x161B430)

	inline static constexpr unsigned int StackDamageEffectDAOFormatter_TypeDefinitionIndex = 15317;

	class StackDamageEffectDAOFormatter : public <>c__DisplayClass3_0
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StackDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StackDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STACKDAMAGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StackDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StackDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STACKDAMAGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STACKDAMAGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

