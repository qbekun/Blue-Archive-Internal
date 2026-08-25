#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYIDFVRESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDC1C0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyIDFVResult_TypeDefinitionIndex = 27537;

	class NXPToyIDFVResult : public Il2CppObject
	{
	public:
		ResultSet* result; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYIDFVRESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

