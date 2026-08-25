#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaHistoryRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define ARENAHISTORYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0C1B0)
#define ARENAHISTORYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0C220)
#define ARENAHISTORYNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0C410)
#define ARENAHISTORYNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F0C420)
#define ARENAHISTORYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0C430)
#define ARENAHISTORYNETWORKTASK_SET_REQ_OFFSET UNITYSDK_OFFSET(0x1F0C4C0)
#define ARENAHISTORYNETWORKTASK_GET_REQ_OFFSET UNITYSDK_OFFSET(0x1F0C4D0)

	inline static constexpr unsigned int ArenaHistoryNetworkTask_TypeDefinitionIndex = 2003;

	class ArenaHistoryNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ArenaHistoryRequest* _Req_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAHISTORYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAHISTORYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAHISTORYNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAHISTORYNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAHISTORYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_Req(::MX::NetworkProtocol::ArenaHistoryRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaHistoryRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAHISTORYNETWORKTASK_SET_REQ_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ArenaHistoryRequest* get_Req()
		{
			return ((::MX::NetworkProtocol::ArenaHistoryRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAHISTORYNETWORKTASK_GET_REQ_OFFSET))(nullptr);
		}

	};

