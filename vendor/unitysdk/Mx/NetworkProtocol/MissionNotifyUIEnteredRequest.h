#pragma once
#include "../../unitysdk.h"

namespace FlatData { class MissionCompleteUIPrefabType; }
namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDREQUEST_GET_UITYPE_OFFSET UNITYSDK_OFFSET(0xF4A7C0)
#define MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDREQUEST_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A7D0)
#define MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDREQUEST_SET_UITYPE_OFFSET UNITYSDK_OFFSET(0xF4A7E0)
#define MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDREQUEST_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A7F0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MissionNotifyUIEnteredRequest_TypeDefinitionIndex = 11957;

	class MissionNotifyUIEnteredRequest : public Il2CppObject
	{
	public:
		::FlatData::MissionCompleteUIPrefabType* _UIType_k__BackingField; // 0x40

		::FlatData::MissionCompleteUIPrefabType* get_UIType()
		{
			return ((::FlatData::MissionCompleteUIPrefabType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDREQUEST_GET_UITYPE_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDREQUEST_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void set_UIType(::FlatData::MissionCompleteUIPrefabType* arg)
		{
			((::System::Void(*)(::FlatData::MissionCompleteUIPrefabType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDREQUEST_SET_UITYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MISSIONNOTIFYUIENTEREDREQUEST_.CTOR_OFFSET))(nullptr);
		}

	};
}

