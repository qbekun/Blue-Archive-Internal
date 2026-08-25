#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ImmediateKillEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define IMMEDIATEKILLEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1572570)
#define IMMEDIATEKILLEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15725C0)
#define IMMEDIATEKILLEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x156EE60)

	inline static constexpr unsigned int ImmediateKillEffectDAOFormatter_TypeDefinitionIndex = 15271;

	class ImmediateKillEffectDAOFormatter : public ::System::Buffers::BuffersExtensions
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmediateKillEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmediateKillEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMEDIATEKILLEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmediateKillEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmediateKillEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMEDIATEKILLEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMEDIATEKILLEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

