#pragma once
#include "unitysdk.h"

#define LOGICEFFECTGROUPIDCONDITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1226800)
#define LOGICEFFECTGROUPIDCONDITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x12261B0)
#define LOGICEFFECTGROUPIDCONDITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1226850)

	inline static constexpr unsigned int LogicEffectGroupIdConditionFormatter_TypeDefinitionIndex = 13764;

	class LogicEffectGroupIdConditionFormatter : public ::System::Buffers::Text::Utf8Formatter
	{
	public:
		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::LogicEffectGroupIdCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::LogicEffectGroupIdCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTGROUPIDCONDITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTGROUPIDCONDITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::LogicEffectGroupIdCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::LogicEffectGroupIdCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTGROUPIDCONDITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

