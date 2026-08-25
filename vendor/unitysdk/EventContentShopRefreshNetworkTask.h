#pragma once
#include "unitysdk.h"

namespace FlatData { class ShopCategoryType; }
namespace MX::GameLogic::Parcel { class ParcelCost; }
namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTSHOPREFRESHNETWORKTASK_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F73130)
#define EVENTCONTENTSHOPREFRESHNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F73140)
#define EVENTCONTENTSHOPREFRESHNETWORKTASK_GET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1F73150)
#define EVENTCONTENTSHOPREFRESHNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F73160)
#define EVENTCONTENTSHOPREFRESHNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F73170)
#define EVENTCONTENTSHOPREFRESHNETWORKTASK_SET_REFRESHCOST_OFFSET UNITYSDK_OFFSET(0x1F733C0)
#define EVENTCONTENTSHOPREFRESHNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F733D0)
#define EVENTCONTENTSHOPREFRESHNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F733E0)
#define EVENTCONTENTSHOPREFRESHNETWORKTASK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1F733F0)
#define EVENTCONTENTSHOPREFRESHNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F73400)
#define EVENTCONTENTSHOPREFRESHNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F73410)

	inline static constexpr unsigned int EventContentShopRefreshNetworkTask_TypeDefinitionIndex = 2528;

	class EventContentShopRefreshNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		::FlatData::ShopCategoryType* _Type_k__BackingField; // 0x48
		::MX::GameLogic::Parcel::ParcelCost* _RefreshCost_k__BackingField; // 0x50

		::System::Void set_Type(::FlatData::ShopCategoryType* arg)
		{
			((::System::Void(*)(::FlatData::ShopCategoryType*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHNETWORKTASK_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelCost* get_RefreshCost()
		{
			return ((::MX::GameLogic::Parcel::ParcelCost*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHNETWORKTASK_GET_REFRESHCOST_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_RefreshCost(::MX::GameLogic::Parcel::ParcelCost* arg)
		{
			((::System::Void(*)(::MX::GameLogic::Parcel::ParcelCost*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHNETWORKTASK_SET_REFRESHCOST_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::FlatData::ShopCategoryType* get_Type()
		{
			return ((::FlatData::ShopCategoryType*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHNETWORKTASK_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPREFRESHNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

	};

