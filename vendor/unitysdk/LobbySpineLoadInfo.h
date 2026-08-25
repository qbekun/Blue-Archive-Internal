#pragma once
#include "unitysdk.h"

namespace MX::Data { class BGMPlayInfo; }
class LobbySpineLoadInfo;

#define LOBBYSPINELOADINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FDEEE0)
#define LOBBYSPINELOADINFO_SAMECHARACTERANDCOSTUME_OFFSET UNITYSDK_OFFSET(0x1FDEEF0)

	inline static constexpr unsigned int LobbySpineLoadInfo_TypeDefinitionIndex = 3060;

	class LobbySpineLoadInfo : public Il2CppObject
	{
	public:
		::System::Int64 CharacterId; // 0x10
		::System::Int64 CostumeId; // 0x18
		::System::Int32 SpineIndex; // 0x20
		::System::Boolean Memory; // 0x24
		::System::String* ContainerPath; // 0x28
		::MX::Data::BGMPlayInfo* BgmPlayInfo; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBBYSPINELOADINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean SameCharacterAndCostume(LobbySpineLoadInfo* arg)
		{
			return ((::System::Boolean(*)(LobbySpineLoadInfo*, ::PVOID))((::PBYTE)hIl2Cpp + LOBBYSPINELOADINFO_SAMECHARACTERANDCOSTUME_OFFSET))(arg, nullptr);
		}

	};

