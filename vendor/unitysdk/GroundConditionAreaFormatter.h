#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONAREAFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1344240)
#define GROUNDCONDITIONAREAFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1344290)
#define GROUNDCONDITIONAREAFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1342620)

	inline static constexpr unsigned int GroundConditionAreaFormatter_TypeDefinitionIndex = 14299;

	class GroundConditionAreaFormatter : public ::System::Collections::Generic::LowLevelDictionary`2
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionArea&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionArea&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionArea&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONAREAFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

