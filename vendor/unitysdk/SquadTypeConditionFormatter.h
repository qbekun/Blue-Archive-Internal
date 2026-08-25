#pragma once
#include "unitysdk.h"

#define SQUADTYPECONDITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12290B0)
#define SQUADTYPECONDITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1229640)
#define SQUADTYPECONDITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1229690)

	inline static constexpr unsigned int SquadTypeConditionFormatter_TypeDefinitionIndex = 13774;

	class SquadTypeConditionFormatter : public FindTransform
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQUADTYPECONDITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::SquadTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::SquadTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + SQUADTYPECONDITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::SquadTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::SquadTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + SQUADTYPECONDITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

