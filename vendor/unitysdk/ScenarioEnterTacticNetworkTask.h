#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define SCENARIOENTERTACTICNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F97B50)
#define SCENARIOENTERTACTICNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F97CD0)
#define SCENARIOENTERTACTICNETWORKTASK_GET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0x1F97CE0)
#define SCENARIOENTERTACTICNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F97CF0)
#define SCENARIOENTERTACTICNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F97D00)
#define SCENARIOENTERTACTICNETWORKTASK_GET_STAGETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F97D90)
#define SCENARIOENTERTACTICNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F97DA0)
#define SCENARIOENTERTACTICNETWORKTASK_SET_ENEMYINDEX_OFFSET UNITYSDK_OFFSET(0x1F97DB0)
#define SCENARIOENTERTACTICNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F97DC0)
#define SCENARIOENTERTACTICNETWORKTASK_SET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1F97F10)
#define SCENARIOENTERTACTICNETWORKTASK_SET_STAGETUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F97F20)
#define SCENARIOENTERTACTICNETWORKTASK_GET_ECHELONINDEX_OFFSET UNITYSDK_OFFSET(0x1F97F30)

	inline static constexpr unsigned int ScenarioEnterTacticNetworkTask_TypeDefinitionIndex = 2760;

	class ScenarioEnterTacticNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _StagetUniqueId_k__BackingField; // 0x40
		::System::Int64 _EchelonIndex_k__BackingField; // 0x48
		::System::Int64 _EnemyIndex_k__BackingField; // 0x50

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Int64 get_EnemyIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK_GET_ENEMYINDEX_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_StagetUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK_GET_STAGETUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_EnemyIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK_SET_ENEMYINDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_EchelonIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK_SET_ECHELONINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void set_StagetUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK_SET_STAGETUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EchelonIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOENTERTACTICNETWORKTASK_GET_ECHELONINDEX_OFFSET))(nullptr);
		}

	};

