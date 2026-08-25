#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define FRIENDGETIDCARDNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F79940)
#define FRIENDGETIDCARDNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F79BA0)
#define FRIENDGETIDCARDNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F79BB0)
#define FRIENDGETIDCARDNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F79BC0)
#define FRIENDGETIDCARDNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F79C50)

	inline static constexpr unsigned int FriendGetIdCardNetworkTask_TypeDefinitionIndex = 2566;

	class FriendGetIdCardNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETIDCARDNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETIDCARDNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETIDCARDNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETIDCARDNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FRIENDGETIDCARDNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

