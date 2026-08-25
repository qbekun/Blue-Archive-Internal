#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15F60)
#define MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESRESPONSE_SET_CHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF15F70)
#define MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESRESPONSE_GET_CHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF15F80)
#define MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15F90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterSetFavoritesResponse_TypeDefinitionIndex = 11477;

	class CharacterSetFavoritesResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CharacterDBs_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESRESPONSE_SET_CHARACTERDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_CharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESRESPONSE_GET_CHARACTERDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

