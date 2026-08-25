#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTTAKEEVENTOBJECTNETWORKTASK_SET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0x1F35160)
#define CONQUESTTAKEEVENTOBJECTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F35170)
#define CONQUESTTAKEEVENTOBJECTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F35180)
#define CONQUESTTAKEEVENTOBJECTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F35190)
#define CONQUESTTAKEEVENTOBJECTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F351A0)
#define CONQUESTTAKEEVENTOBJECTNETWORKTASK_GET_CONQUESTOBJECTDBID_OFFSET UNITYSDK_OFFSET(0x1F35230)
#define CONQUESTTAKEEVENTOBJECTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F35240)
#define CONQUESTTAKEEVENTOBJECTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F35250)
#define CONQUESTTAKEEVENTOBJECTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F355F0)

	inline static constexpr unsigned int ConquestTakeEventObjectNetworkTask_TypeDefinitionIndex = 2265;

	class ConquestTakeEventObjectNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _ConquestObjectDBId_k__BackingField; // 0x48

		::System::Void set_ConquestObjectDBId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTAKEEVENTOBJECTNETWORKTASK_SET_CONQUESTOBJECTDBID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTAKEEVENTOBJECTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTAKEEVENTOBJECTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTAKEEVENTOBJECTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTAKEEVENTOBJECTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_ConquestObjectDBId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTAKEEVENTOBJECTNETWORKTASK_GET_CONQUESTOBJECTDBID_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTAKEEVENTOBJECTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTAKEEVENTOBJECTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTTAKEEVENTOBJECTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

