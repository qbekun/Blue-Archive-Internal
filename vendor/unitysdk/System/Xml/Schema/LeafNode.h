#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_LEAFNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0E3F0)
#define SYSTEM_XML_SCHEMA_LEAFNODE_GET_POS_OFFSET UNITYSDK_OFFSET(0x9A0E410)
#define SYSTEM_XML_SCHEMA_LEAFNODE_SET_POS_OFFSET UNITYSDK_OFFSET(0x9A0E420)
#define SYSTEM_XML_SCHEMA_LEAFNODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x9A0E430)
#define SYSTEM_XML_SCHEMA_LEAFNODE_CONSTRUCTPOS_OFFSET UNITYSDK_OFFSET(0x9A0E440)
#define SYSTEM_XML_SCHEMA_LEAFNODE_GET_ISNULLABLE_OFFSET UNITYSDK_OFFSET(0x9A0E4F0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int LeafNode_TypeDefinitionIndex = 27973;

	class LeafNode : public Il2CppObject
	{
	public:
		::System::Int32 pos; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Pos()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_GET_POS_OFFSET))(nullptr);
		}

		::System::Void set_Pos(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_SET_POS_OFFSET))(arg, nullptr);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* arg, ::System::Xml::Schema::SymbolsDictionary* arg, ::System::Xml::Schema::Positions* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_EXPANDTREE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ConstructPos(::System::Xml::Schema::BitSet* arg, ::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_CONSTRUCTPOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean get_IsNullable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFNODE_GET_ISNULLABLE_OFFSET))(nullptr);
		}

	};
}

