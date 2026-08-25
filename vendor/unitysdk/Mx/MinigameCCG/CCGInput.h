#pragma once
#include "../../unitysdk.h"

#define MX_MINIGAMECCG_CCGINPUT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DCED70)
#define MX_MINIGAMECCG_CCGINPUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF2C0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGInput_TypeDefinitionIndex = 20582;

	class CCGInput : public Il2CppObject
	{
	public:
		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGINPUT_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGINPUT_.CTOR_OFFSET))(nullptr);
		}

	};
}

