#pragma once
#include "../unitysdk.h"

#define SYSTEM_LOCALAPPCONTEXTSWITCHES_GET_ALLOWARBITRARYTYPEINSTANTIATION_OFFSET UNITYSDK_OFFSET(0x97010D0)

namespace System
{
	inline static constexpr unsigned int LocalAppContextSwitches_TypeDefinitionIndex = 32160;

	class LocalAppContextSwitches : public Il2CppObject
	{
	public:
		::System::Int32 s_allowArbitraryTypeInstantiation; // 0x0

		::System::Boolean get_AllowArbitraryTypeInstantiation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LOCALAPPCONTEXTSWITCHES_GET_ALLOWARBITRARYTYPEINSTANTIATION_OFFSET))(nullptr);
		}

	};
}

