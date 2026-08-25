#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaRankListRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define ARENARANKLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0CD20)
#define ARENARANKLISTNETWORKTASK_SET_REQ_OFFSET UNITYSDK_OFFSET(0x1F0CDB0)
#define ARENARANKLISTNETWORKTASK_GET_REQ_OFFSET UNITYSDK_OFFSET(0x1F0CDC0)
#define ARENARANKLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0CDD0)
#define ARENARANKLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0CE40)
#define ARENARANKLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0D020)
#define ARENARANKLISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F0D030)

	inline static constexpr unsigned int ArenaRankListNetworkTask_TypeDefinitionIndex = 2009;

	class ArenaRankListNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ArenaRankListRequest* _Req_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENARANKLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_Req(::MX::NetworkProtocol::ArenaRankListRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaRankListRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ARENARANKLISTNETWORKTASK_SET_REQ_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ArenaRankListRequest* get_Req()
		{
			return ((::MX::NetworkProtocol::ArenaRankListRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENARANKLISTNETWORKTASK_GET_REQ_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENARANKLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ARENARANKLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENARANKLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENARANKLISTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

