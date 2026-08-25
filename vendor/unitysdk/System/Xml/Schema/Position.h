#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_POSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0E1E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Position_TypeDefinitionIndex = 27970;

	class Position : public Il2CppObject
	{
	public:
		::System::Int32 symbol; // 0x10
		::System::Object* particle; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_POSITION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

