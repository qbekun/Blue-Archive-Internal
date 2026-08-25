#pragma once
#include "unitysdk.h"

namespace MemoryPack { class MemoryPackWriter&; }
namespace MX::GameData::DAO::Battle { class TargetSlotExSkillCostOverrideEffectDAO&; }
namespace MemoryPack { class MemoryPackReader&; }

#define TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAOFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x16803F0)
#define TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAOFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1680430)
#define TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1680480)

	inline static constexpr unsigned int TargetSlotExSkillCostOverrideEffectDAOFormatter_TypeDefinitionIndex = 15357;

	class TargetSlotExSkillCostOverrideEffectDAOFormatter : public __StaticArrayInitTypeSize=170
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAOFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAOFORMATTER_SERIALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO&* arg)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::GameData::DAO::Battle::TargetSlotExSkillCostOverrideEffectDAO&*, ::PVOID))((::PBYTE)hIl2Cpp + TARGETSLOTEXSKILLCOSTOVERRIDEEFFECTDAOFORMATTER_DESERIALIZE_OFFSET))(arg, arg, nullptr);
		}

	};

