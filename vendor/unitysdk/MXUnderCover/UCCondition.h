#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCCONDITION_CHECK_OFFSET UNITYSDK_OFFSET(0x000000)
#define MXUNDERCOVER_UCCONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9B690)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCCondition_TypeDefinitionIndex = 9811;

	class UCCondition : public Il2CppObject
	{
	public:
		::System::Boolean Check(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITION_CHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

