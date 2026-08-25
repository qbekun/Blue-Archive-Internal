#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSREQUEST_GET_ISANONYMOUS_OFFSET UNITYSDK_OFFSET(0xF113E0)
#define MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF113F0)
#define MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF11400)
#define MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSREQUEST_SET_ISANONYMOUS_OFFSET UNITYSDK_OFFSET(0xF11410)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ArenaSettingAnonymousRequest_TypeDefinitionIndex = 11305;

	class ArenaSettingAnonymousRequest : public Il2CppObject
	{
	public:
		::System::Boolean _IsAnonymous_k__BackingField; // 0x40

		::System::Boolean get_IsAnonymous()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSREQUEST_GET_ISANONYMOUS_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSREQUEST_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsAnonymous(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_ARENASETTINGANONYMOUSREQUEST_SET_ISANONYMOUS_OFFSET))(arg, nullptr);
		}

	};
}

