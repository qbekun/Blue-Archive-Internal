#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SHOPBUYMERCHANDISENETWORKTASK_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1FA5580)
#define SHOPBUYMERCHANDISENETWORKTASK_SET_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x1FA5590)
#define SHOPBUYMERCHANDISENETWORKTASK_GET_ISREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0x1FA55A0)
#define SHOPBUYMERCHANDISENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA55B0)
#define SHOPBUYMERCHANDISENETWORKTASK_GET_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x1FA55C0)
#define SHOPBUYMERCHANDISENETWORKTASK_SET_ISREFRESHGOODS_OFFSET UNITYSDK_OFFSET(0x1FA55D0)
#define SHOPBUYMERCHANDISENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FA55E0)
#define SHOPBUYMERCHANDISENETWORKTASK_SET_GOODSUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA55F0)
#define SHOPBUYMERCHANDISENETWORKTASK_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1FA5600)
#define SHOPBUYMERCHANDISENETWORKTASK_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA5610)
#define SHOPBUYMERCHANDISENETWORKTASK_GET_GOODSUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA5620)
#define SHOPBUYMERCHANDISENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA5630)
#define SHOPBUYMERCHANDISENETWORKTASK_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA56C0)
#define SHOPBUYMERCHANDISENETWORKTASK__PROCESSSESSION_B__20_0_OFFSET UNITYSDK_OFFSET(0x1FA56D0)
#define SHOPBUYMERCHANDISENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA56E0)

	inline static constexpr unsigned int ShopBuyMerchandiseNetworkTask_TypeDefinitionIndex = 2828;

	class ShopBuyMerchandiseNetworkTask : public Il2CppObject
	{
	public:
		::System::Boolean _IsRefreshGoods_k__BackingField; // 0x40
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x48
		::System::Int64 _GoodsUniqueId_k__BackingField; // 0x50
		::System::Int64 _PurchaseCount_k__BackingField; // 0x58
		::System::Boolean _ShowRewardUI_k__BackingField; // 0x60

		::System::Void set_PurchaseCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShowRewardUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_SET_SHOWREWARDUI_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRefreshGoods()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_GET_ISREFRESHGOODS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowRewardUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_GET_SHOWREWARDUI_OFFSET))(nullptr);
		}

		::System::Void set_IsRefreshGoods(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_SET_ISREFRESHGOODS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_GoodsUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_SET_GOODSUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_PurchaseCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_GoodsUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_GET_GOODSUNIQUEID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__20_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK__PROCESSSESSION_B__20_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYMERCHANDISENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

