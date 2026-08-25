#pragma once
#include "unitysdk.h"

#define GROUNDCONDITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1337900)
#define GROUNDCONDITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1338660)
#define GROUNDCONDITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1337840)
#define GROUNDCONDITIONFORMATTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1338C30)

	inline static constexpr unsigned int GroundConditionFormatter_TypeDefinitionIndex = 14278;

	class GroundConditionFormatter : public ::System::Collections::Generic::ArrayBuilder`1
	{
	public:
		Il2CppObject* __typeToTag; // 0x0

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::GroundCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::GroundCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::GroundCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::GroundCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GROUNDCONDITIONFORMATTER_.CCTOR_OFFSET))(nullptr);
		}

	};

