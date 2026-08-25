#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPLoginResultType; }

namespace NPA
{
	inline static constexpr unsigned int NXPLoginResultType_TypeDefinitionIndex = 25489;

	class NXPLoginResultType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::NPA::NXPLoginResultType* NXPLoginResultTypeLogin; // 0x0
		::NPA::NXPLoginResultType* NXPLoginResultTypeLink; // 0x0
		::NPA::NXPLoginResultType* NXPLoginResultTypeChange; // 0x0
		::NPA::NXPLoginResultType* NXPLoginResultTypeDelink; // 0x0
		::NPA::NXPLoginResultType* NXPLoginResultTypePrimaryPlatformChanged; // 0x0

	};
}

