#pragma once
#include "../../unitysdk.h"

namespace MX::GameLogic::Parcel { class ParcelResultDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF15EE0)
#define MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCERESPONSE_GET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15EF0)
#define MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF15F00)
#define MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCERESPONSE_SET_PARCELRESULTDB_OFFSET UNITYSDK_OFFSET(0xF15F10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterWeaponTranscendenceResponse_TypeDefinitionIndex = 11475;

	class CharacterWeaponTranscendenceResponse : public Il2CppObject
	{
	public:
		::MX::GameLogic::Parcel::ParcelResultDB* _ParcelResultDB_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* get_ParcelResultDB()
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCERESPONSE_GET_PARCELRESULTDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ParcelResultDB(::MX::GameLogic::Parcel::ParcelResultDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelResultDB*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERWEAPONTRANSCENDENCERESPONSE_SET_PARCELRESULTDB_OFFSET))(arg, nullptr);
		}

	};
}

