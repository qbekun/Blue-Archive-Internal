#pragma once
#include "../../unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int GenericParameterAttributes_TypeDefinitionIndex = 24856;

	class GenericParameterAttributes : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::System::Reflection::GenericParameterAttributes* None; // 0x0
		::System::Reflection::GenericParameterAttributes* VarianceMask; // 0x0
		::System::Reflection::GenericParameterAttributes* Covariant; // 0x0
		::System::Reflection::GenericParameterAttributes* Contravariant; // 0x0
		::System::Reflection::GenericParameterAttributes* SpecialConstraintMask; // 0x0
		::System::Reflection::GenericParameterAttributes* ReferenceTypeConstraint; // 0x0
		::System::Reflection::GenericParameterAttributes* NotNullableValueTypeConstraint; // 0x0
		::System::Reflection::GenericParameterAttributes* DefaultConstructorConstraint; // 0x0

	};
}

