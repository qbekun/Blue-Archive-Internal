#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_PLUSNODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x9A0FC70)
#define SYSTEM_XML_SCHEMA_PLUSNODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x9A0FE80)
#define SYSTEM_XML_SCHEMA_PLUSNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0FEB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int PlusNode_TypeDefinitionIndex = 27979;

	class PlusNode : public Il2CppObject
	{
	public:
		::System::Void ConstructPos(::System::Xml::Schema::BitSet* arg, ::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PLUSNODE_CONSTRUCTPOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PLUSNODE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PLUSNODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

