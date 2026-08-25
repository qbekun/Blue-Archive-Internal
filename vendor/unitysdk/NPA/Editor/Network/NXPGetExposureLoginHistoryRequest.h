#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPGETEXPOSURELOGINHISTORYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C20510)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPGetExposureLoginHistoryRequest_TypeDefinitionIndex = 26656;

	class NXPGetExposureLoginHistoryRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPGETEXPOSURELOGINHISTORYREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

