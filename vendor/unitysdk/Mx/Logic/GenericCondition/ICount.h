#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_GENERICCONDITION_ICOUNT_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Logic::GenericCondition
{
	inline static constexpr unsigned int ICount_TypeDefinitionIndex = 12951;

	class ICount : public Il2CppObject
	{
	public:
		::System::Int32 Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_GENERICCONDITION_ICOUNT_COUNT_OFFSET))(nullptr);
		}

	};
}

