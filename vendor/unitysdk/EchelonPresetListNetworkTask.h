#pragma once
#include "unitysdk.h"

namespace FlatData { class EchelonExtensionType; }
namespace MX::NetworkProtocol { class Protocol; }

#define ECHELONPRESETLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F59AA0)
#define ECHELONPRESETLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F59AB0)
#define ECHELONPRESETLISTNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET UNITYSDK_OFFSET(0x1F59B40)
#define ECHELONPRESETLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F59B50)
#define ECHELONPRESETLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F59B60)

	inline static constexpr unsigned int EchelonPresetListNetworkTask_TypeDefinitionIndex = 2350;

	class EchelonPresetListNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::EchelonExtensionType* ExtensionType; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__1_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETLISTNETWORKTASK__PROCESSSESSION_B__1_0_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONPRESETLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

