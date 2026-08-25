#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CLANALLASSISTLISTRESPONSEMESSAGE_GET_ASSISTCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0x1F24E50)
#define CLANALLASSISTLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F248D0)
#define CLANALLASSISTLISTRESPONSEMESSAGE_SET_ASSISTCHARACTERDBS_OFFSET UNITYSDK_OFFSET(0x1F24E60)
#define CLANALLASSISTLISTRESPONSEMESSAGE_SET_ASSISTCHARACTERRENTHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1F24E70)
#define CLANALLASSISTLISTRESPONSEMESSAGE_GET_CLANDBID_OFFSET UNITYSDK_OFFSET(0x1F24E80)
#define CLANALLASSISTLISTRESPONSEMESSAGE_GET_ASSISTCHARACTERRENTHISTORYDBS_OFFSET UNITYSDK_OFFSET(0x1F24E90)
#define CLANALLASSISTLISTRESPONSEMESSAGE_SET_CLANDBID_OFFSET UNITYSDK_OFFSET(0x1F24EA0)

	inline static constexpr unsigned int ClanAllAssistListResponseMessage_TypeDefinitionIndex = 2160;

	class ClanAllAssistListResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _AssistCharacterDBs_k__BackingField; // 0x20
		Il2CppObject* _AssistCharacterRentHistoryDBs_k__BackingField; // 0x28
		::System::Int64 _ClanDBId_k__BackingField; // 0x30

		Il2CppObject* get_AssistCharacterDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTRESPONSEMESSAGE_GET_ASSISTCHARACTERDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2, Il2CppObject* arg3, ::System::Int64 arg4)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void set_AssistCharacterDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTRESPONSEMESSAGE_SET_ASSISTCHARACTERDBS_OFFSET))(arg, nullptr);
		}

		::System::Void set_AssistCharacterRentHistoryDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTRESPONSEMESSAGE_SET_ASSISTCHARACTERRENTHISTORYDBS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ClanDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTRESPONSEMESSAGE_GET_CLANDBID_OFFSET))(nullptr);
		}

		Il2CppObject* get_AssistCharacterRentHistoryDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTRESPONSEMESSAGE_GET_ASSISTCHARACTERRENTHISTORYDBS_OFFSET))(nullptr);
		}

		::System::Void set_ClanDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CLANALLASSISTLISTRESPONSEMESSAGE_SET_CLANDBID_OFFSET))(arg, nullptr);
		}

	};

