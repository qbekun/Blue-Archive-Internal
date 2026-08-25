#pragma once
#include "../../unitysdk.h"

namespace FlatData { class Difficulty; }
namespace MX::GameLogic::DBModel { class ClanAssistUseInfo; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_TAGS_OFFSET UNITYSDK_OFFSET(0xF4C910)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0xF4C920)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4C930)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4C940)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF4C950)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4C960)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4C970)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF4C980)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0xF4C990)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET UNITYSDK_OFFSET(0xF4C9A0)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0xF4C9B0)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_RAIDUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4C9C0)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_TAGS_OFFSET UNITYSDK_OFFSET(0xF4C9D0)
#define MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_ISPUBLIC_OFFSET UNITYSDK_OFFSET(0xF4C9E0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int RaidCreateBattleRequest_TypeDefinitionIndex = 12025;

	class RaidCreateBattleRequest : public Il2CppObject
	{
	public:
		::System::Int64 _RaidUniqueId_k__BackingField; // 0x40
		::System::Boolean _IsPractice_k__BackingField; // 0x48
		Il2CppObject* _Tags_k__BackingField; // 0x50
		::System::Boolean _IsPublic_k__BackingField; // 0x58
		::FlatData::Difficulty* _Difficulty_k__BackingField; // 0x5C
		::MX::GameLogic::DBModel::ClanAssistUseInfo* _AssistUseInfo_k__BackingField; // 0x60

		::System::Void set_Tags(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_TAGS_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPublic(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_ISPUBLIC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_RaidUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_RAIDUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ClanAssistUseInfo* get_AssistUseInfo()
		{
			return ((::MX::GameLogic::DBModel::ClanAssistUseInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_ASSISTUSEINFO_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::Difficulty* arg)
		{
			((::System::Void(*)(::FlatData::Difficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistUseInfo(::MX::GameLogic::DBModel::ClanAssistUseInfo* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ClanAssistUseInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_ASSISTUSEINFO_OFFSET))(arg, nullptr);
		}

		::FlatData::Difficulty* get_Difficulty()
		{
			return ((::FlatData::Difficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_RaidUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_SET_RAIDUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Tags()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_TAGS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPublic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_RAIDCREATEBATTLEREQUEST_GET_ISPUBLIC_OFFSET))(nullptr);
		}

	};
}

