#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONCHECKRANDOMNUMBERFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1353790)
#define GROUNDCONDITIONCHECKRANDOMNUMBERFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x13537F0)
#define GROUNDCONDITIONCHECKRANDOMNUMBERFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1353850)

	inline static constexpr unsigned int GroundConditionCheckRandomNumberFormatter_TypeDefinitionIndex = 14327;

	class GroundConditionCheckRandomNumberFormatter : public ::System::Collections::Generic::Stack`1
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundConditionCheckRandomNumber&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundConditionCheckRandomNumber&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHECKRANDOMNUMBERFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundConditionCheckRandomNumber&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundConditionCheckRandomNumber&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHECKRANDOMNUMBERFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONCHECKRANDOMNUMBERFORMATTER_.CTOR_OFFSET))(nullptr);
		}

	};

