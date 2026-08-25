#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define TIMEATTACKDUNGEONSWEEPNETWORKTASK_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1FAD020)
#define TIMEATTACKDUNGEONSWEEPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FAD030)
#define TIMEATTACKDUNGEONSWEEPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FAD040)
#define TIMEATTACKDUNGEONSWEEPNETWORKTASK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1FAD0D0)
#define TIMEATTACKDUNGEONSWEEPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FAD0E0)
#define TIMEATTACKDUNGEONSWEEPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD420)
#define TIMEATTACKDUNGEONSWEEPNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FAD430)

	inline static constexpr unsigned int TimeAttackDungeonSweepNetworkTask_TypeDefinitionIndex = 2872;

	class TimeAttackDungeonSweepNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _Count_k__BackingField; // 0x40

		::System::Void set_Count(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONSWEEPNETWORKTASK_SET_COUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONSWEEPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONSWEEPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_Count()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONSWEEPNETWORKTASK_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONSWEEPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONSWEEPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMEATTACKDUNGEONSWEEPNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

