#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class AccountSetRepresentCharacterAndCommentRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET UNITYSDK_OFFSET(0x1F07E10)
#define ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F07E20)
#define ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F07E30)
#define ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F07E40)
#define ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F07ED0)

	inline static constexpr unsigned int AccountSetRepresentCharacterIdAndCommentNetworkTask_TypeDefinitionIndex = 1984;

	class AccountSetRepresentCharacterIdAndCommentNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::AccountSetRepresentCharacterAndCommentRequest* Req; // 0x40

		::System::Boolean _ProcessSession_b__1_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTSETREPRESENTCHARACTERIDANDCOMMENTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

