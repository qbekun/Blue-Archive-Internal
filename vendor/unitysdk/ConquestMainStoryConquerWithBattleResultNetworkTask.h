#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::Logic::Battles::Summary { class BattleSummary; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_SET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1F2D500)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2D510)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2D880)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2D890)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F2D8A0)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_SET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F2D8B0)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2D8C0)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_GET_TILEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F2D8D0)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F2D8E0)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2D8F0)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_GET_BATTLESUMMARY_OFFSET UNITYSDK_OFFSET(0x1F2D900)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F2D910)
#define CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2D920)

	inline static constexpr unsigned int ConquestMainStoryConquerWithBattleResultNetworkTask_TypeDefinitionIndex = 2223;

	class ConquestMainStoryConquerWithBattleResultNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48
		::System::Int64 _TileUniqueId_k__BackingField; // 0x50
		::MX::Logic::Battles::Summary::BattleSummary* _BattleSummary_k__BackingField; // 0x58

		::System::Void set_BattleSummary(::MX::Logic::Battles::Summary::BattleSummary* arg)
		{
			((::System::Void(*)(::MX::Logic::Battles::Summary::BattleSummary*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_SET_BATTLESUMMARY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Void set_TileUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_SET_TILEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_TileUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_GET_TILEUNIQUEID_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::MX::Logic::Battles::Summary::BattleSummary* get_BattleSummary()
		{
			return ((::MX::Logic::Battles::Summary::BattleSummary*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_GET_BATTLESUMMARY_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYCONQUERWITHBATTLERESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

