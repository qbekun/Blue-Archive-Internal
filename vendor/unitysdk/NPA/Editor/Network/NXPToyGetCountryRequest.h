#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYGETCOUNTRYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C217C0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyGetCountryRequest_TypeDefinitionIndex = 26662;

	class NXPToyGetCountryRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYGETCOUNTRYREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

