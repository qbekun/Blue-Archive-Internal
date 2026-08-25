#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCCONDITIONAND_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9B7D0)
#define MXUNDERCOVER_UCCONDITIONAND_CHECK_OFFSET UNITYSDK_OFFSET(0xD9B7E0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCConditionAnd_TypeDefinitionIndex = 9815;

	class UCConditionAnd : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* conditions; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONAND_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONAND_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

