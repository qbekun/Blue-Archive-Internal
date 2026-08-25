#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define RAIDSWEEPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F92850)
#define RAIDSWEEPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F92860)
#define RAIDSWEEPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F92B90)
#define RAIDSWEEPNETWORKTASK_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F92BA0)
#define RAIDSWEEPNETWORKTASK_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F92BB0)
#define RAIDSWEEPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F92BC0)
#define RAIDSWEEPNETWORKTASK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F92C50)
#define RAIDSWEEPNETWORKTASK_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1F92C60)
#define RAIDSWEEPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F92C70)

	inline static constexpr unsigned int RaidSweepNetworkTask_TypeDefinitionIndex = 2728;

	class RaidSweepNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _UniqueId_k__BackingField; // 0x40
		::System::Int64 _Count_k__BackingField; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_UniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPNETWORKTASK_SET_UNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_UniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPNETWORKTASK_GET_UNIQUEID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPNETWORKTASK_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPNETWORKTASK_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RAIDSWEEPNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

	};

