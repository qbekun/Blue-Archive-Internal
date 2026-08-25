#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCCONDITIONALWAYSFALSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9BF40)
#define MXUNDERCOVER_UCCONDITIONALWAYSFALSE_CHECK_OFFSET UNITYSDK_OFFSET(0xD9BF50)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCConditionAlwaysFalse_TypeDefinitionIndex = 9822;

	class UCConditionAlwaysFalse : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONALWAYSFALSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONALWAYSFALSE_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

