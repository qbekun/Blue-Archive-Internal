#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTCHILDPOS_OFFSET UNITYSDK_OFFSET(0x9A0F890)
#define SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x9A0FA10)
#define SYSTEM_XML_SCHEMA_CHOICENODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x9A0FBC0)
#define SYSTEM_XML_SCHEMA_CHOICENODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x9A0FC60)
#define SYSTEM_XML_SCHEMA_CHOICENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0EB00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ChoiceNode_TypeDefinitionIndex = 27978;

	class ChoiceNode : public Il2CppObject
	{
	public:
		::System::Void ConstructChildPos(::System::Xml::Schema::SyntaxTreeNode* arg, ::System::Xml::Schema::BitSet* arg, ::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SyntaxTreeNode*, ::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTCHILDPOS_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* arg, ::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_CONSTRUCTPOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* arg, ::System::Xml::Schema::SymbolsDictionary* arg, ::System::Xml::Schema::Positions* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_EXPANDTREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CHOICENODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

