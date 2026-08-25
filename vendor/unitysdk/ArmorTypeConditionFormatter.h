#pragma once
#include "unitysdk.h"

#define ARMORTYPECONDITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x122A3D0)
#define ARMORTYPECONDITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x122A900)
#define ARMORTYPECONDITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x122A950)

	inline static constexpr unsigned int ArmorTypeConditionFormatter_TypeDefinitionIndex = 13778;

	class ArmorTypeConditionFormatter : public ::System::Reflection::Emit::DynamicMethod
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARMORTYPECONDITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::ArmorTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::ArmorTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + ARMORTYPECONDITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::ArmorTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::ArmorTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + ARMORTYPECONDITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

