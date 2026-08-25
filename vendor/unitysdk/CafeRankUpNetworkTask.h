#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAFERANKUPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F11B00)
#define CAFERANKUPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F11B10)
#define CAFERANKUPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F11BA0)
#define CAFERANKUPNETWORKTASK_SET_CONSUMEDB_OFFSET UNITYSDK_OFFSET(0x1F11F50)
#define CAFERANKUPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F11F60)
#define CAFERANKUPNETWORKTASK_GET_CONSUMEDB_OFFSET UNITYSDK_OFFSET(0x1F11FF0)
#define CAFERANKUPNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F12000)

	inline static constexpr unsigned int CafeRankUpNetworkTask_TypeDefinitionIndex = 2036;

	class CafeRankUpNetworkTask : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConsumeRequestDB* _ConsumeDB_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERANKUPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERANKUPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFERANKUPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_ConsumeDB(::MX::GameLogic::DBModel::ConsumeRequestDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFERANKUPNETWORKTASK_SET_CONSUMEDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERANKUPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* get_ConsumeDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERANKUPNETWORKTASK_GET_CONSUMEDB_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFERANKUPNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

