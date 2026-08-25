#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_OPERATE_NXPNEXONLINKSTREAMINGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C18480)

namespace NPA::Editor::Operate
{
	inline static constexpr unsigned int NXPNexonLinkStreamingInfo_TypeDefinitionIndex = 26607;

	class NXPNexonLinkStreamingInfo : public Il2CppObject
	{
	public:
		::System::Int32 WindowsHandle; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_OPERATE_NXPNEXONLINKSTREAMINGINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

