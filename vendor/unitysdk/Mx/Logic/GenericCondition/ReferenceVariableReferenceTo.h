#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class ReferenceVariable; }

#define MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLEREFERENCETO_.CTOR_OFFSET UNITYSDK_OFFSET(0x108EF90)
#define MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLEREFERENCETO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x108EFC0)
#define MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLEREFERENCETO_GET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int ReferenceVariableReferenceTo_TypeDefinitionIndex = 12964;

	class ReferenceVariableReferenceTo : public Il2CppObject
	{
	public:
		::MX::Logic::GenericCondition::ReferenceVariable* targetObject; // 0x10

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLEREFERENCETO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLEREFERENCETO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Get()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLEREFERENCETO_GET_OFFSET))(nullptr);
		}

	};
}

