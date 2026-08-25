#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }

#define ARENASYNCECHELONSETTINGTIMENETWORKTASK_HANDLECUSTOMERROR_OFFSET UNITYSDK_OFFSET(0x1F0D720)
#define ARENASYNCECHELONSETTINGTIMENETWORKTASK__PROCESSSESSION_B__0_0_OFFSET UNITYSDK_OFFSET(0x1F0D800)
#define ARENASYNCECHELONSETTINGTIMENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F0D810)
#define ARENASYNCECHELONSETTINGTIMENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F0D820)
#define ARENASYNCECHELONSETTINGTIMENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D8B0)
#define ARENASYNCECHELONSETTINGTIMENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F0D8C0)

	inline static constexpr unsigned int ArenaSyncEchelonSettingTimeNetworkTask_TypeDefinitionIndex = 2014;

	class ArenaSyncEchelonSettingTimeNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean HandleCustomError(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + ARENASYNCECHELONSETTINGTIMENETWORKTASK_HANDLECUSTOMERROR_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__0_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENASYNCECHELONSETTINGTIMENETWORKTASK__PROCESSSESSION_B__0_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENASYNCECHELONSETTINGTIMENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENASYNCECHELONSETTINGTIMENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARENASYNCECHELONSETTINGTIMENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ARENASYNCECHELONSETTINGTIMENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

