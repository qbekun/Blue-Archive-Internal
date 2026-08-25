#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C23E60)
#define NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUEST_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C23EC0)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPToyCommunityRequest_TypeDefinitionIndex = 26681;

	class NXPToyCommunityRequest : public Il2CppObject
	{
	public:
		::System::String* COMMUNITY_API_VERSION; // 0x0
		::System::String* COMMUNITY_API_PATH; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPTOYCOMMUNITYREQUEST_.CCTOR_OFFSET))(nullptr);
		}

	};
}

