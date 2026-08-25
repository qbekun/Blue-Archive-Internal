#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ItemBulkConsumeRequest; }
namespace MX::NetworkProtocol { class Protocol; }

#define ITEMBULKCONSUMENETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F7C1C0)
#define ITEMBULKCONSUMENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7C1D0)
#define ITEMBULKCONSUMENETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F7C260)
#define ITEMBULKCONSUMENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F7C270)
#define ITEMBULKCONSUMENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7C280)
#define ITEMBULKCONSUMENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C5F0)
#define ITEMBULKCONSUMENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F7C600)

	inline static constexpr unsigned int ItemBulkConsumeNetworkTask_TypeDefinitionIndex = 2584;

	class ItemBulkConsumeNetworkTask : public Il2CppObject
	{
	public:
		::MX::NetworkProtocol::ItemBulkConsumeRequest* request; // 0x40

		::MX::NetworkProtocol::ItemBulkConsumeRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::ItemBulkConsumeRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMBULKCONSUMENETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMBULKCONSUMENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::ItemBulkConsumeRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ItemBulkConsumeRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMBULKCONSUMENETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMBULKCONSUMENETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMBULKCONSUMENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMBULKCONSUMENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMBULKCONSUMENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

