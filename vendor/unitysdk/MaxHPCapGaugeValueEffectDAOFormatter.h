#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class MaxHPCapGaugeValueEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define MAXHPCAPGAUGEVALUEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15D2EA0)
#define MAXHPCAPGAUGEVALUEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D44F0)
#define MAXHPCAPGAUGEVALUEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D4540)

	inline static constexpr unsigned int MaxHPCapGaugeValueEffectDAOFormatter_TypeDefinitionIndex = 15289;

	class MaxHPCapGaugeValueEffectDAOFormatter : public ::System::IO::EndOfStreamException
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAXHPCAPGAUGEVALUEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::MaxHPCapGaugeValueEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::MaxHPCapGaugeValueEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MAXHPCAPGAUGEVALUEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::MaxHPCapGaugeValueEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::MaxHPCapGaugeValueEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + MAXHPCAPGAUGEVALUEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

