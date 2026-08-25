#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ConsumeRequestDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define CAFEGIVEGIFTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0FD60)
#define CAFEGIVEGIFTNETWORKTASK_GET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F0FDF0)
#define CAFEGIVEGIFTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0FE00)
#define CAFEGIVEGIFTNETWORKTASK_SET_CONSUMEDB_OFFSET UNITYSDK_OFFSET(0x1F105D0)
#define CAFEGIVEGIFTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F105E0)
#define CAFEGIVEGIFTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F105F0)
#define CAFEGIVEGIFTNETWORKTASK_SET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F10600)
#define CAFEGIVEGIFTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F10610)
#define CAFEGIVEGIFTNETWORKTASK_GET_CONSUMEDB_OFFSET UNITYSDK_OFFSET(0x1F106A0)

	inline static constexpr unsigned int CafeGiveGiftNetworkTask_TypeDefinitionIndex = 2029;

	class CafeGiveGiftNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _CharacterUniqueId_k__BackingField; // 0x40
		::MX::GameLogic::DBModel::ConsumeRequestDB* _ConsumeDB_k__BackingField; // 0x48

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_CharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTNETWORKTASK_GET_CHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_ConsumeDB(::MX::GameLogic::DBModel::ConsumeRequestDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::ConsumeRequestDB*, ::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTNETWORKTASK_SET_CONSUMEDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_CharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTNETWORKTASK_SET_CHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::GameLogic::DBModel::ConsumeRequestDB* get_ConsumeDB()
		{
			return ((::MX::GameLogic::DBModel::ConsumeRequestDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFEGIVEGIFTNETWORKTASK_GET_CONSUMEDB_OFFSET))(nullptr);
		}

	};

