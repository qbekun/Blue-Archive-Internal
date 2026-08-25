#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_PARENTFOREIGNKEYCONSTRAINTENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9732460)
#define SYSTEM_DATA_PARENTFOREIGNKEYCONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET UNITYSDK_OFFSET(0x9732500)

namespace System::Data
{
	inline static constexpr unsigned int ParentForeignKeyConstraintEnumerator_TypeDefinitionIndex = 32200;

	class ParentForeignKeyConstraintEnumerator : public Il2CppObject
	{
	public:
		::System::Data::DataTable* _table; // 0x28

		::System::Void .ctor(::System::Data::DataSet* arg, ::System::Data::DataTable* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PARENTFOREIGNKEYCONSTRAINTENUMERATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValidCandidate(::System::Data::Constraint* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Constraint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PARENTFOREIGNKEYCONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET))(arg, nullptr);
		}

	};
}

