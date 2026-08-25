#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ImmuneInvokerWithLogicEffectIdEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15BAD00)
#define IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BAD60)
#define IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15BADA0)

	inline static constexpr unsigned int ImmuneInvokerWithLogicEffectIdEffectDAOFormatter_TypeDefinitionIndex = 15279;

	class ImmuneInvokerWithLogicEffectIdEffectDAOFormatter : public <>c
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerWithLogicEffectIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneInvokerWithLogicEffectIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerWithLogicEffectIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneInvokerWithLogicEffectIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEINVOKERWITHLOGICEFFECTIDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

