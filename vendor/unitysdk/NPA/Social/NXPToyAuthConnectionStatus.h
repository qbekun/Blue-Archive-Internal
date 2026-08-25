#pragma once
#include "../../unitysdk.h"

#define NPA_SOCIAL_NXPTOYAUTHCONNECTIONSTATUS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC43A0)

namespace NPA::Social
{
	inline static constexpr unsigned int NXPToyAuthConnectionStatus_TypeDefinitionIndex = 27258;

	class NXPToyAuthConnectionStatus : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::Int32 type; // 0x18
		::System::Int32 isConnect; // 0x1C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SOCIAL_NXPTOYAUTHCONNECTIONSTATUS_.CTOR_OFFSET))(nullptr);
		}

	};
}

