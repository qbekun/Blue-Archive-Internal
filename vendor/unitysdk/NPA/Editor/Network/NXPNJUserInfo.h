#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPNJUSERINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1A080)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPNJUserInfo_TypeDefinitionIndex = 26618;

	class NXPNJUserInfo : public Il2CppObject
	{
	public:
		::System::Int64 memberSN; // 0x10
		::System::String* userId; // 0x18
		::System::String* hiddenEmail; // 0x20
		::System::Int32 securityState; // 0x28
		::System::Int32 age; // 0x2C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPNJUSERINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

