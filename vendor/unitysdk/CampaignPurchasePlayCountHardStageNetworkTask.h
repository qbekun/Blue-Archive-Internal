#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1B500)
#define CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1F1B510)
#define CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1B520)
#define CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1F1B530)
#define CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F1B540)
#define CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F1B7F0)
#define CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F1B800)

	inline static constexpr unsigned int CampaignPurchasePlayCountHardStageNetworkTask_TypeDefinitionIndex = 2097;

	class CampaignPurchasePlayCountHardStageNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StageId_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_SET_STAGEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_StageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_GET_STAGEID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNPURCHASEPLAYCOUNTHARDSTAGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

