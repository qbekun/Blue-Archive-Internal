#pragma once
#include "unitysdk.h"

namespace FlatData { class EventContentDiceRaceResultType; }
namespace MX::NetworkProtocol { class Protocol; }

#define DICERACEUSEITEMNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F58980)
#define DICERACEUSEITEMNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F58990)
#define DICERACEUSEITEMNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F589A0)
#define DICERACEUSEITEMNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F589B0)
#define DICERACEUSEITEMNETWORKTASK_GET_DICERACERESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1F58CD0)
#define DICERACEUSEITEMNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F58CE0)
#define DICERACEUSEITEMNETWORKTASK_SET_DICERACERESULTTYPE_OFFSET UNITYSDK_OFFSET(0x1F58D70)
#define DICERACEUSEITEMNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F58D80)
#define DICERACEUSEITEMNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F58D90)

	inline static constexpr unsigned int DiceRaceUseItemNetworkTask_TypeDefinitionIndex = 2343;

	class DiceRaceUseItemNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::EventContentDiceRaceResultType* _DiceRaceResultType_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEUSEITEMNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEUSEITEMNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEUSEITEMNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEUSEITEMNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::FlatData::EventContentDiceRaceResultType* get_DiceRaceResultType()
		{
			return ((::FlatData::EventContentDiceRaceResultType*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEUSEITEMNETWORKTASK_GET_DICERACERESULTTYPE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEUSEITEMNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_DiceRaceResultType(::FlatData::EventContentDiceRaceResultType* arg)
		{
			((::System::Void(*)(::FlatData::EventContentDiceRaceResultType*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEUSEITEMNETWORKTASK_SET_DICERACERESULTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEUSEITEMNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEUSEITEMNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

	};

