#pragma once
#include "unitysdk.h"

namespace MX::Campaign { class HexaUnit; }
namespace MX::Campaign { class HexLocation; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define CAMPAIGNMAPMOVENETWORKTASK_GET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F1A770)
#define CAMPAIGNMAPMOVENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A790)
#define CAMPAIGNMAPMOVENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F1A7A0)
#define CAMPAIGNMAPMOVENETWORKTASK_GET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F1A830)
#define CAMPAIGNMAPMOVENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F1A850)
#define CAMPAIGNMAPMOVENETWORKTASK_SET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F1A860)
#define CAMPAIGNMAPMOVENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F1A870)
#define CAMPAIGNMAPMOVENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1AB40)
#define CAMPAIGNMAPMOVENETWORKTASK_GET_UNIT_OFFSET UNITYSDK_OFFSET(0x1F1AB50)
#define CAMPAIGNMAPMOVENETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F1AB60)
#define CAMPAIGNMAPMOVENETWORKTASK_SET_DESTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F1AB70)
#define CAMPAIGNMAPMOVENETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F1AB80)
#define CAMPAIGNMAPMOVENETWORKTASK_SET_INPUTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F1ABF0)
#define CAMPAIGNMAPMOVENETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F1AC00)

	inline static constexpr unsigned int CampaignMapMoveNetworkTask_TypeDefinitionIndex = 2092;

	class CampaignMapMoveNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::MX::Campaign::HexaUnit* _Unit_k__BackingField; // 0x48
		::MX::Campaign::HexLocation* _DestPosition_k__BackingField; // 0x50
		::MX::Campaign::HexLocation* _InputPosition_k__BackingField; // 0x5C

		::MX::Campaign::HexLocation* get_DestPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_GET_DESTPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* get_InputPosition()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_GET_INPUTPOSITION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Void set_Unit(::MX::Campaign::HexaUnit* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexaUnit*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_SET_UNIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::Campaign::HexaUnit* get_Unit()
		{
			return ((::MX::Campaign::HexaUnit*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_GET_UNIT_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_DestPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_SET_DESTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_InputPosition(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_SET_INPUTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNMAPMOVENETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};

