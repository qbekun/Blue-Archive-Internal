#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_GET_CHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF15980)
#define MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_GET_WEAPONDBS_OFFSET UNITYSDK_OFFSET(0xF15990)
#define MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_SET_CHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF159A0)
#define MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_SET_TSSCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF159B0)
#define MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF159C0)
#define MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_GET_TSSCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0xF159D0)
#define MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_GET_COSTUMEDBS_OFFSET UNITYSDK_OFFSET(0xF159E0)
#define MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF159F0)
#define MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_SET_WEAPONDBS_OFFSET UNITYSDK_OFFSET(0xF15A00)
#define MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_SET_COSTUMEDBS_OFFSET UNITYSDK_OFFSET(0xF15A10)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CharacterListResponse_TypeDefinitionIndex = 11461;

	class CharacterListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CharacterDBs_k__BackingField; // 0x50
		Il2CppObject* _TSSCharacterDBs_k__BackingField; // 0x58
		Il2CppObject* _WeaponDBs_k__BackingField; // 0x60
		Il2CppObject* _CostumeDBs_k__BackingField; // 0x68

		Il2CppObject* get_CharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_GET_CHARACTERDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_WeaponDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_GET_WEAPONDBS_OFFSET))(nullptr);
		}

		::System::Void set_CharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_SET_CHARACTERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_TSSCharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_SET_TSSCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_TSSCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_GET_TSSCHARACTERDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_CostumeDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_GET_COSTUMEDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_WeaponDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_SET_WEAPONDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_CostumeDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CHARACTERLISTRESPONSE_SET_COSTUMEDBS_OFFSET))(arg, nullptr);
		}

	};
}

