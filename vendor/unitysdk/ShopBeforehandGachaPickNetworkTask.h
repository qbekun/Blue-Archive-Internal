#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_SET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1F9F330)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F340)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET UNITYSDK_OFFSET(0x1F9F350)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_GET_MERCHANDISEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F9F360)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F9F370)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_GET_TARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1F9F380)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F9F390)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_SET_NEWCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x1F9F3A0)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F9F3B0)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_SET_MERCHANDISEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F9FF70)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1F9FF80)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F9FF90)
#define SHOPBEFOREHANDGACHAPICKNETWORKTASK_GET_NEWCHARACTERLIST_OFFSET UNITYSDK_OFFSET(0x1FA0020)

	inline static constexpr unsigned int ShopBeforehandGachaPickNetworkTask_TypeDefinitionIndex = 2807;

	class ShopBeforehandGachaPickNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _MerchandiseUniqueId_k__BackingField; // 0x40
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x48
		::System::Int64 _TargetIndex_k__BackingField; // 0x50
		Il2CppObject* _NewCharacterList_k__BackingField; // 0x58

		::System::Void set_TargetIndex(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_SET_TARGETINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__16_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK__PROCESSSESSION_B__16_0_OFFSET))(nullptr);
		}

		::System::Int64 get_MerchandiseUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_GET_MERCHANDISEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_TargetIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_GET_TARGETINDEX_OFFSET))(nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void set_NewCharacterList(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_SET_NEWCHARACTERLIST_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_MerchandiseUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_SET_MERCHANDISEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		Il2CppObject* get_NewCharacterList()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHAPICKNETWORKTASK_GET_NEWCHARACTERLIST_OFFSET))(nullptr);
		}

	};

