#pragma once
#include "unitysdk.h"

#define LOGICEFFECTTYPECONDITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1227A20)
#define LOGICEFFECTTYPECONDITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12274F0)
#define LOGICEFFECTTYPECONDITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1227A70)

	inline static constexpr unsigned int LogicEffectTypeConditionFormatter_TypeDefinitionIndex = 13768;

	class LogicEffectTypeConditionFormatter : public ::System::Buffers::Text::NumberBuffer
	{
	public:
		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::LogicEffectTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::LogicEffectTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTTYPECONDITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTTYPECONDITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::LogicEffectTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::LogicEffectTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTTYPECONDITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

