#pragma once
#include "unitysdk.h"

namespace FlatData { class StageDifficulty; }
namespace MX::NetworkProtocol { class Protocol; }

#define CONQUESTRECEIVEREWARDSNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F2F9B0)
#define CONQUESTRECEIVEREWARDSNETWORKTASK_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F2F9C0)
#define CONQUESTRECEIVEREWARDSNETWORKTASK_SET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1F2F9D0)
#define CONQUESTRECEIVEREWARDSNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2F9E0)
#define CONQUESTRECEIVEREWARDSNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F2F9F0)
#define CONQUESTRECEIVEREWARDSNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F2FA80)
#define CONQUESTRECEIVEREWARDSNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F2FA90)
#define CONQUESTRECEIVEREWARDSNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F2FF60)
#define CONQUESTRECEIVEREWARDSNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F2FF70)

	inline static constexpr unsigned int ConquestReceiveRewardsNetworkTask_TypeDefinitionIndex = 2234;

	class ConquestReceiveRewardsNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::StageDifficulty* _Difficulty_k__BackingField; // 0x48

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRECEIVEREWARDSNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::FlatData::StageDifficulty* get_Difficulty()
		{
			return ((::FlatData::StageDifficulty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRECEIVEREWARDSNETWORKTASK_GET_DIFFICULTY_OFFSET))(nullptr);
		}

		::System::Void set_Difficulty(::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRECEIVEREWARDSNETWORKTASK_SET_DIFFICULTY_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRECEIVEREWARDSNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRECEIVEREWARDSNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRECEIVEREWARDSNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRECEIVEREWARDSNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRECEIVEREWARDSNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTRECEIVEREWARDSNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

	};

