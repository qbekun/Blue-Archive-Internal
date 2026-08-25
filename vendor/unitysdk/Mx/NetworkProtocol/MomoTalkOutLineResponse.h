#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_GET_FAVORSCHEDULERECORDS_OFFSET UNITYSDK_OFFSET(0xF4A860)
#define MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_SET_MOMOTALKOUTLINEDBS_OFFSET UNITYSDK_OFFSET(0xF4A870)
#define MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4A880)
#define MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_GET_MOMOTALKOUTLINEDBS_OFFSET UNITYSDK_OFFSET(0xF4A890)
#define MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_SET_FAVORSCHEDULERECORDS_OFFSET UNITYSDK_OFFSET(0xF4A8A0)
#define MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4A8B0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int MomoTalkOutLineResponse_TypeDefinitionIndex = 11960;

	class MomoTalkOutLineResponse : public Il2CppObject
	{
	public:
		Il2CppObject* _MomoTalkOutLineDBs_k__BackingField; // 0x50
		Il2CppObject* _FavorScheduleRecords_k__BackingField; // 0x58

		Il2CppObject* get_FavorScheduleRecords()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_GET_FAVORSCHEDULERECORDS_OFFSET))(nullptr);
		}

		::System::Void set_MomoTalkOutLineDBs(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_SET_MOMOTALKOUTLINEDBS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_MomoTalkOutLineDBs()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_GET_MOMOTALKOUTLINEDBS_OFFSET))(nullptr);
		}

		::System::Void set_FavorScheduleRecords(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_SET_FAVORSCHEDULERECORDS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_MOMOTALKOUTLINERESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

	};
}

