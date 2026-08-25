#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define RAIDOPPONENTLISTNETWORKTASK_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1F8FBE0)
#define RAIDOPPONENTLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F8FBF0)
#define RAIDOPPONENTLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F8FC80)
#define RAIDOPPONENTLISTNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET UNITYSDK_OFFSET(0x1F8FC90)
#define RAIDOPPONENTLISTNETWORKTASK_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1F8FCA0)
#define RAIDOPPONENTLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F8FCB0)
#define RAIDOPPONENTLISTNETWORKTASK_SET_ISMYRANK_OFFSET UNITYSDK_OFFSET(0x1F8FCC0)
#define RAIDOPPONENTLISTNETWORKTASK_SET_JUMP_OFFSET UNITYSDK_OFFSET(0x1F8FCD0)
#define RAIDOPPONENTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F8FCE0)
#define RAIDOPPONENTLISTNETWORKTASK_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1F8FF40)
#define RAIDOPPONENTLISTNETWORKTASK_SET_ISNEXTREQ_OFFSET UNITYSDK_OFFSET(0x1F8FF50)
#define RAIDOPPONENTLISTNETWORKTASK_GET_JUMP_OFFSET UNITYSDK_OFFSET(0x1F8FF60)
#define RAIDOPPONENTLISTNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F8FF70)
#define RAIDOPPONENTLISTNETWORKTASK_GET_ISNEXTREQ_OFFSET UNITYSDK_OFFSET(0x1F90020)
#define RAIDOPPONENTLISTNETWORKTASK_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x1F90030)
#define RAIDOPPONENTLISTNETWORKTASK_GET_ISMYRANK_OFFSET UNITYSDK_OFFSET(0x1F90040)

	inline static constexpr unsigned int RaidOpponentListNetworkTask_TypeDefinitionIndex = 2709;

	class RaidOpponentListNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _Jump_k__BackingField; // 0x40
		Il2CppObject* _Rank_k__BackingField; // 0x48
		Il2CppObject* _Score_k__BackingField; // 0x58
		::System::Boolean _IsNextReq_k__BackingField; // 0x68
		::System::Boolean _IsMyRank_k__BackingField; // 0x69

		Il2CppObject* get_Score()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_GET_SCORE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__20_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK__PROCESSSESSION_B__20_0_OFFSET))(nullptr);
		}

		::System::Void set_Rank(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_SET_RANK_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_IsMyRank(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_SET_ISMYRANK_OFFSET))(arg, nullptr);
		}

		::System::Void set_Jump(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_SET_JUMP_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		Il2CppObject* get_Rank()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_GET_RANK_OFFSET))(nullptr);
		}

		::System::Void set_IsNextReq(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_SET_ISNEXTREQ_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Jump()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_GET_JUMP_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsNextReq()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_GET_ISNEXTREQ_OFFSET))(nullptr);
		}

		::System::Void set_Score(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_SET_SCORE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMyRank()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDOPPONENTLISTNETWORKTASK_GET_ISMYRANK_OFFSET))(nullptr);
		}

	};

