#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_GENERICCONDITION_REFERENCETO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_LOGIC_GENERICCONDITION_REFERENCETO_GET_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int ReferenceTo_TypeDefinitionIndex = 12953;

	class ReferenceTo : public Il2CppObject
	{
	public:
		::System::Void Initialize(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_REFERENCETO_INITIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* Get()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_REFERENCETO_GET_OFFSET))(nullptr);
		}

	};
}

