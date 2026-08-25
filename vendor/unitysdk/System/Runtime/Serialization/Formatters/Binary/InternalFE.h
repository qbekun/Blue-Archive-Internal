#pragma once
#include "../../../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTERNALFE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9221610)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int InternalFE_TypeDefinitionIndex = 24673;

	class InternalFE : public Il2CppObject
	{
	public:
		::System::Runtime::Serialization::Formatters::FormatterTypeStyle* FEtypeFormat; // 0x10
		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle* FEassemblyFormat; // 0x14
		::System::Runtime::Serialization::Formatters::TypeFilterLevel* FEsecurityLevel; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE* FEserializerTypeEnum; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTERNALFE_.CTOR_OFFSET))(nullptr);
		}

	};
}

