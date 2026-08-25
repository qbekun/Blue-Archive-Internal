#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_SET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xF4A960)
#define MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_GET_LASTREADMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xF4A970)
#define MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A980)
#define MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_SET_LASTREADMESSAGEGROUPID_OFFSET UNITYSDK_OFFSET(0xF4A990)
#define MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_GET_CHOSENMESSAGEID_OFFSET UNITYSDK_OFFSET(0xF4A9A0)
#define MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_SET_CHOSENMESSAGEID_OFFSET UNITYSDK_OFFSET(0xF4A9B0)
#define MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A9C0)
#define MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_GET_CHARACTERDBID_OFFSET UNITYSDK_OFFSET(0xF4A9D0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MomoTalkReadRequest_TypeDefinitionIndex = 11963;

	class MomoTalkReadRequest : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterDBId_k__BackingField; // 0x40
		::System::Int64 _LastReadMessageGroupId_k__BackingField; // 0x48
		Il2CppObject* _ChosenMessageId_k__BackingField; // 0x50

		::System::Void set_CharacterDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_SET_CHARACTERDBID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LastReadMessageGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_GET_LASTREADMESSAGEGROUPID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_LastReadMessageGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_SET_LASTREADMESSAGEGROUPID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ChosenMessageId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_GET_CHOSENMESSAGEID_OFFSET))(nullptr);
		}

		::System::Void set_ChosenMessageId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_SET_CHOSENMESSAGEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKREADREQUEST_GET_CHARACTERDBID_OFFSET))(nullptr);
		}

	};
}

