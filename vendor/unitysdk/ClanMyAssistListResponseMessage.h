#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define CLANMYASSISTLISTRESPONSEMESSAGE_SET_CLANMYASSISTSLOTDBS_OFFSET UNITYSDK_OFFSET(0x1F294B0)
#define CLANMYASSISTLISTRESPONSEMESSAGE_GET_CLANMYASSISTSLOTDBS_OFFSET UNITYSDK_OFFSET(0x1F294C0)
#define CLANMYASSISTLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F29140)

	inline static constexpr unsigned int ClanMyAssistListResponseMessage_TypeDefinitionIndex = 2192;

	class ClanMyAssistListResponseMessage : public Il2CppObject
	{
	public:
		Il2CppObject* _ClanMyAssistSlotDBs_k__BackingField; // 0x20

		::System::Void set_ClanMyAssistSlotDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMYASSISTLISTRESPONSEMESSAGE_SET_CLANMYASSISTSLOTDBS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ClanMyAssistSlotDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLANMYASSISTLISTRESPONSEMESSAGE_GET_CLANMYASSISTSLOTDBS_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, Il2CppObject* arg2)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CLANMYASSISTLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

