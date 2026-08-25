#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPUPDATEEXPOSURELOGINHISTORYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C23A90)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPUpdateExposureLoginHistoryRequest_TypeDefinitionIndex = 26678;

	class NXPUpdateExposureLoginHistoryRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPUPDATEEXPOSURELOGINHISTORYREQUEST_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

