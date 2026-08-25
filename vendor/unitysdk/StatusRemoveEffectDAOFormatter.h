#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class StatusRemoveEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define STATUSREMOVEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x163D350)
#define STATUSREMOVEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x163D300)
#define STATUSREMOVEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x163D3A0)

	inline static constexpr unsigned int StatusRemoveEffectDAOFormatter_TypeDefinitionIndex = 15329;

	class StatusRemoveEffectDAOFormatter : public __StaticArrayInitTypeSize=6
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::StatusRemoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::StatusRemoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSREMOVEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATUSREMOVEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::StatusRemoveEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::StatusRemoveEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + STATUSREMOVEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

