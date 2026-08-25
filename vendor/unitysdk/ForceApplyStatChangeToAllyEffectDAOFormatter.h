#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class ForceApplyStatChangeToAllyEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define FORCEAPPLYSTATCHANGETOALLYEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x153C820)
#define FORCEAPPLYSTATCHANGETOALLYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x153C870)
#define FORCEAPPLYSTATCHANGETOALLYEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x153C7E0)

	inline static constexpr unsigned int ForceApplyStatChangeToAllyEffectDAOFormatter_TypeDefinitionIndex = 15249;

	class ForceApplyStatChangeToAllyEffectDAOFormatter : public ::System::Collections::CaseInsensitiveComparer
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ForceApplyStatChangeToAllyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ForceApplyStatChangeToAllyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORCEAPPLYSTATCHANGETOALLYEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ForceApplyStatChangeToAllyEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ForceApplyStatChangeToAllyEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORCEAPPLYSTATCHANGETOALLYEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORCEAPPLYSTATCHANGETOALLYEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

