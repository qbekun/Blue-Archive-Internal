#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CLEARDECKLISTRESPONSE_GET_CLEARDECKDBS_OFFSET UNITYSDK_OFFSET(0xF3F210)
#define MX_NETWORKPROTOCOL_CLEARDECKLISTRESPONSE_SET_CLEARDECKDBS_OFFSET UNITYSDK_OFFSET(0xF3F220)
#define MX_NETWORKPROTOCOL_CLEARDECKLISTRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF3F230)
#define MX_NETWORKPROTOCOL_CLEARDECKLISTRESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF3F240)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ClearDeckListResponse_TypeDefinitionIndex = 11528;

	class ClearDeckListResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _ClearDeckDBs_k__BackingField; // 0x50

		Il2CppObject* get_ClearDeckDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKLISTRESPONSE_GET_CLEARDECKDBS_OFFSET))(nullptr);
		}

		::System::Void set_ClearDeckDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKLISTRESPONSE_SET_CLEARDECKDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKLISTRESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CLEARDECKLISTRESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

