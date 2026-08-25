#pragma once
#include "../../unitysdk.h"

#define MX_DATA_IMISSIONCONSTRAINT_CANCOMPLETE_OFFSET UNITYSDK_OFFSET(0x000000)
#define MX_DATA_IMISSIONCONSTRAINT_CANRECEIVEREWARD_OFFSET UNITYSDK_OFFSET(0x000000)

namespace MX::Data
{
	inline static constexpr unsigned int IMissionConstraint_TypeDefinitionIndex = 15843;

	class IMissionConstraint : public Il2CppObject
	{
	public:
		::System::Boolean CanComplete(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMISSIONCONSTRAINT_CANCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanReceiveReward(::System::DateTime* arg)
		{
			return (return (::System::Boolean(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_IMISSIONCONSTRAINT_CANRECEIVEREWARD_OFFSET))(arg, nullptr);
		}

	};
}

