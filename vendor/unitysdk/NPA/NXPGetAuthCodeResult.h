#pragma once
#include "../unitysdk.h"

#define NPA_NXPGETAUTHCODERESULT_ISVALID_OFFSET UNITYSDK_OFFSET(0x9BE5E30)
#define NPA_NXPGETAUTHCODERESULT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BE5E50)

namespace NPA
{
	inline static constexpr unsigned int NXPGetAuthCodeResult_TypeDefinitionIndex = 25758;

	class NXPGetAuthCodeResult : public Il2CppObject
	{
	public:
		::System::String* AuthCode; // 0x28
		::System::String* EnvId; // 0x30

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGETAUTHCODERESULT_ISVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPGETAUTHCODERESULT_.CTOR_OFFSET))(nullptr);
		}

	};
}

