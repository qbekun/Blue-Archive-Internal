#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SHOPBUYAPNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA0FD0)
#define SHOPBUYAPNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA13E0)
#define SHOPBUYAPNETWORKTASK_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1FA13F0)
#define SHOPBUYAPNETWORKTASK_SET_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x1FA1400)
#define SHOPBUYAPNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FA1410)
#define SHOPBUYAPNETWORKTASK_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1FA1420)
#define SHOPBUYAPNETWORKTASK_GET_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x1FA1430)
#define SHOPBUYAPNETWORKTASK_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA1440)
#define SHOPBUYAPNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1FA1450)
#define SHOPBUYAPNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA1460)
#define SHOPBUYAPNETWORKTASK_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA14F0)

	inline static constexpr unsigned int ShopBuyAPNetworkTask_TypeDefinitionIndex = 2815;

	class ShopBuyAPNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x40
		::System::Int64 _PurchaseCount_k__BackingField; // 0x48
		::System::Boolean _ShowRewardUI_k__BackingField; // 0x50

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_PurchaseCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPNETWORKTASK_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_ShowRewardUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPNETWORKTASK_SET_SHOWREWARDUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_PurchaseCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPNETWORKTASK_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShowRewardUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPNETWORKTASK_GET_SHOWREWARDUI_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPNETWORKTASK_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYAPNETWORKTASK_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

	};

