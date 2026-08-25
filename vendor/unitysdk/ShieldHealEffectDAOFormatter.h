#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ShieldHealEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define SHIELDHEALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15F9890)
#define SHIELDHEALEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15F98E0)
#define SHIELDHEALEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15F6DA0)

	inline static constexpr unsigned int ShieldHealEffectDAOFormatter_TypeDefinitionIndex = 15305;

	class ShieldHealEffectDAOFormatter : public ::System::IO::BinaryReader
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ShieldHealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ShieldHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SHIELDHEALEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ShieldHealEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ShieldHealEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + SHIELDHEALEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHIELDHEALEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

