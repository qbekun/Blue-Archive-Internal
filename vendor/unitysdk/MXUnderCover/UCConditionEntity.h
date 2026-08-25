#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCCONDITIONENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9BF60)
#define MXUNDERCOVER_UCCONDITIONENTITY_CHECK_OFFSET UNITYSDK_OFFSET(0xD9BF70)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCConditionEntity_TypeDefinitionIndex = 9823;

	class UCConditionEntity : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* Entities; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONENTITY_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONENTITY_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

