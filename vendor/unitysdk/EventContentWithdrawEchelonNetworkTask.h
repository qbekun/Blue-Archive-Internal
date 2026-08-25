#pragma once
#include "unitysdk.h"

class HexaUnitVisual;
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F77990)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_SET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F779A0)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F779B0)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F779C0)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F77A30)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F77A40)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F77A50)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F77A60)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_GET_WITHDRAWECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F77A70)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_SET_WITHDRAWECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F77A80)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_GET_UNITVISUAL_OFFSET UNITYSDK_OFFSET(0x1F77A90)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F77AA0)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F77B30)
#define EVENTCONTENTWITHDRAWECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F77F90)

	inline static constexpr unsigned int EventContentWithdrawEchelonNetworkTask_TypeDefinitionIndex = 2554;

	class EventContentWithdrawEchelonNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _StageUniqueId_k__BackingField; // 0x48
		Il2CppObject* _WithdrawEchelonEntityId_k__BackingField; // 0x50
		HexaUnitVisual* _UnitVisual_k__BackingField; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_UnitVisual(HexaUnitVisual* arg)
		{
			((::System::Void(*)(HexaUnitVisual*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_SET_UNITVISUAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		Il2CppObject* get_WithdrawEchelonEntityId()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_GET_WITHDRAWECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Void set_WithdrawEchelonEntityId(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_SET_WITHDRAWECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		HexaUnitVisual* get_UnitVisual()
		{
			return ((HexaUnitVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_GET_UNITVISUAL_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTWITHDRAWECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};

