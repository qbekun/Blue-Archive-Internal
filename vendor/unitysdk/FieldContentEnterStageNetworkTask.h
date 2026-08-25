#pragma once
#include "unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }

#define FIELDCONTENTENTERSTAGENETWORKTASK_GET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1D1C960)
#define FIELDCONTENTENTERSTAGENETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1D1C970)
#define FIELDCONTENTENTERSTAGENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1D1CA10)
#define FIELDCONTENTENTERSTAGENETWORKTASK_GET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1D1CAA0)
#define FIELDCONTENTENTERSTAGENETWORKTASK_SET_ECHELONNUMBER_OFFSET UNITYSDK_OFFSET(0x1D1CAB0)
#define FIELDCONTENTENTERSTAGENETWORKTASK_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1D1CAC0)
#define FIELDCONTENTENTERSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1D1CAD0)
#define FIELDCONTENTENTERSTAGENETWORKTASK_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1D1CD00)
#define FIELDCONTENTENTERSTAGENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D1CD10)
#define FIELDCONTENTENTERSTAGENETWORKTASK_SET_STAGEINFO_OFFSET UNITYSDK_OFFSET(0x1D1CD20)
#define FIELDCONTENTENTERSTAGENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1D1CD30)
#define FIELDCONTENTENTERSTAGENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1D1CD40)

	inline static constexpr unsigned int FieldContentEnterStageNetworkTask_TypeDefinitionIndex = 1657;

	class FieldContentEnterStageNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _SeasonId_k__BackingField; // 0x40
		::MX::Data::CampaignStageInfo* _StageInfo_k__BackingField; // 0x48
		::System::Int64 _EchelonNumber_k__BackingField; // 0x50

		::MX::Data::CampaignStageInfo* get_StageInfo()
		{
			return ((::MX::Data::CampaignStageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK_GET_STAGEINFO_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_EchelonNumber()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK_GET_ECHELONNUMBER_OFFSET))(nullptr);
		}

		::System::Void set_EchelonNumber(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK_SET_ECHELONNUMBER_OFFSET))(arg, nullptr);
		}

		::System::Void set_SeasonId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK_SET_SEASONID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_SeasonId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK_GET_SEASONID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_StageInfo(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK_SET_STAGEINFO_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FIELDCONTENTENTERSTAGENETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

	};

