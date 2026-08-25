#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_PROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x95390C0)
#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x95380D0)
#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x9539140)
#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x95391B0)
#define NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9539220)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XProcessingInstructionWrapper_TypeDefinitionIndex = 32120;

	class XProcessingInstructionWrapper : public Il2CppObject
	{
	public:
		::System::Xml::Linq::XProcessingInstruction* get_ProcessingInstruction()
		{
			return (return (::System::Xml::Linq::XProcessingInstruction*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_PROCESSINGINSTRUCTION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XProcessingInstruction* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XProcessingInstruction*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_LocalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_LOCALNAME_OFFSET))(nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XPROCESSINGINSTRUCTIONWRAPPER_SET_VALUE_OFFSET))(str, nullptr);
		}

	};
}

