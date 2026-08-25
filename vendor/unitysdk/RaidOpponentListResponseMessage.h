#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class RaidOpponentListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define RAIDOPPONENTLISTRESPONSEMESSAGE_GET_ISNEXTREQ_OFFSET UNITYSDK_OFFSET(0x1F90310)
#define RAIDOPPONENTLISTRESPONSEMESSAGE_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1F90320)
#define RAIDOPPONENTLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F90330)
#define RAIDOPPONENTLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8FEC0)
#define RAIDOPPONENTLISTRESPONSEMESSAGE_GET_ISMYRANK_OFFSET UNITYSDK_OFFSET(0x1F90340)
#define RAIDOPPONENTLISTRESPONSEMESSAGE_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1F90350)
#define RAIDOPPONENTLISTRESPONSEMESSAGE_GET_JUMP_OFFSET UNITYSDK_OFFSET(0x1F90360)

	inline static constexpr unsigned int RaidOpponentListResponseMessage_TypeDefinitionIndex = 2710;

	class RaidOpponentListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::RaidOpponentListResponse* _Response_k__BackingField; // 0x20
		Il2CppObject* _Rank_k__BackingField; // 0x28
		::System::Boolean _IsNextReq_k__BackingField; // 0x38
		::System::Int64 _Pivot_k__BackingField; // 0x40
		::System::Boolean _Jump_k__BackingField; // 0x48
		::System::Boolean _IsMyRank_k__BackingField; // 0x49

		::System::Boolean get_IsNextReq()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTRESPONSEMESSAGE_GET_ISNEXTREQ_OFFSET))(nullptr);
		}

		::System::Int64 get_Pivot()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTRESPONSEMESSAGE_GET_PIVOT_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::RaidOpponentListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::RaidOpponentListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::RaidOpponentListResponse* arg2, Il2CppObject* arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Boolean arg6)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::RaidOpponentListResponse*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

		::System::Boolean get_IsMyRank()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTRESPONSEMESSAGE_GET_ISMYRANK_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rank()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTRESPONSEMESSAGE_GET_RANK_OFFSET))(nullptr);
		}

		::System::Boolean get_Jump()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTRESPONSEMESSAGE_GET_JUMP_OFFSET))(nullptr);
		}

	};

