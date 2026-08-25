#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class TransferredDamageEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define TRANSFERREDDAMAGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x163D720)
#define TRANSFERREDDAMAGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1641170)
#define TRANSFERREDDAMAGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16411C0)

	inline static constexpr unsigned int TransferredDamageEffectDAOFormatter_TypeDefinitionIndex = 15331;

	class TransferredDamageEffectDAOFormatter : public __StaticArrayInitTypeSize=360
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRANSFERREDDAMAGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TransferredDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TransferredDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSFERREDDAMAGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TransferredDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TransferredDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TRANSFERREDDAMAGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

