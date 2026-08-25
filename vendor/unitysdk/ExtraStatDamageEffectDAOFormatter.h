#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ExtraStatDamageEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define EXTRASTATDAMAGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1536A30)
#define EXTRASTATDAMAGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1536A90)
#define EXTRASTATDAMAGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1536AD0)

	inline static constexpr unsigned int ExtraStatDamageEffectDAOFormatter_TypeDefinitionIndex = 15247;

	class ExtraStatDamageEffectDAOFormatter : public ::System::Collections::Comparer
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ExtraStatDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ExtraStatDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EXTRASTATDAMAGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXTRASTATDAMAGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ExtraStatDamageEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ExtraStatDamageEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + EXTRASTATDAMAGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

