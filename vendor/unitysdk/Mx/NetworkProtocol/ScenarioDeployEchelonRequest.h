#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DDA0)
#define MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_SET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0xF4DDB0)
#define MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DDC0)
#define MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4DDD0)
#define MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_GET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0xF4DDE0)
#define MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0xF4DDF0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioDeployEchelonRequest_TypeDefinitionIndex = 12079;

	class ScenarioDeployEchelonRequest : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		Il2CppObject* _DeployedEchelons_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_DeployedEchelons(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_SET_DEPLOYEDECHELONS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DeployedEchelons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_GET_DEPLOYEDECHELONS_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIODEPLOYECHELONREQUEST_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

	};
}

