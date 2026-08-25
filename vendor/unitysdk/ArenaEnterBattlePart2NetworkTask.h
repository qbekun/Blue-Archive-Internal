#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ArenaEnterBattlePart2Request; }
namespace MX::Logic::Data { class BattleSetting; }
namespace MX::NetworkProtocol { class ArenaEnterBattlePart2Response; }
namespace MX::NetworkProtocol { class Protocol; }

#define ARENAENTERBATTLEPART2NETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0AC60)
#define ARENAENTERBATTLEPART2NETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0ACF0)
#define ARENAENTERBATTLEPART2NETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F0AD60)
#define ARENAENTERBATTLEPART2NETWORKTASK_GET_REQ_OFFSET UNITYSDK_OFFSET(0x1F0AD70)
#define ARENAENTERBATTLEPART2NETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0AD80)
#define ARENAENTERBATTLEPART2NETWORKTASK_GET_BATTLESETTING_OFFSET UNITYSDK_OFFSET(0x1F0AD90)
#define ARENAENTERBATTLEPART2NETWORKTASK_SET_REQ_OFFSET UNITYSDK_OFFSET(0x1F0ADA0)
#define ARENAENTERBATTLEPART2NETWORKTASK_ENTERARENABATTLE_OFFSET UNITYSDK_OFFSET(0x1F0ADB0)
#define ARENAENTERBATTLEPART2NETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0B2F0)
#define ARENAENTERBATTLEPART2NETWORKTASK_SET_BATTLESETTING_OFFSET UNITYSDK_OFFSET(0x1F0B4C0)

	inline static constexpr unsigned int ArenaEnterBattlePart2NetworkTask_TypeDefinitionIndex = 1997;

	class ArenaEnterBattlePart2NetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ArenaEnterBattlePart2Request* _Req_k__BackingField; // 0x40
		::MX::Logic::Data::BattleSetting* _BattleSetting_k__BackingField; // 0x48

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART2NETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART2NETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART2NETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::ArenaEnterBattlePart2Request* get_Req()
		{
			return ((::MX::NetworkProtocol::ArenaEnterBattlePart2Request*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART2NETWORKTASK_GET_REQ_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART2NETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::Logic::Data::BattleSetting* get_BattleSetting()
		{
			return ((::MX::Logic::Data::BattleSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART2NETWORKTASK_GET_BATTLESETTING_OFFSET))(nullptr);
		}

		::System::Void set_Req(::MX::NetworkProtocol::ArenaEnterBattlePart2Request* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaEnterBattlePart2Request*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART2NETWORKTASK_SET_REQ_OFFSET))(arg, nullptr);
		}

		::System::Void EnterArenaBattle(::MX::NetworkProtocol::ArenaEnterBattlePart2Response* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ArenaEnterBattlePart2Response*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART2NETWORKTASK_ENTERARENABATTLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART2NETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_BattleSetting(::MX::Logic::Data::BattleSetting* arg)
		{
			((::System::Void(*)(::MX::Logic::Data::BattleSetting*, ::PVOID))((::PBYTE)hIl2Cpp + ARENAENTERBATTLEPART2NETWORKTASK_SET_BATTLESETTING_OFFSET))(arg, nullptr);
		}

	};

