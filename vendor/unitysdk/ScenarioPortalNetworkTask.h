#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define SCENARIOPORTALNETWORKTASK_GET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F99460)
#define SCENARIOPORTALNETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F99470)
#define SCENARIOPORTALNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F99480)
#define SCENARIOPORTALNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F99490)
#define SCENARIOPORTALNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F996E0)
#define SCENARIOPORTALNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F996F0)
#define SCENARIOPORTALNETWORKTASK_SET_ECHELONENTITYID_OFFSET UNITYSDK_OFFSET(0x1F99700)
#define SCENARIOPORTALNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F99710)
#define SCENARIOPORTALNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F99780)
#define SCENARIOPORTALNETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F99810)

	inline static constexpr unsigned int ScenarioPortalNetworkTask_TypeDefinitionIndex = 2770;

	class ScenarioPortalNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StageUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonEntityId_k__BackingField; // 0x48

		::System::Int64 get_EchelonEntityId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPORTALNETWORKTASK_GET_ECHELONENTITYID_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPORTALNETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPORTALNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPORTALNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPORTALNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPORTALNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_EchelonEntityId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPORTALNETWORKTASK_SET_ECHELONENTITYID_OFFSET))(arg, nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPORTALNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPORTALNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOPORTALNETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

	};

