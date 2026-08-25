#pragma once
#include "unitysdk.h"

class HexaUnitVisual;
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define CAMPAIGNWITHDRAWECHELONNETWORKTASK_SET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F1DFC0)
#define CAMPAIGNWITHDRAWECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F1DFD0)
#define CAMPAIGNWITHDRAWECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F1DFE0)
#define CAMPAIGNWITHDRAWECHELONNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F1E420)
#define CAMPAIGNWITHDRAWECHELONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E430)
#define CAMPAIGNWITHDRAWECHELONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F1E440)
#define CAMPAIGNWITHDRAWECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F1E450)
#define CAMPAIGNWITHDRAWECHELONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F1E4C0)
#define CAMPAIGNWITHDRAWECHELONNETWORKTASK_SET_WITHDRAWECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F1E550)
#define CAMPAIGNWITHDRAWECHELONNETWORKTASK_GET_WITHDRAWECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F1E560)
#define CAMPAIGNWITHDRAWECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F1E570)
#define CAMPAIGNWITHDRAWECHELONNETWORKTASK_GET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F1E580)

	inline static constexpr unsigned int CampaignWithdrawEchelonNetworkTask_TypeDefinitionIndex = 2117;

	class CampaignWithdrawEchelonNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		Il2CppObject* _WithdrawEchelonEntityId_k__BackingField; // 0x48
		HexaUnitVisual* _UnitVisual_k__BackingField; // 0x50

		::System::Void set_UnitVisual(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK_SET_UNITVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_WithdrawEchelonEntityId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK_SET_WITHDRAWECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WithdrawEchelonEntityId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK_GET_WITHDRAWECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		HexaUnitVisual* get_UnitVisual()
		{
			return ((HexaUnitVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNWITHDRAWECHELONNETWORKTASK_GET_UNITVISUAL_OFFSET))(nullptr);
		}

	};

