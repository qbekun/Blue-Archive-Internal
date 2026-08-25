#pragma once
#include "unitysdk.h"

#define TACTICROLECONDITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1227DF0)
#define TACTICROLECONDITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1228380)
#define TACTICROLECONDITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12283D0)

	inline static constexpr unsigned int TacticRoleConditionFormatter_TypeDefinitionIndex = 13770;

	class TacticRoleConditionFormatter : public __StaticArrayInitTypeSize=52
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TACTICROLECONDITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TacticRoleCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TacticRoleCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICROLECONDITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TacticRoleCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TacticRoleCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + TACTICROLECONDITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

