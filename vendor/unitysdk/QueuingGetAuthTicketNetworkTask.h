#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define QUEUINGGETAUTHTICKETNETWORKTASK_GET_YOSTARUID_OFFSET UNITYSDK_OFFSET(0x1F89D00)
#define QUEUINGGETAUTHTICKETNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F89D10)
#define QUEUINGGETAUTHTICKETNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F89D20)
#define QUEUINGGETAUTHTICKETNETWORKTASK_GET_YOSTARTOKEN_OFFSET UNITYSDK_OFFSET(0x1F89D30)
#define QUEUINGGETAUTHTICKETNETWORKTASK_SET_YOSTARTOKEN_OFFSET UNITYSDK_OFFSET(0x1F89D40)
#define QUEUINGGETAUTHTICKETNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F89D50)
#define QUEUINGGETAUTHTICKETNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F89DE0)
#define QUEUINGGETAUTHTICKETNETWORKTASK_SET_YOSTARUID_OFFSET UNITYSDK_OFFSET(0x1F8A100)
#define QUEUINGGETAUTHTICKETNETWORKTASK_HANDLEWEBAPIERROR_OFFSET UNITYSDK_OFFSET(0x1F8A110)
#define QUEUINGGETAUTHTICKETNETWORKTASK__PROCESSSESSION_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F8A7B0)

	inline static constexpr unsigned int QueuingGetAuthTicketNetworkTask_TypeDefinitionIndex = 2674;

	class QueuingGetAuthTicketNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _YostarUid_k__BackingField; // 0x40
		::System::String* _YostarToken_k__BackingField; // 0x48
		::Il2CppArray<::System::Object*>* key; // 0x50
		::Il2CppArray<::System::Object*>* iv; // 0x58

		::System::Int64 get_YostarUid()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETNETWORKTASK_GET_YOSTARUID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_YostarToken()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETNETWORKTASK_GET_YOSTARTOKEN_OFFSET))(nullptr);
		}

		::System::Void set_YostarToken(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETNETWORKTASK_SET_YOSTARTOKEN_OFFSET))(str, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_YostarUid(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETNETWORKTASK_SET_YOSTARUID_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::WebAPIErrorCode* HandleWebAPIError(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::System::Boolean arg2)
		{
			return ((::MX::NetworkProtocol::WebAPIErrorCode*(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETNETWORKTASK_HANDLEWEBAPIERROR_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _ProcessSession_b__10_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + QUEUINGGETAUTHTICKETNETWORKTASK__PROCESSSESSION_B__10_0_OFFSET))(nullptr);
		}

	};

