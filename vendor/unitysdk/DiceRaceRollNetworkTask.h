#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define DICERACEROLLNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F58300)
#define DICERACEROLLNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F58310)
#define DICERACEROLLNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F58320)
#define DICERACEROLLNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F58640)
#define DICERACEROLLNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F58650)
#define DICERACEROLLNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F58660)
#define DICERACEROLLNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F586F0)

	inline static constexpr unsigned int DiceRaceRollNetworkTask_TypeDefinitionIndex = 2340;

	class DiceRaceRollNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEROLLNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEROLLNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DICERACEROLLNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEROLLNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEROLLNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEROLLNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DICERACEROLLNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

