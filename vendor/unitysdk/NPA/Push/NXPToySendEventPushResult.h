#pragma once
#include "../../unitysdk.h"

#define NPA_PUSH_NXPTOYSENDEVENTPUSHRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CCAE10)
#define NPA_PUSH_NXPTOYSENDEVENTPUSHRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCB100)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPToySendEventPushResult_TypeDefinitionIndex = 27357;

	class NXPToySendEventPushResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYSENDEVENTPUSHRESULT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYSENDEVENTPUSHRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

