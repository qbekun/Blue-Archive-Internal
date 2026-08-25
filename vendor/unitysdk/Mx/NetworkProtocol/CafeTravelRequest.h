#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF142D0)
#define MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_GET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF142E0)
#define MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_GET_CURRENTVISITINGACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF142F0)
#define MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_SET_CURRENTVISITINGACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF14300)
#define MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_SET_TARGETACCOUNTID_OFFSET UNITYSDK_OFFSET(0xF14310)
#define MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF14320)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int CafeTravelRequest_TypeDefinitionIndex = 11400;

	class CafeTravelRequest : public Il2CppObject
	{
	public:
		Il2CppObject* _TargetAccountId_k__BackingField; // 0x40
		Il2CppObject* _CurrentVisitingAccountId_k__BackingField; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_TargetAccountId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_GET_TARGETACCOUNTID_OFFSET))(nullptr);
		}

		Il2CppObject* get_CurrentVisitingAccountId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_GET_CURRENTVISITINGACCOUNTID_OFFSET))(nullptr);
		}

		::System::Void set_CurrentVisitingAccountId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_SET_CURRENTVISITINGACCOUNTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_TargetAccountId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_SET_TARGETACCOUNTID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_CAFETRAVELREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

