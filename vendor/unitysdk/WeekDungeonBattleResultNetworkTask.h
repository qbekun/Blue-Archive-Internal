#pragma once
#include "unitysdk.h"

namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define WEEKDUNGEONBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FADCD0)
#define WEEKDUNGEONBATTLERESULTNETWORKTASK_SET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1FADD60)
#define WEEKDUNGEONBATTLERESULTNETWORKTASK_GET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1FADD70)
#define WEEKDUNGEONBATTLERESULTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FADD80)
#define WEEKDUNGEONBATTLERESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FADD90)
#define WEEKDUNGEONBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FADDA0)
#define WEEKDUNGEONBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FADDB0)

	inline static constexpr unsigned int WeekDungeonBattleResultNetworkTask_TypeDefinitionIndex = 2878;

	class WeekDungeonBattleResultNetworkTask : public Il2CppObject
	{
	public:
		::MX::Logic::Battles::Summary::BattleSummary* _BattleSummary_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_BattleSummary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTNETWORKTASK_SET_BATTLESUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_BattleSummary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTNETWORKTASK_GET_BATTLESUMMARY_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + WEEKDUNGEONBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

