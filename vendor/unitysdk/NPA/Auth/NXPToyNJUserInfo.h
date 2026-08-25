#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPTOYNJUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CD9C20)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPToyNJUserInfo_TypeDefinitionIndex = 27492;

	class NXPToyNJUserInfo : public Il2CppObject
	{
	public:
		::System::Int64 memberSN; // 0x10
		::System::String* userId; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPTOYNJUSERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

