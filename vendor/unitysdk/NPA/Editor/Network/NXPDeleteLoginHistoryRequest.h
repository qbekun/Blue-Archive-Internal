#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPDELETELOGINHISTORYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C203E0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPDeleteLoginHistoryRequest_TypeDefinitionIndex = 26655;

	class NXPDeleteLoginHistoryRequest : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPDELETELOGINHISTORYREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

