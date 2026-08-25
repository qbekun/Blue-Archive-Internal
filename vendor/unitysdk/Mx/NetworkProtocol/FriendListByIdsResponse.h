#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDLISTBYIDSRESPONSE_SET_LISTRESULT_OFFSET UNITYSDK_OFFSET(0xF47380)
#define MX_NETWORKPROTOCOL_FRIENDLISTBYIDSRESPONSE_GET_LISTRESULT_OFFSET UNITYSDK_OFFSET(0xF47390)
#define MX_NETWORKPROTOCOL_FRIENDLISTBYIDSRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF473A0)
#define MX_NETWORKPROTOCOL_FRIENDLISTBYIDSRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF473B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendListByIdsResponse_TypeDefinitionIndex = 11818;

	class FriendListByIdsResponse : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _ListResult_k__BackingField; // 0x50

		::System::Void set_ListResult(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTBYIDSRESPONSE_SET_LISTRESULT_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ListResult()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTBYIDSRESPONSE_GET_LISTRESULT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTBYIDSRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDLISTBYIDSRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

