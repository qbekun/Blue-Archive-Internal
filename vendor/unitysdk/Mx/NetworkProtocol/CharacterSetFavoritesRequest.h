#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15F20)
#define MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESREQUEST_SET_ACTIVATEBYSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF15F30)
#define MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESREQUEST_GET_ACTIVATEBYSERVERIDS_OFFSET UNITYSDK_OFFSET(0xF15F40)
#define MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15F50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterSetFavoritesRequest_TypeDefinitionIndex = 11476;

	class CharacterSetFavoritesRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _ActivateByServerIds_k__BackingField; // 0x40

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_ActivateByServerIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESREQUEST_SET_ACTIVATEBYSERVERIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ActivateByServerIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESREQUEST_GET_ACTIVATEBYSERVERIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERSETFAVORITESREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

