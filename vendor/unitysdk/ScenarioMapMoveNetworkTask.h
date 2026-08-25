#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexLocation; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define SCENARIOMAPMOVENETWORKTASK_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F98D20)
#define SCENARIOMAPMOVENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F98D30)
#define SCENARIOMAPMOVENETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F98DC0)
#define SCENARIOMAPMOVENETWORKTASK_SET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F98DD0)
#define SCENARIOMAPMOVENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F98DE0)
#define SCENARIOMAPMOVENETWORKTASK_GET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F98DF0)
#define SCENARIOMAPMOVENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F98E10)
#define SCENARIOMAPMOVENETWORKTASK_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F98E20)
#define SCENARIOMAPMOVENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F98E30)
#define SCENARIOMAPMOVENETWORKTASK_GET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F990F0)
#define SCENARIOMAPMOVENETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F99110)
#define SCENARIOMAPMOVENETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F99180)
#define SCENARIOMAPMOVENETWORKTASK_SET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F99190)
#define SCENARIOMAPMOVENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F991A0)

	inline static constexpr unsigned int ScenarioMapMoveNetworkTask_TypeDefinitionIndex = 2767;

	class ScenarioMapMoveNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::MX::Campaign::HexaUnit* _Unit_k__BackingField; // 0x48
		::MX::Campaign::HexLocation* _DestPosition_k__BackingField; // 0x50
		::MX::Campaign::HexLocation* _InputPosition_k__BackingField; // 0x5C

		::MX::Campaign::HexaUnit* get_Unit()
		{
			return ((::MX::Campaign::HexaUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_GET_UNIT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_InputPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_SET_INPUTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* get_DestPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_GET_DESTPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Void set_Unit(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_SET_UNIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::MX::Campaign::HexLocation* get_InputPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_GET_INPUTPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_DestPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_SET_DESTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOMAPMOVENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

