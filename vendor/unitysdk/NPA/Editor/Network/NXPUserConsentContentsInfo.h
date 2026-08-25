#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPUSERCONSENTCONTENTSINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1A260)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPUserConsentContentsInfo_TypeDefinitionIndex = 26621;

	class NXPUserConsentContentsInfo : public Il2CppObject
	{
	public:
		::System::String* language; // 0x10
		::System::String* title; // 0x18
		::System::String* contents; // 0x20
		::System::String* singleButtonName; // 0x28
		::System::String* confirmButtonName; // 0x30
		::System::String* cancelButtonName; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPUSERCONSENTCONTENTSINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

