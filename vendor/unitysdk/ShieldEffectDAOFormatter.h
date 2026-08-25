#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ShieldEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define SHIELDEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15F4C80)
#define SHIELDEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15F01C0)
#define SHIELDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15F4CD0)

	inline static constexpr unsigned int ShieldEffectDAOFormatter_TypeDefinitionIndex = 15303;

	class ShieldEffectDAOFormatter : public ::System::IO::Stream
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ShieldEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ShieldEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SHIELDEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHIELDEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ShieldEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ShieldEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SHIELDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

