#pragma once
#include "unitysdk.h"

#define TEMPLATEIDCONDITIONFORMATTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1226F00)
#define TEMPLATEIDCONDITIONFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1227170)
#define TEMPLATEIDCONDITIONFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x12271C0)

	inline static constexpr unsigned int TemplateIdConditionFormatter_TypeDefinitionIndex = 13766;

	class TemplateIdConditionFormatter : public __StaticArrayInitTypeSize=174
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TEMPLATEIDCONDITIONFORMATTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TemplateIdCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TemplateIdCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + TEMPLATEIDCONDITIONFORMATTER_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TemplateIdCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TemplateIdCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + TEMPLATEIDCONDITIONFORMATTER_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};

