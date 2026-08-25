#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F77380)
#define EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F77390)
#define EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F773A0)
#define EVENTCONTENTTREASURENEXTROUNDNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F775B0)
#define EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F775C0)
#define EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_GET_ROUND_OFFSET UNITYSDK_OFFSET(0x1F775D0)
#define EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F775E0)
#define EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F77670)
#define EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_SET_ROUND_OFFSET UNITYSDK_OFFSET(0x1F77680)

	inline static constexpr unsigned int EventContentTreasureNextRoundNetworkTask_TypeDefinitionIndex = 2550;

	class EventContentTreasureNextRoundNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int32 _Round_k__BackingField; // 0x48

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_Round()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_GET_ROUND_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_Round(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTTREASURENEXTROUNDNETWORKTASK_SET_ROUND_OFFSET))(arg, nullptr);
		}

	};

