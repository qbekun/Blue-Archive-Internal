#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define EVENTCONTENTSHOPLISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F72BB0)
#define EVENTCONTENTSHOPLISTNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F72BC0)
#define EVENTCONTENTSHOPLISTNETWORKTASK_GET_CATEGORYLIST_OFFSET UNITYSDK_OFFSET(0x1F72C50)
#define EVENTCONTENTSHOPLISTNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F72C60)
#define EVENTCONTENTSHOPLISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1F72C70)
#define EVENTCONTENTSHOPLISTNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F72C80)
#define EVENTCONTENTSHOPLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1F72C90)
#define EVENTCONTENTSHOPLISTNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F72CA0)
#define EVENTCONTENTSHOPLISTNETWORKTASK_SET_CATEGORYLIST_OFFSET UNITYSDK_OFFSET(0x1F72E40)

	inline static constexpr unsigned int EventContentShopListNetworkTask_TypeDefinitionIndex = 2525;

	class EventContentShopListNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _EventContentId_k__BackingField; // 0x40
		Il2CppObject* _CategoryList_k__BackingField; // 0x48

		::System::Int64 get_EventContentId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTNETWORKTASK_GET_EVENTCONTENTID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_CategoryList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTNETWORKTASK_GET_CATEGORYLIST_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_EventContentId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTNETWORKTASK_SET_EVENTCONTENTID_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_CategoryList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTCONTENTSHOPLISTNETWORKTASK_SET_CATEGORYLIST_OFFSET))(arg, nullptr);
		}

	};

