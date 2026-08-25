#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A10140)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A10180)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_MAX_OFFSET UNITYSDK_OFFSET(0x9A101C0)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_MIN_OFFSET UNITYSDK_OFFSET(0x9A101D0)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_NEXTITERATION_OFFSET UNITYSDK_OFFSET(0x9A101E0)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_SET_NEXTITERATION_OFFSET UNITYSDK_OFFSET(0x9A101F0)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_ISRANGENODE_OFFSET UNITYSDK_OFFSET(0x9A10200)
#define SYSTEM_XML_SCHEMA_LEAFRANGENODE_EXPANDTREE_OFFSET UNITYSDK_OFFSET(0x9A10210)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int LeafRangeNode_TypeDefinitionIndex = 27982;

	class LeafRangeNode : public Il2CppObject
	{
	public:
		::System::Decimal* min; // 0x18
		::System::Decimal* max; // 0x28
		::System::Xml::Schema::BitSet* nextIteration; // 0x38

		::System::Void .ctor(::System::Decimal* arg, ::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Decimal* arg, ::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Decimal*, ::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Decimal* get_Max()
		{
			return (return (::System::Decimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_MAX_OFFSET))(nullptr);
		}

		::System::Decimal* get_Min()
		{
			return (return (::System::Decimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_MIN_OFFSET))(nullptr);
		}

		::System::Xml::Schema::BitSet* get_NextIteration()
		{
			return (return (::System::Xml::Schema::BitSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_NEXTITERATION_OFFSET))(nullptr);
		}

		::System::Void set_NextIteration(::System::Xml::Schema::BitSet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_SET_NEXTITERATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRangeNode()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_GET_ISRANGENODE_OFFSET))(nullptr);
		}

		::System::Void ExpandTree(::System::Xml::Schema::InteriorNode* arg, ::System::Xml::Schema::SymbolsDictionary* arg, ::System::Xml::Schema::Positions* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::InteriorNode*, ::System::Xml::Schema::SymbolsDictionary*, ::System::Xml::Schema::Positions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_LEAFRANGENODE_EXPANDTREE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

