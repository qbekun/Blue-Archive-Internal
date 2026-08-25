#pragma once
#include "unitysdk.h"

class ItemObject;
namespace MX::NetworkProtocol { class Protocol; }

#define ITEMSELECTTICKETNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F7D810)
#define ITEMSELECTTICKETNETWORKTASK_GET_CONSUMECOUNT_OFFSET UNITYSDK_OFFSET(0x1F7D820)
#define ITEMSELECTTICKETNETWORKTASK_SET_SELECTITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F7D830)
#define ITEMSELECTTICKETNETWORKTASK_SET_CONSUMECOUNT_OFFSET UNITYSDK_OFFSET(0x1F7D840)
#define ITEMSELECTTICKETNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F7D850)
#define ITEMSELECTTICKETNETWORKTASK_GET_TICKETITEM_OFFSET UNITYSDK_OFFSET(0x1F7D860)
#define ITEMSELECTTICKETNETWORKTASK_GET_SELECTITEMUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F7D870)
#define ITEMSELECTTICKETNETWORKTASK_SET_TICKETITEM_OFFSET UNITYSDK_OFFSET(0x1F7D880)
#define ITEMSELECTTICKETNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F7D890)
#define ITEMSELECTTICKETNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F7D920)
#define ITEMSELECTTICKETNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F7D930)

	inline static constexpr unsigned int ItemSelectTicketNetworkTask_TypeDefinitionIndex = 2594;

	class ItemSelectTicketNetworkTask : public Il2CppObject
	{
	public:
		ItemObject* _ticketItem_k__BackingField; // 0x40
		::System::Int64 _SelectItemUniqueId_k__BackingField; // 0x48
		::System::Int32 _ConsumeCount_k__BackingField; // 0x50

		::System::Boolean _ProcessSession_b__12_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETNETWORKTASK__PROCESSSESSION_B__12_0_OFFSET))(nullptr);
		}

		::System::Int32 get_ConsumeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETNETWORKTASK_GET_CONSUMECOUNT_OFFSET))(nullptr);
		}

		::System::Void set_SelectItemUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETNETWORKTASK_SET_SELECTITEMUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ConsumeCount(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETNETWORKTASK_SET_CONSUMECOUNT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		ItemObject* get_ticketItem()
		{
			return ((ItemObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETNETWORKTASK_GET_TICKETITEM_OFFSET))(nullptr);
		}

		::System::Int64 get_SelectItemUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETNETWORKTASK_GET_SELECTITEMUNIQUEID_OFFSET))(nullptr);
		}

		::System::Void set_ticketItem(ItemObject* arg)
		{
			((::System::Void(*)(ItemObject*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETNETWORKTASK_SET_TICKETITEM_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ITEMSELECTTICKETNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

	};

