#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ImmuneInvokerWithoutLogicEffectIdEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15C1860)
#define IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15C18B0)
#define IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15BED40)

	inline static constexpr unsigned int ImmuneInvokerWithoutLogicEffectIdEffectDAOFormatter_TypeDefinitionIndex = 15281;

	class ImmuneInvokerWithoutLogicEffectIdEffectDAOFormatter : public ::System::Buffers::ReadOnlySequence`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerWithoutLogicEffectIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneInvokerWithoutLogicEffectIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerWithoutLogicEffectIdEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneInvokerWithoutLogicEffectIdEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUNEINVOKERWITHOUTLOGICEFFECTIDEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

