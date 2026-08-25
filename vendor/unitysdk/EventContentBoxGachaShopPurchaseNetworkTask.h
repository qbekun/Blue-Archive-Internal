#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ErrorPacket; }

#define EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F635A0)
#define EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F635B0)
#define EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F63640)
#define EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F63650)
#define EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F63660)
#define EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1F63670)
#define EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F63680)
#define EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1F63690)
#define EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F636A0)
#define EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_HANDLECUSTOMERROR_OFFSET UNITYSDK_OFFSET(0x1F63A70)

	inline static constexpr unsigned int EventContentBoxGachaShopPurchaseNetworkTask_TypeDefinitionIndex = 2419;

	class EventContentBoxGachaShopPurchaseNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::System::Int64 _PurchaseCount_k__BackingField; // 0x48

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean HandleCustomError(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTBOXGACHASHOPPURCHASENETWORKTASK_HANDLECUSTOMERROR_OFFSET))(arg, nullptr);
		}

	};

