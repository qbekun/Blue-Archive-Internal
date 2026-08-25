#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F68260)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F683E0)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_GET_POSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1F683F0)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_GET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0x1F68400)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_SET_DEPLOYEDECHELONS_OFFSET UNITYSDK_OFFSET(0x1F68410)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F68420)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F68430)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F686B0)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F686C0)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F68750)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F68760)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F68770)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F68780)
#define EVENTCONTENTDEPLOYECHELONNETWORKTASK_SET_POSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1F68790)

	inline static constexpr unsigned int EventContentDeployEchelonNetworkTask_TypeDefinitionIndex = 2455;

	class EventContentDeployEchelonNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _StageUniqueId_k__BackingField; // 0x48
		Il2CppObject* _DeployedEchelons_k__BackingField; // 0x50
		::System::Boolean _PositionChange_k__BackingField; // 0x58

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_StageUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_SET_STAGEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_PositionChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_GET_POSITIONCHANGE_OFFSET))(nullptr);
		}

		Il2CppObject* get_DeployedEchelons()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_GET_DEPLOYEDECHELONS_OFFSET))(nullptr);
		}

		::System::Void set_DeployedEchelons(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_SET_DEPLOYEDECHELONS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Int64 get_StageUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_GET_STAGEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_PositionChange(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTDEPLOYECHELONNETWORKTASK_SET_POSITIONCHANGE_OFFSET))(arg, nullptr);
		}

	};

