#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_CCGEVENT_WRITELOG_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1DCBB70)
#define MX_MINIGAMECCG_CCGEVENT_WRITELOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCBB80)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_WriteLog_TypeDefinitionIndex = 20521;

	class CCGEvent_WriteLog : public Il2CppObject
	{
	public:
		::System::String* _Message_k__BackingField; // 0x10

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WRITELOG_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WRITELOG_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

