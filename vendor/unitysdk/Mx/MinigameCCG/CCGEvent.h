#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_CCGEVENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB5B0)
#define MX_MINIGAMECCG_CCGEVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DCB5C0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_TypeDefinitionIndex = 20516;

	class CCGEvent : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_.CTOR_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_TOSTRING_OFFSET))(nullptr);
		}

	};
}

