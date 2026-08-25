#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define EVENTCONTENTENTERTACTICNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F6AE10)
#define EVENTCONTENTENTERTACTICNETWORKTASK_GET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0x1F6AE20)
#define EVENTCONTENTENTERTACTICNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F6AE30)
#define EVENTCONTENTENTERTACTICNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6AEC0)
#define EVENTCONTENTENTERTACTICNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F6AED0)
#define EVENTCONTENTENTERTACTICNETWORKTASK_GET_STAGETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F6AEE0)
#define EVENTCONTENTENTERTACTICNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F6AEF0)
#define EVENTCONTENTENTERTACTICNETWORKTASK_SET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0x1F6AF00)
#define EVENTCONTENTENTERTACTICNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F6AF10)
#define EVENTCONTENTENTERTACTICNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F6B090)
#define EVENTCONTENTENTERTACTICNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F6B1E0)
#define EVENTCONTENTENTERTACTICNETWORKTASK_SET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1F6B1F0)
#define EVENTCONTENTENTERTACTICNETWORKTASK_SET_STAGETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F6B200)
#define EVENTCONTENTENTERTACTICNETWORKTASK_GET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1F6B210)

	inline static constexpr unsigned int EventContentEnterTacticNetworkTask_TypeDefinitionIndex = 2473;

	class EventContentEnterTacticNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _StagetUniqueId_k__BackingField; // 0x48
		::System::Int64 _EchelonIndex_k__BackingField; // 0x50
		::System::Int64 _EnemyIndex_k__BackingField; // 0x58

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemyIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_GET_ENEMYINDEX_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_StagetUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_GET_STAGETUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Void set_EnemyIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_SET_ENEMYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_SET_ECHELONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_StagetUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_SET_STAGETUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTENTERTACTICNETWORKTASK_GET_ECHELONINDEX_OFFSET))(nullptr);
		}

	};

