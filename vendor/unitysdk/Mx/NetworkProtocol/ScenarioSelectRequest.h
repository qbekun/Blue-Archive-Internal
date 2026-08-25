#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_SET_SCRIPTSELECTGROUP_OFFSET UNITYSDK_OFFSET(0xF4DA60)
#define MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4DA70)
#define MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_SET_SCRIPTGROUPID_OFFSET UNITYSDK_OFFSET(0xF4DA80)
#define MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_GET_SCRIPTSELECTGROUP_OFFSET UNITYSDK_OFFSET(0xF4DA90)
#define MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_GET_SCRIPTGROUPID_OFFSET UNITYSDK_OFFSET(0xF4DAA0)
#define MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4DAB0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioSelectRequest_TypeDefinitionIndex = 12067;

	class ScenarioSelectRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ScriptGroupId_k__BackingField; // 0x40
		::System::Int64 _ScriptSelectGroup_k__BackingField; // 0x48

		::System::Void set_ScriptSelectGroup(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_SET_SCRIPTSELECTGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ScriptGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_SET_SCRIPTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScriptSelectGroup()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_GET_SCRIPTSELECTGROUP_OFFSET))(nullptr);
		}

		::System::Int64 get_ScriptGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_GET_SCRIPTGROUPID_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSELECTREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

