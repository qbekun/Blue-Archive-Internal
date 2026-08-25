#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_GENERICCONDITION_METHODREFERENCETO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x108E960)
#define MX_LOGIC_GENERICCONDITION_METHODREFERENCETO_.CTOR_OFFSET UNITYSDK_OFFSET(0x108EDC0)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int MethodReferenceTo_TypeDefinitionIndex = 12960;

	class MethodReferenceTo : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* methodParameterList; // 0x30
		::Il2CppArray<::System::Object*>* methodParameterTypeJsonList; // 0x38
		::Il2CppArray<::System::Object*>* methodParameterNameList; // 0x40

		::System::Void Initialize(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_METHODREFERENCETO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_METHODREFERENCETO_.CTOR_OFFSET))(nullptr);
		}

	};
}

