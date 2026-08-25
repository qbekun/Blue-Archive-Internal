#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class FriendIdCardDB; }
namespace MX::NetworkProtocol { class Protocol; }

#define FRIENDSETIDCARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7B4F0)
#define FRIENDSETIDCARDNETWORKTASK_GET_CARDDB_OFFSET UNITYSDK_OFFSET(0x1F7B780)
#define FRIENDSETIDCARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B790)
#define FRIENDSETIDCARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7B7A0)
#define FRIENDSETIDCARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F7B830)
#define FRIENDSETIDCARDNETWORKTASK_SET_CARDDB_OFFSET UNITYSDK_OFFSET(0x1F7B840)
#define FRIENDSETIDCARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F7B850)

	inline static constexpr unsigned int FriendSetIdCardNetworkTask_TypeDefinitionIndex = 2579;

	class FriendSetIdCardNetworkTask : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::FriendIdCardDB* _CardDB_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDSETIDCARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::MX::GameLogic::DBModel::FriendIdCardDB* get_CardDB()
		{
			return ((::MX::GameLogic::DBModel::FriendIdCardDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSETIDCARDNETWORKTASK_GET_CARDDB_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSETIDCARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSETIDCARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSETIDCARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_CardDB(::MX::GameLogic::DBModel::FriendIdCardDB* arg)
		{
			((::System::Void(*)(::MX::GameLogic::DBModel::FriendIdCardDB*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDSETIDCARDNETWORKTASK_SET_CARDDB_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDSETIDCARDNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

	};

