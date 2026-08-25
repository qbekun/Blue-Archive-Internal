#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackReader&; }
namespace MX::GameData::DAO::Battle { class ForceAppliedStatChangeFromSingleTargetEffectDAO&; }
namespace MemoryPack { class MemoryPackWriter&; }

#define FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1540F60)
#define FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1543AF0)
#define FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1543B40)

	inline static constexpr unsigned int ForceAppliedStatChangeFromSingleTargetEffectDAOFormatter_TypeDefinitionIndex = 15251;

	class ForceAppliedStatChangeFromSingleTargetEffectDAOFormatter : public ::System::Collections::CompatibleComparer
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::ForceAppliedStatChangeFromSingleTargetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::ForceAppliedStatChangeFromSingleTargetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::ForceAppliedStatChangeFromSingleTargetEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::ForceAppliedStatChangeFromSingleTargetEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + FORCEAPPLIEDSTATCHANGEFROMSINGLETARGETEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

