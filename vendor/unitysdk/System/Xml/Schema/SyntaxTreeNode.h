#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SYNTAXTREENODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_SYNTAXTREENODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_SYNTAXTREENODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_SYNTAXTREENODE_GET_ISRANGENODE_OFFSET UNITYSDK_OFFSET(0x9A0E3D0)
#define SYSTEM_XML_SCHEMA_SYNTAXTREENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0E3E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SyntaxTreeNode_TypeDefinitionIndex = 27972;

	class SyntaxTreeNode : public Il2CppObject
	{
	public:
		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* arg, ::System::Xml::Schema::SymbolsDictionary* arg, ::System::Xml::Schema::Positions* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYNTAXTREENODE_EXPANDTREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* arg, ::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYNTAXTREENODE_CONSTRUCTPOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYNTAXTREENODE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsRangeNode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYNTAXTREENODE_GET_ISRANGENODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SYNTAXTREENODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

