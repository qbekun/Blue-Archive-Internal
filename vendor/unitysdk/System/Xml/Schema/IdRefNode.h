#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_IDREFNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x98F4D00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int IdRefNode_TypeDefinitionIndex = 28210;

	class IdRefNode : public Il2CppObject
	{
	public:
		::System::String* Id; // 0x10
		::System::Int32 LineNo; // 0x18
		::System::Int32 LinePos; // 0x1C
		::System::Xml::Schema::IdRefNode* Next; // 0x20

		::System::Void .ctor(::System::Xml::Schema::IdRefNode* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Xml::Schema::IdRefNode*, ::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_IDREFNODE_.CTOR_OFFSET))(arg, str, arg, arg, nullptr);
		}

	};
}

