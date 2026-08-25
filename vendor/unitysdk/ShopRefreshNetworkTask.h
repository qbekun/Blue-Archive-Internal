#pragma once
#include "unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::NetworkProtocol { class Protocol; }

#define SHOPREFRESHNETWORKTASK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1FA9730)
#define SHOPREFRESHNETWORKTASK_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1FA9740)
#define SHOPREFRESHNETWORKTASK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1FA9750)
#define SHOPREFRESHNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1FA9760)
#define SHOPREFRESHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA9770)
#define SHOPREFRESHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA9780)
#define SHOPREFRESHNETWORKTASK_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1FA9810)
#define SHOPREFRESHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FA9820)
#define SHOPREFRESHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA9830)

	inline static constexpr unsigned int ShopRefreshNetworkTask_TypeDefinitionIndex = 2850;

	class ShopRefreshNetworkTask : public Il2CppObject
	{
	public:
		::FlatData::ShopCategoryType* _Type_k__BackingField; // 0x40
		::MX::GameLogic::Parcel::ParcelCost* _RefreshCost_k__BackingField; // 0x48

		::FlatData::ShopCategoryType* get_Type()
		{
			return ((::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHNETWORKTASK_GET_TYPE_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_RefreshCost()
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHNETWORKTASK_GET_REFRESHCOST_OFFSET))(nullptr);
		}

		::System::Void set_Type(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHNETWORKTASK_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void set_RefreshCost(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHNETWORKTASK_SET_REFRESHCOST_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPREFRESHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

