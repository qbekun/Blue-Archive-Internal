#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F73880)
#define EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F73890)
#define EVENTCONTENTSTORYSTAGERESULTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F738A0)
#define EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F738B0)
#define EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F738C0)
#define EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F738D0)
#define EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F746D0)
#define EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F74760)
#define EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F74770)

	inline static constexpr unsigned int EventContentStoryStageResultNetworkTask_TypeDefinitionIndex = 2533;

	class EventContentStoryStageResultNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _StageUniqueId_k__BackingField; // 0x48

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSTORYSTAGERESULTNETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};

