#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_CONSTRAINTTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x977BB40)

namespace System::Data
{
	inline static constexpr unsigned int ConstraintTable_TypeDefinitionIndex = 32306;

	class ConstraintTable : public Il2CppObject
	{
	public:
		::System::Data::DataTable* table; // 0x10
		::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint; // 0x18

		::System::Void .ctor(::System::Data::DataTable* arg, ::System::Xml::Schema::XmlSchemaIdentityConstraint* arg)
		{
			((::System::Void(*)(::System::Data::DataTable*, ::System::Xml::Schema::XmlSchemaIdentityConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTTABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

