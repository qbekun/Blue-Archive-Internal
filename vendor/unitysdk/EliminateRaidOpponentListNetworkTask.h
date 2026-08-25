#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }

#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F5D220)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_ISNEXTREQ_OFFSET UNITYSDK_OFFSET(0x1F5D2D0)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D2E0)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_JUMP_OFFSET UNITYSDK_OFFSET(0x1F5D2F0)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5D300)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F5D310)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_ISMYRANK_OFFSET UNITYSDK_OFFSET(0x1F5D3A0)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1F5D3B0)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1F5D3C0)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_JUMP_OFFSET UNITYSDK_OFFSET(0x1F5D3D0)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_ISNEXTREQ_OFFSET UNITYSDK_OFFSET(0x1F5D3E0)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_BOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1F5D3F0)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK__PROCESSSESSION_B__24_0_OFFSET UNITYSDK_OFFSET(0x1F5D400)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_BOSSINDEX_OFFSET UNITYSDK_OFFSET(0x1F5D410)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_ISMYRANK_OFFSET UNITYSDK_OFFSET(0x1F5D420)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x1F5D430)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5D440)
#define ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1F5D6B0)

	inline static constexpr unsigned int EliminateRaidOpponentListNetworkTask_TypeDefinitionIndex = 2373;

	class EliminateRaidOpponentListNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _Jump_k__BackingField; // 0x40
		Il2CppObject* _Rank_k__BackingField; // 0x48
		Il2CppObject* _Score_k__BackingField; // 0x58
		Il2CppObject* _BossIndex_k__BackingField; // 0x68
		::System::Boolean _IsNextReq_k__BackingField; // 0x70
		::System::Boolean _IsMyRank_k__BackingField; // 0x71

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsNextReq(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_ISNEXTREQ_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_Jump()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_JUMP_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_IsMyRank(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_ISMYRANK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Rank()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_RANK_OFFSET))(nullptr);
		}

		::System::Void set_Rank(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_RANK_OFFSET))(arg, nullptr);
		}

		::System::Void set_Jump(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_JUMP_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNextReq()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_ISNEXTREQ_OFFSET))(nullptr);
		}

		Il2CppObject* get_BossIndex()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_BOSSINDEX_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__24_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK__PROCESSSESSION_B__24_0_OFFSET))(nullptr);
		}

		::System::Void set_BossIndex(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_BOSSINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMyRank()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_ISMYRANK_OFFSET))(nullptr);
		}

		::System::Void set_Score(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_SET_SCORE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		Il2CppObject* get_Score()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDOPPONENTLISTNETWORKTASK_GET_SCORE_OFFSET))(nullptr);
		}

	};

