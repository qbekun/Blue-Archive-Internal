#pragma once
#include "unitysdk.h"

#define RETREATAPPLIEDLOGICEFFECTGROUPIDFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FB5A0)
#define RETREATAPPLIEDLOGICEFFECTGROUPIDFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11FBB30)
#define RETREATAPPLIEDLOGICEFFECTGROUPIDFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11FBB80)

	inline static constexpr unsigned int RetreatAppliedLogicEffectGroupidFormatter_TypeDefinitionIndex = 13685;

	class RetreatAppliedLogicEffectGroupidFormatter : public <FlushWriteAsync>d__42
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETREATAPPLIEDLOGICEFFECTGROUPIDFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::RetreatAppliedLogicEffectGroupid&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::RetreatAppliedLogicEffectGroupid&*, ::PVOID))((::PBYTE)hIl2Cpp + RETREATAPPLIEDLOGICEFFECTGROUPIDFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::RetreatAppliedLogicEffectGroupid&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::RetreatAppliedLogicEffectGroupid&*, ::PVOID))((::PBYTE)hIl2Cpp + RETREATAPPLIEDLOGICEFFECTGROUPIDFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

