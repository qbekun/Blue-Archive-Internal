#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3F870)
#define MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_GET_CHARACTERCUSTOMPRESET_OFFSET UNITYSDK_OFFSET(0xF3F880)
#define MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3F890)
#define MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_GET_CHEAT_OFFSET UNITYSDK_OFFSET(0xF3F8A0)
#define MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_SET_CHEAT_OFFSET UNITYSDK_OFFSET(0xF3F8B0)
#define MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_SET_CHARACTERCUSTOMPRESET_OFFSET UNITYSDK_OFFSET(0xF3F8C0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CommonCheatRequest_TypeDefinitionIndex = 11535;

	class CommonCheatRequest : public Il2CppObject
	{
	public:
		::System::String* _Cheat_k__BackingField; // 0x40
		Il2CppObject* _CharacterCustomPreset_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		Il2CppObject* get_CharacterCustomPreset()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_GET_CHARACTERCUSTOMPRESET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_Cheat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_GET_CHEAT_OFFSET))(nullptr);
		}

		::System::Void set_Cheat(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_SET_CHEAT_OFFSET))(str, nullptr);
		}

		::System::Void set_CharacterCustomPreset(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_COMMONCHEATREQUEST_SET_CHARACTERCUSTOMPRESET_OFFSET))(arg, nullptr);
		}

	};
}

