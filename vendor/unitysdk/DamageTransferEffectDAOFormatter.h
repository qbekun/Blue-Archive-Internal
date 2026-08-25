#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class DamageTransferEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define DAMAGETRANSFEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x150CBF0)
#define DAMAGETRANSFEREFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x150CC40)
#define DAMAGETRANSFEREFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x150CB40)

	inline static constexpr unsigned int DamageTransferEffectDAOFormatter_TypeDefinitionIndex = 15229;

	class DamageTransferEffectDAOFormatter : public ::System::Diagnostics::DebuggerStepThroughAttribute
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::DamageTransferEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::DamageTransferEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGETRANSFEREFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::DamageTransferEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::DamageTransferEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + DAMAGETRANSFEREFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGETRANSFEREFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

