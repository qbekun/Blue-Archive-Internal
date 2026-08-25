#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SEQUENCENODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x9A0EE20)
#define SYSTEM_XML_SCHEMA_SEQUENCENODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x9A0F700)
#define SYSTEM_XML_SCHEMA_SEQUENCENODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x9A0F870)
#define SYSTEM_XML_SCHEMA_SEQUENCENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0F880)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SequenceNode_TypeDefinitionIndex = 27977;

	class SequenceNode : public Il2CppObject
	{
	public:
		::System::Void ConstructPos(::System::Xml::Schema::BitSet* arg, ::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE_CONSTRUCTPOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* arg, ::System::Xml::Schema::SymbolsDictionary* arg, ::System::Xml::Schema::Positions* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE_EXPANDTREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SEQUENCENODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

