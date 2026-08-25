#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::GenericCondition { class DirectReferenceTo; }
namespace MX::Logic::GenericCondition { class MemberReferenceTo; }

#define MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x108F080)
#define MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLE_GET_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x108F110)
#define MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLE__INITIALIZE_B__6_0_OFFSET UNITYSDK_OFFSET(0x108F260)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int ReferenceVariable_TypeDefinitionIndex = 12965;

	class ReferenceVariable : public Il2CppObject
	{
	public:
		::System::String* targetTypeJson; // 0x10
		::System::Type* targetType; // 0x18
		::MX::Logic::GenericCondition::DirectReferenceTo* targetObject; // 0x20
		::MX::Logic::GenericCondition::MemberReferenceTo* referenceTo; // 0x28
		Il2CppObject* getFunc; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* Get()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLE_GET_OFFSET))(nullptr);
		}

		::System::Object* Initialize()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLE_INITIALIZE_OFFSET))(nullptr);
		}

		::System::Object* _Initialize_b__6_0()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_REFERENCEVARIABLE__INITIALIZE_B__6_0_OFFSET))(nullptr);
		}

	};
}

