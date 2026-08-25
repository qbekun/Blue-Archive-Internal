#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EliminateRaidOpponentListResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_ISMYRANK_OFFSET UNITYSDK_OFFSET(0x1F5D980)
#define ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_JUMP_OFFSET UNITYSDK_OFFSET(0x1F5D990)
#define ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1F5D9A0)
#define ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_ISNEXTREQ_OFFSET UNITYSDK_OFFSET(0x1F5D9B0)
#define ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_BOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1F5D9C0)
#define ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5D9D0)
#define ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D620)

	inline static constexpr unsigned int EliminateRaidOpponentListResponseMessage_TypeDefinitionIndex = 2374;

	class EliminateRaidOpponentListResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EliminateRaidOpponentListResponse* _Response_k__BackingField; // 0x20
		Il2CppObject* _Rank_k__BackingField; // 0x28
		Il2CppObject* _BossIndex_k__BackingField; // 0x38
		::System::Boolean _IsNextReq_k__BackingField; // 0x40
		::System::Boolean _Jump_k__BackingField; // 0x41
		::System::Boolean _IsMyRank_k__BackingField; // 0x42

		::System::Boolean get_IsMyRank()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_ISMYRANK_OFFSET))(nullptr);
		}

		::System::Boolean get_Jump()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_JUMP_OFFSET))(nullptr);
		}

		Il2CppObject* get_Rank()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_RANK_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNextReq()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_ISNEXTREQ_OFFSET))(nullptr);
		}

		Il2CppObject* get_BossIndex()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_BOSSINDEX_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::EliminateRaidOpponentListResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EliminateRaidOpponentListResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EliminateRaidOpponentListResponse* arg2, Il2CppObject* arg3, Il2CppObject* arg4, ::System::Boolean arg5, ::System::Boolean arg6, ::System::Boolean arg7)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EliminateRaidOpponentListResponse*, Il2CppObject*, Il2CppObject*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTRESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, arg7, nullptr);
		}

	};

