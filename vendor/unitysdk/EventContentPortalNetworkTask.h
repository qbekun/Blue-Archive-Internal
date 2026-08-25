#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTPORTALNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F6E550)
#define EVENTCONTENTPORTALNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6E5E0)
#define EVENTCONTENTPORTALNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F6E5F0)
#define EVENTCONTENTPORTALNETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F6E600)
#define EVENTCONTENTPORTALNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F6E610)
#define EVENTCONTENTPORTALNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6E680)
#define EVENTCONTENTPORTALNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F6E690)
#define EVENTCONTENTPORTALNETWORKTASK_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F6E8F0)
#define EVENTCONTENTPORTALNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F6E900)
#define EVENTCONTENTPORTALNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E910)
#define EVENTCONTENTPORTALNETWORKTASK_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F6E920)
#define EVENTCONTENTPORTALNETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F6E930)

	inline static constexpr unsigned int EventContentPortalNetworkTask_TypeDefinitionIndex = 2494;

	class EventContentPortalNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _StageUniqueId_k__BackingField; // 0x48
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x50

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTPORTALNETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};

