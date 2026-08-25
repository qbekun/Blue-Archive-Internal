#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTGETINFONETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F302F0)
#define CONQUESTGETINFONETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F30380)
#define CONQUESTGETINFONETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F30390)
#define CONQUESTGETINFONETWORKTASK_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F305C0)
#define CONQUESTGETINFONETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F305D0)
#define CONQUESTGETINFONETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F305E0)
#define CONQUESTGETINFONETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F305F0)
#define CONQUESTGETINFONETWORKTASK_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F30600)
#define CONQUESTGETINFONETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F30610)

	inline static constexpr unsigned int ConquestGetInfoNetworkTask_TypeDefinitionIndex = 2237;

	class ConquestGetInfoNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _UniqueId_k__BackingField; // 0x48

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGETINFONETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGETINFONETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGETINFONETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGETINFONETWORKTASK_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGETINFONETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGETINFONETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGETINFONETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGETINFONETWORKTASK_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTGETINFONETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

