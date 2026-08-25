#pragma once
#include "unitysdk.h"

class HexaUnitVisual;
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }

#define SCENARIOWITHDRAWECHELONNETWORKTASK_GET_WITHDRAWECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F9BE60)
#define SCENARIOWITHDRAWECHELONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9BE70)
#define SCENARIOWITHDRAWECHELONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F9BE80)
#define SCENARIOWITHDRAWECHELONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F9BF10)
#define SCENARIOWITHDRAWECHELONNETWORKTASK_SET_WITHDRAWECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F9BF20)
#define SCENARIOWITHDRAWECHELONNETWORKTASK_SET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F9BF30)
#define SCENARIOWITHDRAWECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F9BF40)
#define SCENARIOWITHDRAWECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F9BF50)
#define SCENARIOWITHDRAWECHELONNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F9BFC0)
#define SCENARIOWITHDRAWECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F9BFD0)
#define SCENARIOWITHDRAWECHELONNETWORKTASK_GET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F9BFE0)
#define SCENARIOWITHDRAWECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F9BFF0)

	inline static constexpr unsigned int ScenarioWithdrawEchelonNetworkTask_TypeDefinitionIndex = 2789;

	class ScenarioWithdrawEchelonNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		Il2CppObject* _WithdrawEchelonEntityId_k__BackingField; // 0x48
		HexaUnitVisual* _UnitVisual_k__BackingField; // 0x50

		Il2CppObject* get_WithdrawEchelonEntityId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK_GET_WITHDRAWECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_WithdrawEchelonEntityId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK_SET_WITHDRAWECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Void set_UnitVisual(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK_SET_UNITVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		HexaUnitVisual* get_UnitVisual()
		{
			return ((HexaUnitVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK_GET_UNITVISUAL_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWITHDRAWECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

