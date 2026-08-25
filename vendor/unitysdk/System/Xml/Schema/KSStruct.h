#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_KSSTRUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0B610)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int KSStruct_TypeDefinitionIndex = 27964;

	class KSStruct : public Il2CppObject
	{
	public:
		::System::Int32 depth; // 0x10
		::System::Xml::Schema::KeySequence* ks; // 0x18
		::Il2CppArray<::System::Object*>* fields; // 0x20

		::System::Void .ctor(::System::Xml::Schema::KeySequence* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Xml::Schema::KeySequence*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KSSTRUCT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

