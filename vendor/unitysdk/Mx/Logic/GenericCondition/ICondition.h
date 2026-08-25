#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_GENERICCONDITION_ICONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int ICondition_TypeDefinitionIndex = 12932;

	class ICondition : public Il2CppObject
	{
	public:
		::System::Boolean Check()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ICONDITION_CHECK_OFFSET))(nullptr);
		}

	};
}

