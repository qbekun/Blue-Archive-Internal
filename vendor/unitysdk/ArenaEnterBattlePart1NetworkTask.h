#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaEnterBattlePart1Request; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ArenaEnterBattlePart1Response; }

#define ARENAENTERBATTLEPART1NETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F095D0)
#define ARENAENTERBATTLEPART1NETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F09640)
#define ARENAENTERBATTLEPART1NETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F09650)
#define ARENAENTERBATTLEPART1NETWORKTASK_HANDLECUSTOMERROR_OFFSET UNITYSDK_OFFSET(0x1F09660)
#define ARENAENTERBATTLEPART1NETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F09760)
#define ARENAENTERBATTLEPART1NETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F097F0)
#define ARENAENTERBATTLEPART1NETWORKTASK_REQUESTENTERBATTLEPART2_OFFSET UNITYSDK_OFFSET(0x1F0A200)
#define ARENAENTERBATTLEPART1NETWORKTASK_SET_REQ_OFFSET UNITYSDK_OFFSET(0x1F0AA00)
#define ARENAENTERBATTLEPART1NETWORKTASK_GET_REQ_OFFSET UNITYSDK_OFFSET(0x1F0AA10)

	inline static constexpr unsigned int ArenaEnterBattlePart1NetworkTask_TypeDefinitionIndex = 1994;

	class ArenaEnterBattlePart1NetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ArenaEnterBattlePart1Request* _Req_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART1NETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART1NETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART1NETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleCustomError(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART1NETWORKTASK_HANDLECUSTOMERROR_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART1NETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART1NETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void RequestEnterBattlePart2(::MX::NetworkProtocol::ArenaEnterBattlePart1Response* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaEnterBattlePart1Response*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART1NETWORKTASK_REQUESTENTERBATTLEPART2_OFFSET))(arg, nullptr);
		}

		::System::Void set_Req(::MX::NetworkProtocol::ArenaEnterBattlePart1Request* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaEnterBattlePart1Request*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART1NETWORKTASK_SET_REQ_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ArenaEnterBattlePart1Request* get_Req()
		{
			return ((::MX::NetworkProtocol::ArenaEnterBattlePart1Request*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART1NETWORKTASK_GET_REQ_OFFSET))(nullptr);
		}

	};

