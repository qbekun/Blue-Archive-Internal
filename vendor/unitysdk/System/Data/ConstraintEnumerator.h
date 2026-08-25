#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_CONSTRAINTENUMERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9731DB0)
#define SYSTEM_DATA_CONSTRAINTENUMERATOR_GETNEXT_OFFSET UNITYSDK_OFFSET(0x9731E30)
#define SYSTEM_DATA_CONSTRAINTENUMERATOR_GETCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x97321A0)
#define SYSTEM_DATA_CONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET UNITYSDK_OFFSET(0x97321B0)
#define SYSTEM_DATA_CONSTRAINTENUMERATOR_GET_CURRENTOBJECT_OFFSET UNITYSDK_OFFSET(0x97321C0)

namespace System::Data
{
	inline static constexpr unsigned int ConstraintEnumerator_TypeDefinitionIndex = 32197;

	class ConstraintEnumerator : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* _tables; // 0x10
		::System::Collections::IEnumerator* _constraints; // 0x18
		::System::Data::Constraint* _currentObject; // 0x20

		::System::Void .ctor(::System::Data::DataSet* arg)
		{
			((::System::Void(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTENUMERATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTENUMERATOR_GETNEXT_OFFSET))(nullptr);
		}

		::System::Data::Constraint* GetConstraint()
		{
			return (return (::System::Data::Constraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTENUMERATOR_GETCONSTRAINT_OFFSET))(nullptr);
		}

		::System::Boolean IsValidCandidate(::System::Data::Constraint* arg)
		{
			return (return (::System::Boolean(*)(::System::Data::Constraint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTENUMERATOR_ISVALIDCANDIDATE_OFFSET))(arg, nullptr);
		}

		::System::Data::Constraint* get_CurrentObject()
		{
			return (return (::System::Data::Constraint*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTENUMERATOR_GET_CURRENTOBJECT_OFFSET))(nullptr);
		}

	};
}

