#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SHOPBUYELIGMANETWORKTASK_GET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1FA17E0)
#define SHOPBUYELIGMANETWORKTASK_SET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA17F0)
#define SHOPBUYELIGMANETWORKTASK_SET_PURCHASECOUNT_OFFSET UNITYSDK_OFFSET(0x1FA1800)
#define SHOPBUYELIGMANETWORKTASK_SET_GOODSUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA1810)
#define SHOPBUYELIGMANETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1820)
#define SHOPBUYELIGMANETWORKTASK_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA1830)
#define SHOPBUYELIGMANETWORKTASK_GET_GOODSUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA1840)
#define SHOPBUYELIGMANETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA1850)
#define SHOPBUYELIGMANETWORKTASK_GET_CHARACTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA1B30)
#define SHOPBUYELIGMANETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA1B40)
#define SHOPBUYELIGMANETWORKTASK_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA1BD0)
#define SHOPBUYELIGMANETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FA1BE0)
#define SHOPBUYELIGMANETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1FA1BF0)

	inline static constexpr unsigned int ShopBuyEligmaNetworkTask_TypeDefinitionIndex = 2818;

	class ShopBuyEligmaNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _GoodsUniqueId_k__BackingField; // 0x40
		::System::Int64 _CharacterUniqueId_k__BackingField; // 0x48
		::System::Int64 _PurchaseCount_k__BackingField; // 0x50
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x58

		::System::Int64 get_PurchaseCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_GET_PURCHASECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_CharacterUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_SET_CHARACTERUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_PurchaseCount(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_SET_PURCHASECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Void set_GoodsUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_SET_GOODSUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GoodsUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_GET_GOODSUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Int64 get_CharacterUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_GET_CHARACTERUNIQUEID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYELIGMANETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

	};

