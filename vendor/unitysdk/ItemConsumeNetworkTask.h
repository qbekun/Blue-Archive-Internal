#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ItemConsumeRequest; }
namespace MX::NetworkProtocol { class Protocol; }
namespace MX::Data { class DuplicateBonusInfo; }

#define ITEMCONSUMENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7C8A0)
#define ITEMCONSUMENETWORKTASK__HANDLEMESSAGE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1F7CF30)
#define ITEMCONSUMENETWORKTASK_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F7CF50)
#define ITEMCONSUMENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CF60)
#define ITEMCONSUMENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F7CF70)
#define ITEMCONSUMENETWORKTASK__PROCESSSESSION_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F7CF80)
#define ITEMCONSUMENETWORKTASK_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F7CF90)
#define ITEMCONSUMENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7CFA0)

	inline static constexpr unsigned int ItemConsumeNetworkTask_TypeDefinitionIndex = 2587;

	class ItemConsumeNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 ConsumingItemId; // 0x40
		::MX::NetworkProtocol::ItemConsumeRequest* request; // 0x48

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMCONSUMENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean _HandleMessage_b__6_0(::MX::Data::DuplicateBonusInfo* arg)
		{
			return ((::System::Boolean(*)(::MX::Data::DuplicateBonusInfo*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMCONSUMENETWORKTASK__HANDLEMESSAGE_B__6_0_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::ItemConsumeRequest* get_Request()
		{
			return ((::MX::NetworkProtocol::ItemConsumeRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMCONSUMENETWORKTASK_GET_REQUEST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMCONSUMENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMCONSUMENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__5_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMCONSUMENETWORKTASK__PROCESSSESSION_B__5_0_OFFSET))(nullptr);
		}

		::System::Void set_Request(::MX::NetworkProtocol::ItemConsumeRequest* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ItemConsumeRequest*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMCONSUMENETWORKTASK_SET_REQUEST_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMCONSUMENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

