#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_TEMPLATEIDCONDITION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x12268A0)
#define MX_LOGIC_DATA_TEMPLATEIDCONDITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1226C20)
#define MX_LOGIC_DATA_TEMPLATEIDCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1226C10)
#define MX_LOGIC_DATA_TEMPLATEIDCONDITION_SHOULDSERIALIZELIST_OFFSET UNITYSDK_OFFSET(0x1226EB0)
#define MX_LOGIC_DATA_TEMPLATEIDCONDITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1226C30)
#define MX_LOGIC_DATA_TEMPLATEIDCONDITION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1226F40)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TemplateIdCondition_TypeDefinitionIndex = 13767;

	class TemplateIdCondition : public Il2CppObject
	{
	public:
		Il2CppObject* List; // 0x10
		::System::Boolean CountFalseCondition; // 0x18

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TemplateIdCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TemplateIdCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEMPLATEIDCONDITION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEMPLATEIDCONDITION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEMPLATEIDCONDITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializeList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEMPLATEIDCONDITION_SHOULDSERIALIZELIST_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEMPLATEIDCONDITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TemplateIdCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TemplateIdCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TEMPLATEIDCONDITION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

