#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EchelonSaveResponse; }
namespace MX::NetworkProtocol { class WebAPIErrorCode; }

#define ECHELONSAVERESPONSEMESSAGE_SET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5A5C0)
#define ECHELONSAVERESPONSEMESSAGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A270)
#define ECHELONSAVERESPONSEMESSAGE_GET_SUCCESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F5A5D0)
#define ECHELONSAVERESPONSEMESSAGE_SET_SUCCESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F5A5E0)
#define ECHELONSAVERESPONSEMESSAGE_GET_RESPONSE_OFFSET UNITYSDK_OFFSET(0x1F5A5F0)

	inline static constexpr unsigned int EchelonSaveResponseMessage_TypeDefinitionIndex = 2353;

	class EchelonSaveResponseMessage : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EchelonSaveResponse* _Response_k__BackingField; // 0x20
		::System::Action* _SuccessCallback_k__BackingField; // 0x28

		::System::Void set_Response(::MX::NetworkProtocol::EchelonSaveResponse* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EchelonSaveResponse*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVERESPONSEMESSAGE_SET_RESPONSE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::MX::NetworkProtocol::WebAPIErrorCode* arg, ::MX::NetworkProtocol::EchelonSaveResponse* arg2, ::System::Action* arg3)
		{
			((::System::Void(*)(::MX::NetworkProtocol::WebAPIErrorCode*, ::MX::NetworkProtocol::EchelonSaveResponse*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVERESPONSEMESSAGE_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Action* get_SuccessCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVERESPONSEMESSAGE_GET_SUCCESSCALLBACK_OFFSET))(nullptr);
		}

		::System::Void set_SuccessCallback(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVERESPONSEMESSAGE_SET_SUCCESSCALLBACK_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::EchelonSaveResponse* get_Response()
		{
			return ((::MX::NetworkProtocol::EchelonSaveResponse*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVERESPONSEMESSAGE_GET_RESPONSE_OFFSET))(nullptr);
		}

	};

