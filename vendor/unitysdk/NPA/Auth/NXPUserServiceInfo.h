#pragma once
#include "../../unitysdk.h"

#define NPA_AUTH_NXPUSERSERVICEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CDABF0)

namespace NPA::Auth
{
	inline static constexpr unsigned int NXPUserServiceInfo_TypeDefinitionIndex = 27503;

	class NXPUserServiceInfo : public Il2CppObject
	{
	public:
		::System::String* title; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_AUTH_NXPUSERSERVICEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

