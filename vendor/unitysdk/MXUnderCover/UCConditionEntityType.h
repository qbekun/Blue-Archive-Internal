#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntityTypes; }
namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCCONDITIONENTITYTYPE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9B900)
#define MXUNDERCOVER_UCCONDITIONENTITYTYPE_CHECK_OFFSET UNITYSDK_OFFSET(0xD9B910)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCConditionEntityType_TypeDefinitionIndex = 9816;

	class UCConditionEntityType : public Il2CppObject
	{
	public:
		::MXUnderCover::UCEntityTypes* EntityType; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONENTITYTYPE_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONENTITYTYPE_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

