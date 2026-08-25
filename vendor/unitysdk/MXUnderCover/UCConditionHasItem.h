#pragma once
#include "../unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define MXUNDERCOVER_UCCONDITIONHASITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9B990)
#define MXUNDERCOVER_UCCONDITIONHASITEM_CHECK_OFFSET UNITYSDK_OFFSET(0xD9B9F0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCConditionHasItem_TypeDefinitionIndex = 9817;

	class UCConditionHasItem : public Il2CppObject
	{
	public:
		::System::String* ItemId; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONHASITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Check(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Boolean(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCONDITIONHASITEM_CHECK_OFFSET))(arg, nullptr);
		}

	};
}

