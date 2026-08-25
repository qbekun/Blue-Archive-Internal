#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define CAMPAIGNENTERTACTICNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F18CF0)
#define CAMPAIGNENTERTACTICNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F18D00)
#define CAMPAIGNENTERTACTICNETWORKTASK_GET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0x1F18D10)
#define CAMPAIGNENTERTACTICNETWORKTASK_SET_STAGETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F18D20)
#define CAMPAIGNENTERTACTICNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F18D30)
#define CAMPAIGNENTERTACTICNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F18D40)
#define CAMPAIGNENTERTACTICNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F18EC0)
#define CAMPAIGNENTERTACTICNETWORKTASK_SET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1F18F50)
#define CAMPAIGNENTERTACTICNETWORKTASK_GET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1F18F60)
#define CAMPAIGNENTERTACTICNETWORKTASK_GET_STAGETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F18F70)
#define CAMPAIGNENTERTACTICNETWORKTASK_SET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0x1F18F80)
#define CAMPAIGNENTERTACTICNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F18F90)

	inline static constexpr unsigned int CampaignEnterTacticNetworkTask_TypeDefinitionIndex = 2081;

	class CampaignEnterTacticNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StagetUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonIndex_k__BackingField; // 0x48
		::System::Int64 _EnemyIndex_k__BackingField; // 0x50

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemyIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK_GET_ENEMYINDEX_OFFSET))(nullptr);
		}

		::System::Void set_StagetUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK_SET_STAGETUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_EchelonIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK_SET_ECHELONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK_GET_ECHELONINDEX_OFFSET))(nullptr);
		}

		::System::Int64 get_StagetUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK_GET_STAGETUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_EnemyIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK_SET_ENEMYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + CAMPAIGNENTERTACTICNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

	};

