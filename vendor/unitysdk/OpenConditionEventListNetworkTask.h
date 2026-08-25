#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define OPENCONDITIONEVENTLISTNETWORKTASK_GET_CONQUESTEVENTIDS_OFFSET UNITYSDK_OFFSET(0x1F888D0)
#define OPENCONDITIONEVENTLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F888E0)
#define OPENCONDITIONEVENTLISTNETWORKTASK_SET_WORLDRAIDLOCALBOSSSEASONANDGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1F888F0)
#define OPENCONDITIONEVENTLISTNETWORKTASK_GET_WORLDRAIDLOCALBOSSSEASONANDGROUPIDS_OFFSET UNITYSDK_OFFSET(0x1F88900)
#define OPENCONDITIONEVENTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F88910)
#define OPENCONDITIONEVENTLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F88AA0)
#define OPENCONDITIONEVENTLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F88B30)
#define OPENCONDITIONEVENTLISTNETWORKTASK_SET_CONQUESTEVENTIDS_OFFSET UNITYSDK_OFFSET(0x1F88B40)
#define OPENCONDITIONEVENTLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F88B50)

	inline static constexpr unsigned int OpenConditionEventListNetworkTask_TypeDefinitionIndex = 2661;

	class OpenConditionEventListNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* _ConquestEventIds_k__BackingField; // 0x40
		Il2CppObject* _WorldRaidLocalBossSeasonAndGroupIds_k__BackingField; // 0x48

		Il2CppObject* get_ConquestEventIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONEVENTLISTNETWORKTASK_GET_CONQUESTEVENTIDS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONEVENTLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_WorldRaidLocalBossSeasonAndGroupIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONEVENTLISTNETWORKTASK_SET_WORLDRAIDLOCALBOSSSEASONANDGROUPIDS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_WorldRaidLocalBossSeasonAndGroupIds()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONEVENTLISTNETWORKTASK_GET_WORLDRAIDLOCALBOSSSEASONANDGROUPIDS_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONEVENTLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONEVENTLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONEVENTLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_ConquestEventIds(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONEVENTLISTNETWORKTASK_SET_CONQUESTEVENTIDS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPENCONDITIONEVENTLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

