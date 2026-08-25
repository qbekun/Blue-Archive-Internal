#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCCONDITIONENTITYSCANNED_CHECK_OFFSET UNITYSDK_OFFSET(0xD9BFC0)
#define MXUNDERCOVER_UCCONDITIONENTITYSCANNED_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9C0A0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCConditionEntityScanned_TypeDefinitionIndex = 9824;

	class UCConditionEntityScanned : public Il2CppObject
	{
	public:
		::MXUnderCover::UCEntity* Target; // 0x10

		::System::Boolean Check(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONENTITYSCANNED_CHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONENTITYSCANNED_.CTOR_OFFSET))(nullptr);
		}

	};
}

