#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYVALIDATETOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDABE0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyValidateToken_TypeDefinitionIndex = 27502;

	class NXPToyValidateToken : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x10
		::System::String* message; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYVALIDATETOKEN_.CTOR_OFFSET))(nullptr);
		}

	};
}

