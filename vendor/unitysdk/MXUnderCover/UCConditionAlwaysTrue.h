#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCCONDITIONALWAYSTRUE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9BF20)
#define MXUNDERCOVER_UCCONDITIONALWAYSTRUE_CHECK_OFFSET UNITYSDK_OFFSET(0xD9BF30)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCConditionAlwaysTrue_TypeDefinitionIndex = 9821;

	class UCConditionAlwaysTrue : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONALWAYSTRUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONALWAYSTRUE_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

