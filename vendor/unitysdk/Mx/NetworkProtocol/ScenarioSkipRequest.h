#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4D9E0)
#define MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4D9F0)
#define MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_SET_SCRIPTGROUPID_OFFSET UNITYSDK_OFFSET(0xF4DA00)
#define MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_GET_SCRIPTGROUPID_OFFSET UNITYSDK_OFFSET(0xF4DA10)
#define MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_SET_SKIPPOINTSCRIPTCOUNT_OFFSET UNITYSDK_OFFSET(0xF4DA20)
#define MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_GET_SKIPPOINTSCRIPTCOUNT_OFFSET UNITYSDK_OFFSET(0xF4DA30)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ScenarioSkipRequest_TypeDefinitionIndex = 12065;

	class ScenarioSkipRequest : public Il2CppObject
	{
	public:
		::System::Int64 _ScriptGroupId_k__BackingField; // 0x40
		::System::Int32 _SkipPointScriptCount_k__BackingField; // 0x48

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ScriptGroupId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_SET_SCRIPTGROUPID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_ScriptGroupId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_GET_SCRIPTGROUPID_OFFSET))(nullptr);
		}

		::System::Void set_SkipPointScriptCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_SET_SKIPPOINTSCRIPTCOUNT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_SkipPointScriptCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SCENARIOSKIPREQUEST_GET_SKIPPOINTSCRIPTCOUNT_OFFSET))(nullptr);
		}

	};
}

