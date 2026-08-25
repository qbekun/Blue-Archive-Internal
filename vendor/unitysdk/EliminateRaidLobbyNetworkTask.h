#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }

#define ELIMINATERAIDLOBBYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F5CA00)
#define ELIMINATERAIDLOBBYNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5CA90)
#define ELIMINATERAIDLOBBYNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F5CAA0)
#define ELIMINATERAIDLOBBYNETWORKTASK_WEBAPIERRORACTION_OFFSET UNITYSDK_OFFSET(0x1F5CAB0)
#define ELIMINATERAIDLOBBYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5CB60)
#define ELIMINATERAIDLOBBYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5CF90)

	inline static constexpr unsigned int EliminateRaidLobbyNetworkTask_TypeDefinitionIndex = 2370;

	class EliminateRaidLobbyNetworkTask : public Il2CppObject
	{
	public:
		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDLOBBYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDLOBBYNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDLOBBYNETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean WebAPIErrorAction(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDLOBBYNETWORKTASK_WEBAPIERRORACTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDLOBBYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIMINATERAIDLOBBYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

	};

