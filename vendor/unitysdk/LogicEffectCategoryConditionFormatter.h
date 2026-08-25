#pragma once
#include "unitysdk.h"

#define LOGICEFFECTCATEGORYCONDITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1225E50)
#define LOGICEFFECTCATEGORYCONDITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1225E90)
#define LOGICEFFECTCATEGORYCONDITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1225EE0)

	inline static constexpr unsigned int LogicEffectCategoryConditionFormatter_TypeDefinitionIndex = 13762;

	class LogicEffectCategoryConditionFormatter : public ::System::Buffers::Text::FormattingHelpers
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTCATEGORYCONDITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::LogicEffectCategoryCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::LogicEffectCategoryCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTCATEGORYCONDITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::LogicEffectCategoryCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::LogicEffectCategoryCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + LOGICEFFECTCATEGORYCONDITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

