#pragma once
#include "../../unitysdk.h"

namespace FlatData { class FriendSearchLevelOption; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_SET_FRIENDCODE_OFFSET UNITYSDK_OFFSET(0xF46F00)
#define MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_SET_LEVELOPTION_OFFSET UNITYSDK_OFFSET(0xF46F10)
#define MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_GET_FRIENDCODE_OFFSET UNITYSDK_OFFSET(0xF46F20)
#define MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_GET_LEVELOPTION_OFFSET UNITYSDK_OFFSET(0xF46F30)
#define MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46F40)
#define MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46F50)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendSearchRequest_TypeDefinitionIndex = 11805;

	class FriendSearchRequest : public Il2CppObject
	{
	public:
		::System::String* _FriendCode_k__BackingField; // 0x40
		::FlatData::FriendSearchLevelOption* _LevelOption_k__BackingField; // 0x48

		::System::Void set_FriendCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_SET_FRIENDCODE_OFFSET))(str, nullptr);
		}

		::System::Void set_LevelOption(::FlatData::FriendSearchLevelOption* arg)
		{
			((::System::Void(*)(::FlatData::FriendSearchLevelOption*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_SET_LEVELOPTION_OFFSET))(arg, nullptr);
		}

		::System::String* get_FriendCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_GET_FRIENDCODE_OFFSET))(nullptr);
		}

		::FlatData::FriendSearchLevelOption* get_LevelOption()
		{
			return ((::FlatData::FriendSearchLevelOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_GET_LEVELOPTION_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSEARCHREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

