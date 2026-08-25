#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ChangeGaugeUITypeEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define CHANGEGAUGEUITYPEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1520C70)
#define CHANGEGAUGEUITYPEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1520D10)
#define CHANGEGAUGEUITYPEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1520D60)

	inline static constexpr unsigned int ChangeGaugeUITypeEffectDAOFormatter_TypeDefinitionIndex = 15239;

	class ChangeGaugeUITypeEffectDAOFormatter : public FormatLiterals
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGEGAUGEUITYPEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ChangeGaugeUITypeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ChangeGaugeUITypeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEGAUGEUITYPEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ChangeGaugeUITypeEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ChangeGaugeUITypeEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEGAUGEUITYPEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

