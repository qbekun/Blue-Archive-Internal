#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::Network { class NXPMethinksUsage; }
namespace NPA::Livestream { class NXPLivestreamUsage; }

#define NPA_EDITOR_NETWORK_NXPSERVICE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C1A250)

namespace NPA::Editor::Network
{
	inline static constexpr unsigned int NXPService_TypeDefinitionIndex = 26620;

	class NXPService : public Il2CppObject
	{
	public:
		::System::String* title; // 0x10
		::System::String* buildVer; // 0x18
		::System::Int32 policyApiVer; // 0x20
		::System::Int32 termsApiVer; // 0x24
		::System::String* loginUIType; // 0x28
		::System::String* nxkATL; // 0x30
		::System::String* clientId; // 0x38
		Il2CppObject* useMemberships; // 0x40
		::System::Int32 linkGcidAsAuth; // 0x48
		Il2CppObject* useMembershipsInfo; // 0x50
		::System::Int32 useTPA; // 0x58
		::System::Int32 usePcDirectRun; // 0x5C
		::System::Int32 usePrimary; // 0x60
		::System::Int32 platformAuthMode; // 0x64
		::System::Int32 useGbNpsn; // 0x68
		::System::Int32 useGbKrpc; // 0x6C
		::System::Int32 useGbArena; // 0x70
		::System::Int32 useGbJppc; // 0x74
		::System::Int32 usePlayNow; // 0x78
		::System::Int32 useToyBanDialog; // 0x7C
		::System::Single networkCheckSampleRate; // 0x80
		::System::Int32 useNexonOTP; // 0x84
		::System::Int32 useRegionLock; // 0x88
		::System::String* nkMemberAccessCode; // 0x90
		::System::Int32 useArenaCSByRegion; // 0x98
		::NPA::Editor::Network::NXPMethinksUsage* methinksUsage; // 0xA0
		::NPA::Livestream::NXPLivestreamUsage* livestreamUsage; // 0xA8
		::System::Int32 useArena2FA; // 0xB0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NETWORK_NXPSERVICE_.CTOR_OFFSET))(nullptr);
		}

	};
}

