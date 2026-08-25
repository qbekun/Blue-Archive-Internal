#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCCONDITIONOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9B6A0)
#define MXUNDERCOVER_UCCONDITIONOR_CHECK_OFFSET UNITYSDK_OFFSET(0xD9B6B0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCConditionOR_TypeDefinitionIndex = 9813;

	class UCConditionOR : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* conditions; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONOR_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

