#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x97321D0)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET UNITYSDK_OFFSET(0x9732250)
#define SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR_GETFOREIGNKEYCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x97322C0)

namespace System::Data
{
	inline static constexpr unsigned int ForeignKeyConstraintEnumerator_TypeDefinitionIndex = 32198;

	class ForeignKeyConstraintEnumerator : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidCandidate(::System::Data::Constraint* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Constraint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET))(arg, nullptr);
		}

		::System::Data::ForeignKeyConstraint* GetForeignKeyConstraint()
		{
			return (return (::System::Data::ForeignKeyConstraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_FOREIGNKEYCONSTRAINTENUMERATOR_GETFOREIGNKEYCONSTRAINT_OFFSET))(nullptr);
		}

	};
}

