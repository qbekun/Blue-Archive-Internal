#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4DE40)
#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DE50)
#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_SET_WITHDRAWECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF4DE60)
#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_GET_WITHDRAWECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0xF4DE70)
#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4DE80)
#define MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DE90)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioWithdrawEchelonRequest_TypeDefinitionIndex = 12081;

	class ScenarioWithdrawEchelonRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		Il2CppObject* _WithdrawEchelonEntityId_k__BackingField; // 0x48

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_WithdrawEchelonEntityId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_SET_WITHDRAWECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WithdrawEchelonEntityId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_GET_WITHDRAWECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOWITHDRAWECHELONREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

