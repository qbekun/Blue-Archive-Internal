#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class EchelonSaveRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define ECHELONSAVENETWORKTASK_SET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F59F50)
#define ECHELONSAVENETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F59F60)
#define ECHELONSAVENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F59F70)
#define ECHELONSAVENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F5A000)
#define ECHELONSAVENETWORKTASK_GET_SUCCESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x1F5A2C0)
#define ECHELONSAVENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F5A2D0)
#define ECHELONSAVENETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F5A2E0)
#define ECHELONSAVENETWORKTASK_GET_ISPRACTICE_OFFSET UNITYSDK_OFFSET(0x1F5A2F0)
#define ECHELONSAVENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A300)
#define ECHELONSAVENETWORKTASK__PROCESSSESSION_B__11_0_OFFSET UNITYSDK_OFFSET(0x1F5A310)

	inline static constexpr unsigned int EchelonSaveNetworkTask_TypeDefinitionIndex = 2352;

	class EchelonSaveNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::EchelonSaveRequest* request; // 0x40
		::System::Action* successCallback; // 0x48
		::System::Boolean _IsPractice_k__BackingField; // 0x50

		::System::Void set_IsPractice(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVENETWORKTASK_SET_ISPRACTICE_OFFSET))(arg, nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::EchelonSaveRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::EchelonSaveRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVENETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Action* get_SuccessCallback()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVENETWORKTASK_GET_SUCCESSCALLBACK_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::MX::NetworkProtocol::EchelonSaveRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::EchelonSaveRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVENETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPractice()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVENETWORKTASK_GET_ISPRACTICE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__11_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECHELONSAVENETWORKTASK__PROCESSSESSION_B__11_0_OFFSET))(nullptr);
		}

	};

