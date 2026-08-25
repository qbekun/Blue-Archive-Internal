#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_GENERICCONDITION_FIELDREFERENCETO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x108E630)
#define MX_LOGIC_GENERICCONDITION_FIELDREFERENCETO_.CTOR_OFFSET UNITYSDK_OFFSET(0x108E720)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int FieldReferenceTo_TypeDefinitionIndex = 12956;

	class FieldReferenceTo : public Il2CppObject
	{
	public:
		::System::Void Initialize(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_FIELDREFERENCETO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_FIELDREFERENCETO_.CTOR_OFFSET))(nullptr);
		}

	};
}

