#pragma once
#include "../../unitysdk.h"

namespace System::Data
{
	inline static constexpr unsigned int SchemaSerializationMode_TypeDefinitionIndex = 32291;

	class SchemaSerializationMode : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Data::SchemaSerializationMode* IncludeSchema; // 0x0
		::System::Data::SchemaSerializationMode* ExcludeSchema; // 0x0

	};
}

