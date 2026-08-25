#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_GET_CREATERAIDDBS_OFFSET UNITYSDK_OFFSET(0xF4C670)
#define MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_GET_LISTRAIDDBS_OFFSET UNITYSDK_OFFSET(0xF4C680)
#define MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_SET_CREATERAIDDBS_OFFSET UNITYSDK_OFFSET(0xF4C690)
#define MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4C6A0)
#define MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_SET_ENTERRAIDDBS_OFFSET UNITYSDK_OFFSET(0xF4C6B0)
#define MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_GET_ENTERRAIDDBS_OFFSET UNITYSDK_OFFSET(0xF4C6C0)
#define MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4C6D0)
#define MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_SET_LISTRAIDDBS_OFFSET UNITYSDK_OFFSET(0xF4C6E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidListResponse_TypeDefinitionIndex = 12018;

	class RaidListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _CreateRaidDBs_k__BackingField; // 0x50
		Il2CppObject* _EnterRaidDBs_k__BackingField; // 0x58
		Il2CppObject* _ListRaidDBs_k__BackingField; // 0x60

		Il2CppObject* get_CreateRaidDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_GET_CREATERAIDDBS_OFFSET))(nullptr);
		}

		Il2CppObject* get_ListRaidDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_GET_LISTRAIDDBS_OFFSET))(nullptr);
		}

		::System::Void set_CreateRaidDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_SET_CREATERAIDDBS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_EnterRaidDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_SET_ENTERRAIDDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EnterRaidDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_GET_ENTERRAIDDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ListRaidDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDLISTRESPONSE_SET_LISTRAIDDBS_OFFSET))(arg, nullptr);
		}

	};
}

