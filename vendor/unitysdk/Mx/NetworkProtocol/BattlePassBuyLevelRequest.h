#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_SET_BATTLEPASSBUYLEVELCOUNT_OFFSET UNITYSDK_OFFSET(0xF11CB0)
#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF11CC0)
#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11CD0)
#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_SET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF11CE0)
#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_GET_BATTLEPASSID_OFFSET UNITYSDK_OFFSET(0xF11CF0)
#define MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_GET_BATTLEPASSBUYLEVELCOUNT_OFFSET UNITYSDK_OFFSET(0xF11D00)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BattlePassBuyLevelRequest_TypeDefinitionIndex = 11333;

	class BattlePassBuyLevelRequest : public Il2CppObject
	{
	public:
		::System::Int64 _BattlePassId_k__BackingField; // 0x40
		::System::Int32 _BattlePassBuyLevelCount_k__BackingField; // 0x48

		::System::Void set_BattlePassBuyLevelCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_SET_BATTLEPASSBUYLEVELCOUNT_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_BattlePassId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_SET_BATTLEPASSID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_BattlePassId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_GET_BATTLEPASSID_OFFSET))(nullptr);
		}

		::System::Int32 get_BattlePassBuyLevelCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BATTLEPASSBUYLEVELREQUEST_GET_BATTLEPASSBUYLEVELCOUNT_OFFSET))(nullptr);
		}

	};
}

