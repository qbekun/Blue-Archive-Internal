#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define BILLINGPURCHASELISTBYNEXONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0xC48340)
#define BILLINGPURCHASELISTBYNEXONNETWORKTASK_SET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xC48350)
#define BILLINGPURCHASELISTBYNEXONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xC48360)
#define BILLINGPURCHASELISTBYNEXONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0xC48370)
#define BILLINGPURCHASELISTBYNEXONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0xC48400)
#define BILLINGPURCHASELISTBYNEXONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0xC48430)
#define BILLINGPURCHASELISTBYNEXONNETWORKTASK_GET_ISTEENAGE_OFFSET UNITYSDK_OFFSET(0xC489C0)

	inline static constexpr unsigned int BillingPurchaseListByNexonNetworkTask_TypeDefinitionIndex = 8923;

	class BillingPurchaseListByNexonNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _IsTeenage_k__BackingField; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_IsTeenage(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONNETWORKTASK_SET_ISTEENAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean get_IsTeenage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BILLINGPURCHASELISTBYNEXONNETWORKTASK_GET_ISTEENAGE_OFFSET))(nullptr);
		}

	};

