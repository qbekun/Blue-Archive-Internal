#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_INTERIORNODE_GET_LEFTCHILD_OFFSET UNITYSDK_OFFSET(0x9A0EBB0)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_SET_LEFTCHILD_OFFSET UNITYSDK_OFFSET(0x9A0EBC0)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_GET_RIGHTCHILD_OFFSET UNITYSDK_OFFSET(0x9A0EBD0)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_SET_RIGHTCHILD_OFFSET UNITYSDK_OFFSET(0x9A0EBE0)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREENORECURSIVE_OFFSET UNITYSDK_OFFSET(0x9A0EBF0)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x9A0EDA0)
#define SYSTEM_XML_SCHEMA_INTERIORNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0EE10)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int InteriorNode_TypeDefinitionIndex = 27975;

	class InteriorNode : public Il2CppObject
	{
	public:
		::System::Xml::Schema::SyntaxTreeNode* leftChild; // 0x10
		::System::Xml::Schema::SyntaxTreeNode* rightChild; // 0x18

		::System::Xml::Schema::SyntaxTreeNode* get_LeftChild()
		{
			return (return (::System::Xml::Schema::SyntaxTreeNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_GET_LEFTCHILD_OFFSET))(nullptr);
		}

		::System::Void set_LeftChild(::System::Xml::Schema::SyntaxTreeNode* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SyntaxTreeNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_SET_LEFTCHILD_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::SyntaxTreeNode* get_RightChild()
		{
			return (return (::System::Xml::Schema::SyntaxTreeNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_GET_RIGHTCHILD_OFFSET))(nullptr);
		}

		::System::Void set_RightChild(::System::Xml::Schema::SyntaxTreeNode* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SyntaxTreeNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_SET_RIGHTCHILD_OFFSET))(arg, nullptr);
		}

		::System::Void ExpandTreeNoRecursive(::System::Xml::Schema::InteriorNode* arg, ::System::Xml::Schema::SymbolsDictionary* arg, ::System::Xml::Schema::Positions* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREENORECURSIVE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* arg, ::System::Xml::Schema::SymbolsDictionary* arg, ::System::Xml::Schema::Positions* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_EXPANDTREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_INTERIORNODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

