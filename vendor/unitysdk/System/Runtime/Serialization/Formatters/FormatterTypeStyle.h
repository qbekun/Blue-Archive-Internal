#pragma once
#include "../../../../unitysdk.h"

namespace System::Runtime::Serialization::Formatters
{
	inline static constexpr unsigned int FormatterTypeStyle_TypeDefinitionIndex = 24616;

	class FormatterTypeStyle : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Runtime::Serialization::Formatters::FormatterTypeStyle* TypesWhenNeeded; // 0x0
		::System::Runtime::Serialization::Formatters::FormatterTypeStyle* TypesAlways; // 0x0
		::System::Runtime::Serialization::Formatters::FormatterTypeStyle* XsdString; // 0x0

	};
}

