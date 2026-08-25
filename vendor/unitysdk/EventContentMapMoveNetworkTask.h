#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexLocation; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define EVENTCONTENTMAPMOVENETWORKTASK_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F6D810)
#define EVENTCONTENTMAPMOVENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F6D820)
#define EVENTCONTENTMAPMOVENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6DB00)
#define EVENTCONTENTMAPMOVENETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F6DB10)
#define EVENTCONTENTMAPMOVENETWORKTASK_GET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6DB20)
#define EVENTCONTENTMAPMOVENETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F6DB40)
#define EVENTCONTENTMAPMOVENETWORKTASK_GET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6DB50)
#define EVENTCONTENTMAPMOVENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6DB70)
#define EVENTCONTENTMAPMOVENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6DB80)
#define EVENTCONTENTMAPMOVENETWORKTASK_SET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6DB90)
#define EVENTCONTENTMAPMOVENETWORKTASK_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F6DBA0)
#define EVENTCONTENTMAPMOVENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F6DBB0)
#define EVENTCONTENTMAPMOVENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F6DC40)
#define EVENTCONTENTMAPMOVENETWORKTASK__PROCESSSESSION_B__20_0_OFFSET UNITYSDK_OFFSET(0x1F6DC50)
#define EVENTCONTENTMAPMOVENETWORKTASK_SET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6DC60)
#define EVENTCONTENTMAPMOVENETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F6DC70)

	inline static constexpr unsigned int EventContentMapMoveNetworkTask_TypeDefinitionIndex = 2488;

	class EventContentMapMoveNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _StageUniqueId_k__BackingField; // 0x48
		::MX::Campaign::HexaUnit* _Unit_k__BackingField; // 0x50
		::MX::Campaign::HexLocation* _DestPosition_k__BackingField; // 0x58
		::MX::Campaign::HexLocation* _InputPosition_k__BackingField; // 0x64

		::System::Void set_Unit(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_SET_UNIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexLocation* get_DestPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_GET_DESTPOSITION_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* get_InputPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_GET_INPUTPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_InputPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_SET_INPUTPOSITION_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexaUnit* get_Unit()
		{
			return ((::MX::Campaign::HexaUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_GET_UNIT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__20_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK__PROCESSSESSION_B__20_0_OFFSET))(nullptr);
		}

		::System::Void set_DestPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_SET_DESTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTMAPMOVENETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

	};

