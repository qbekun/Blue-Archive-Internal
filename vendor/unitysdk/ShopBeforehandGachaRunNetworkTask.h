#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define SHOPBEFOREHANDGACHARUNNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA03C0)
#define SHOPBEFOREHANDGACHARUNNETWORKTASK_SET_MERCHANDISEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA0680)
#define SHOPBEFOREHANDGACHARUNNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1FA0690)
#define SHOPBEFOREHANDGACHARUNNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA06A0)
#define SHOPBEFOREHANDGACHARUNNETWORKTASK_GET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA06B0)
#define SHOPBEFOREHANDGACHARUNNETWORKTASK_GET_MERCHANDISEUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA06C0)
#define SHOPBEFOREHANDGACHARUNNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA06D0)
#define SHOPBEFOREHANDGACHARUNNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1FA0760)
#define SHOPBEFOREHANDGACHARUNNETWORKTASK_SET_SHOPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1FA0770)

	inline static constexpr unsigned int ShopBeforehandGachaRunNetworkTask_TypeDefinitionIndex = 2810;

	class ShopBeforehandGachaRunNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _MerchandiseUniqueId_k__BackingField; // 0x40
		::System::Int64 _ShopUniqueId_k__BackingField; // 0x48

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHARUNNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_MerchandiseUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHARUNNETWORKTASK_SET_MERCHANDISEUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHARUNNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHARUNNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_ShopUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHARUNNETWORKTASK_GET_SHOPUNIQUEID_OFFSET))(nullptr);
		}

		::System::Int64 get_MerchandiseUniqueId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHARUNNETWORKTASK_GET_MERCHANDISEUNIQUEID_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHARUNNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHARUNNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void set_ShopUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBEFOREHANDGACHARUNNETWORKTASK_SET_SHOPUNIQUEID_OFFSET))(arg, nullptr);
		}

	};

