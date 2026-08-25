#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAMPAIGNHEALNETWORKTASK_SET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1F19A00)
#define CAMPAIGNHEALNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F19A10)
#define CAMPAIGNHEALNETWORKTASK_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1F19A20)
#define CAMPAIGNHEALNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F19A30)
#define CAMPAIGNHEALNETWORKTASK_GET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1F19AC0)
#define CAMPAIGNHEALNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F19AD0)
#define CAMPAIGNHEALNETWORKTASK_SET_CHARACTERSERVERID_OFFSET UNITYSDK_OFFSET(0x1F19AE0)
#define CAMPAIGNHEALNETWORKTASK_GET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1F19AF0)
#define CAMPAIGNHEALNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F19B00)
#define CAMPAIGNHEALNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F19B70)
#define CAMPAIGNHEALNETWORKTASK_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1F19B80)
#define CAMPAIGNHEALNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F19B90)

	inline static constexpr unsigned int CampaignHealNetworkTask_TypeDefinitionIndex = 2086;

	class CampaignHealNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StageId_k__BackingField; // 0x40
		::System::Int64 _EchelonIndex_k__BackingField; // 0x48
		::System::Int64 _CharacterServerId_k__BackingField; // 0x50

		::System::Void set_EchelonIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK_SET_ECHELONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterServerId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK_GET_CHARACTERSERVERID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void set_CharacterServerId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK_SET_CHARACTERSERVERID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK_GET_ECHELONINDEX_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNHEALNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

