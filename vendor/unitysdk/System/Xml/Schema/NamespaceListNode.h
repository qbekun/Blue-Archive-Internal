#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0E500)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GETRESOLVEDSYMBOLS_OFFSET UNITYSDK_OFFSET(0x9A0E550)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x9A0E580)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x9A0EB10)
#define SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x9A0EB60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NamespaceListNode_TypeDefinitionIndex = 27974;

	class NamespaceListNode : public Il2CppObject
	{
	public:
		::System::Xml::Schema::NamespaceList* namespaceList; // 0x10
		::System::Object* particle; // 0x18

		::System::Void .ctor(::System::Xml::Schema::NamespaceList* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::NamespaceList*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::ICollection* GetResolvedSymbols(::System::Xml::Schema::SymbolsDictionary* arg)
		{
			return (return (::System::Collections::ICollection*(*)(::System::Xml::Schema::SymbolsDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GETRESOLVEDSYMBOLS_OFFSET))(arg, nullptr);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* arg, ::System::Xml::Schema::SymbolsDictionary* arg, ::System::Xml::Schema::Positions* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_EXPANDTREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* arg, ::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_CONSTRUCTPOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELISTNODE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

	};
}

