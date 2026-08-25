#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define DICERACELOBBYNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F57D30)
#define DICERACELOBBYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F57D40)
#define DICERACELOBBYNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F57FB0)
#define DICERACELOBBYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F57FC0)
#define DICERACELOBBYNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F58050)
#define DICERACELOBBYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F58060)
#define DICERACELOBBYNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F58070)

	inline static constexpr unsigned int DiceRaceLobbyNetworkTask_TypeDefinitionIndex = 2337;

	class DiceRaceLobbyNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DICERACELOBBYNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACELOBBYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACELOBBYNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACELOBBYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACELOBBYNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACELOBBYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACELOBBYNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

	};

