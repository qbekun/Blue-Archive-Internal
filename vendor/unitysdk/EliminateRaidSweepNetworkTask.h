#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ELIMINATERAIDSWEEPNETWORKTASK_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F5E860)
#define ELIMINATERAIDSWEEPNETWORKTASK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F5E870)
#define ELIMINATERAIDSWEEPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E880)
#define ELIMINATERAIDSWEEPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5E890)
#define ELIMINATERAIDSWEEPNETWORKTASK_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F5E8A0)
#define ELIMINATERAIDSWEEPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5E8B0)
#define ELIMINATERAIDSWEEPNETWORKTASK_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F5EBE0)
#define ELIMINATERAIDSWEEPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F5EBF0)
#define ELIMINATERAIDSWEEPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F5EC80)

	inline static constexpr unsigned int EliminateRaidSweepNetworkTask_TypeDefinitionIndex = 2382;

	class EliminateRaidSweepNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x40
		::System::Int64 _Count_k__BackingField; // 0x48

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPNETWORKTASK_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPNETWORKTASK_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPNETWORKTASK_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPNETWORKTASK_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDSWEEPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

	};

