#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_CONSTRAINTSTRUCT_GET_TABLEDIM_OFFSET UNITYSDK_OFFSET(0x9A0AEA0)
#define SYSTEM_XML_SCHEMA_CONSTRAINTSTRUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A0AEB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ConstraintStruct_TypeDefinitionIndex = 27961;

	class ConstraintStruct : public Il2CppObject
	{
	public:
		::System::Xml::Schema::CompiledIdentityConstraint* constraint; // 0x10
		::System::Xml::Schema::SelectorActiveAxis* axisSelector; // 0x18
		::System::Collections::ArrayList* axisFields; // 0x20
		::System::Collections::Hashtable* qualifiedTable; // 0x28
		::System::Collections::Hashtable* keyrefTable; // 0x30
		::System::Int32 tableDim; // 0x38

		::System::Int32 get_TableDim()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONSTRAINTSTRUCT_GET_TABLEDIM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::CompiledIdentityConstraint* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::CompiledIdentityConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_CONSTRAINTSTRUCT_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

