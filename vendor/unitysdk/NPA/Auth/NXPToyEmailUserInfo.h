#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYEMAILUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9BC0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyEmailUserInfo_TypeDefinitionIndex = 27486;

	class NXPToyEmailUserInfo : public Il2CppObject
	{
	public:
		::System::String* id; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYEMAILUSERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

