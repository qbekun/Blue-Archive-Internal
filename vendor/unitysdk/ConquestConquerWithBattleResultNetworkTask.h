#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2CD80)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2CD90)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2CE20)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2CE30)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F2CE40)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F2CE50)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F2CE60)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F2CE70)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F2CE80)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2CE90)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_SET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1F2CEA0)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_GET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1F2CEB0)
#define CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2CEC0)

	inline static constexpr unsigned int ConquestConquerWithBattleResultNetworkTask_TypeDefinitionIndex = 2221;

	class ConquestConquerWithBattleResultNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50
		::MX::Logic::Battles::Summary::BattleSummary* _BattleSummary_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_BattleSummary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_SET_BATTLESUMMARY_OFFSET))(arg, nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_BattleSummary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_GET_BATTLESUMMARY_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTCONQUERWITHBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

