#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SHOPBUYREFRESHMERCHANDISENETWORKTASK_SET_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x1FA5CC0)
#define SHOPBUYREFRESHMERCHANDISENETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA5CD0)
#define SHOPBUYREFRESHMERCHANDISENETWORKTASK_SET_SHOPUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0x1FA5CE0)
#define SHOPBUYREFRESHMERCHANDISENETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA5CF0)
#define SHOPBUYREFRESHMERCHANDISENETWORKTASK_GET_SHOWREWARDUI_OFFSET UNITYSDK_OFFSET(0x1FA5FE0)
#define SHOPBUYREFRESHMERCHANDISENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1FA5FF0)
#define SHOPBUYREFRESHMERCHANDISENETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA6000)
#define SHOPBUYREFRESHMERCHANDISENETWORKTASK_GET_SHOPUNIQUEIDLIST_OFFSET UNITYSDK_OFFSET(0x1FA6090)
#define SHOPBUYREFRESHMERCHANDISENETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FA60A0)

	inline static constexpr unsigned int ShopBuyRefreshMerchandiseNetworkTask_TypeDefinitionIndex = 2831;

	class ShopBuyRefreshMerchandiseNetworkTask : public Il2CppObject
	{
	public:
		Il2CppObject* _ShopUniqueIdList_k__BackingField; // 0x40
		::System::Boolean _ShowRewardUI_k__BackingField; // 0x48

		::System::Void set_ShowRewardUI(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISENETWORKTASK_SET_SHOWREWARDUI_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISENETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueIdList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISENETWORKTASK_SET_SHOPUNIQUEIDLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISENETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Boolean get_ShowRewardUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISENETWORKTASK_GET_SHOWREWARDUI_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISENETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISENETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_ShopUniqueIdList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISENETWORKTASK_GET_SHOPUNIQUEIDLIST_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYREFRESHMERCHANDISENETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

