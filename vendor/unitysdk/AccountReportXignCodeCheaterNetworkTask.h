#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F074E0)
#define ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_GET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1F07670)
#define ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F07680)
#define ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F07690)
#define ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F076A0)
#define ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F076B0)
#define ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_SET_ERRORCODE_OFFSET UNITYSDK_OFFSET(0x1F07740)

	inline static constexpr unsigned int AccountReportXignCodeCheaterNetworkTask_TypeDefinitionIndex = 1979;

	class AccountReportXignCodeCheaterNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _ErrorCode_k__BackingField; // 0x40

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::String* get_ErrorCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_GET_ERRORCODE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_ErrorCode(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ACCOUNTREPORTXIGNCODECHEATERNETWORKTASK_SET_ERRORCODE_OFFSET))(str, nullptr);
		}

	};

