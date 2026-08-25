#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class MaxHPCapGaugeEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MAXHPCAPGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D0B00)
#define MAXHPCAPGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D0B50)
#define MAXHPCAPGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15CDEB0)

	inline static constexpr unsigned int MaxHPCapGaugeEffectDAOFormatter_TypeDefinitionIndex = 15287;

	class MaxHPCapGaugeEffectDAOFormatter : public ::System::IO::DirectoryNotFoundException
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::MaxHPCapGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::MaxHPCapGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MAXHPCAPGAUGEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::MaxHPCapGaugeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::MaxHPCapGaugeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MAXHPCAPGAUGEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAXHPCAPGAUGEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

