#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_FRIENDSEARCHRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF46F60)
#define MX_NETWORKPROTOCOL_FRIENDSEARCHRESPONSE_GET_SEARCHRESULT_OFFSET UNITYSDK_OFFSET(0xF46F70)
#define MX_NETWORKPROTOCOL_FRIENDSEARCHRESPONSE_SET_SEARCHRESULT_OFFSET UNITYSDK_OFFSET(0xF46F80)
#define MX_NETWORKPROTOCOL_FRIENDSEARCHRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF46F90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int FriendSearchResponse_TypeDefinitionIndex = 11806;

	class FriendSearchResponse : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _SearchResult_k__BackingField; // 0x50

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSEARCHRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_SearchResult()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSEARCHRESPONSE_GET_SEARCHRESULT_OFFSET))(nullptr);
		}

		::System::Void set_SearchResult(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSEARCHRESPONSE_SET_SEARCHRESULT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_FRIENDSEARCHRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

