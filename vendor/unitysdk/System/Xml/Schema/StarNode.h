#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_STARNODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x9A0FF10)
#define SYSTEM_XML_SCHEMA_STARNODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x9A10120)
#define SYSTEM_XML_SCHEMA_STARNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A10130)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int StarNode_TypeDefinitionIndex = 27981;

	class StarNode : public Il2CppObject
	{
	public:
		::System::Void ConstructPos(::System::Xml::Schema::BitSet* arg, ::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STARNODE_CONSTRUCTPOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STARNODE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_STARNODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

