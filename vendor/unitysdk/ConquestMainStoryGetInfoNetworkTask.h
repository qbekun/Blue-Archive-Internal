#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTMAINSTORYGETINFONETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F308B0)
#define CONQUESTMAINSTORYGETINFONETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F308C0)
#define CONQUESTMAINSTORYGETINFONETWORKTASK_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F30BF0)
#define CONQUESTMAINSTORYGETINFONETWORKTASK_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F30C00)
#define CONQUESTMAINSTORYGETINFONETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F30C10)
#define CONQUESTMAINSTORYGETINFONETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F30C20)
#define CONQUESTMAINSTORYGETINFONETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F30C30)
#define CONQUESTMAINSTORYGETINFONETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F30C40)
#define CONQUESTMAINSTORYGETINFONETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F30CD0)

	inline static constexpr unsigned int ConquestMainStoryGetInfoNetworkTask_TypeDefinitionIndex = 2240;

	class ConquestMainStoryGetInfoNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _UniqueId_k__BackingField; // 0x48

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYGETINFONETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYGETINFONETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYGETINFONETWORKTASK_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYGETINFONETWORKTASK_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYGETINFONETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYGETINFONETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYGETINFONETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYGETINFONETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTMAINSTORYGETINFONETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

	};

