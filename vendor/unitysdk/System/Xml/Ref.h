#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_REF_EQUAL_OFFSET UNITYSDK_OFFSET(0x99A0890)

namespace System::Xml
{
	inline static constexpr unsigned int Ref_TypeDefinitionIndex = 27797;

	class Ref : public Il2CppObject
	{
	public:
		::System::Boolean Equal(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_REF_EQUAL_OFFSET))(str, str, nullptr);
		}

	};
}

