#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ImmuneInvokerLogicEffectIdCondtionEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x15C81D0)
#define IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x15C5750)
#define IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15C8220)

	inline static constexpr unsigned int ImmuneInvokerLogicEffectIdCondtionEffectDAOFormatter_TypeDefinitionIndex = 15283;

	class ImmuneInvokerLogicEffectIdCondtionEffectDAOFormatter : public SequenceType
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerLogicEffectIdCondtionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ImmuneInvokerLogicEffectIdCondtionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ImmuneInvokerLogicEffectIdCondtionEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ImmuneInvokerLogicEffectIdCondtionEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + IMMUNEINVOKERLOGICEFFECTIDCONDTIONEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

