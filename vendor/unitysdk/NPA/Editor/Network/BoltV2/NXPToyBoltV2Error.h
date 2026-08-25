#pragma once
#include "../../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_BOLTV2_NXPTOYBOLTV2ERROR_GETERRORTEXT_OFFSET UNITYSDK_OFFSET(0x9C2AA40)
#define NPA_EDITOR_NETWORK_BOLTV2_NXPTOYBOLTV2ERROR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C2AB20)

namespace NPA::Editor::Network::BoltV2
{
	inline static constexpr unsigned int NXPToyBoltV2Error_TypeDefinitionIndex = 26746;

	class NXPToyBoltV2Error : public Il2CppObject
	{
	public:
		::System::String* GetErrorText(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_BOLTV2_NXPTOYBOLTV2ERROR_GETERRORTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_BOLTV2_NXPTOYBOLTV2ERROR_.CTOR_OFFSET))(nullptr);
		}

	};
}

