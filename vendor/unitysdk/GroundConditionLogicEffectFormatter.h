#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONLOGICEFFECTFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1362E70)
#define GROUNDCONDITIONLOGICEFFECTFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1361880)
#define GROUNDCONDITIONLOGICEFFECTFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1362EC0)

	inline static constexpr unsigned int GroundConditionLogicEffectFormatter_TypeDefinitionIndex = 14339;

	class GroundConditionLogicEffectFormatter : public ::System::Collections::Generic::LowLevelListWithIList`1
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionLogicEffect&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionLogicEffect&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONLOGICEFFECTFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONLOGICEFFECTFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionLogicEffect&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionLogicEffect&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONLOGICEFFECTFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

