#pragma once
#include "../../unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_CONSUMEDITEMS_OFFSET UNITYSDK_OFFSET(0xF4EB60)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_GEMBONUSREMAIN_OFFSET UNITYSDK_OFFSET(0xF4EB70)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_GEMPAIDREMAIN_OFFSET UNITYSDK_OFFSET(0xF4EB80)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_GACHARESULTS_OFFSET UNITYSDK_OFFSET(0xF4EB90)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_UPDATETIME_OFFSET UNITYSDK_OFFSET(0xF4EBA0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_GACHARESULTS_OFFSET UNITYSDK_OFFSET(0xF4EBB0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_GEMBONUSREMAIN_OFFSET UNITYSDK_OFFSET(0xF4EBC0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_CONSUMEDITEMS_OFFSET UNITYSDK_OFFSET(0xF4EBD0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_ACQUIREDITEMS_OFFSET UNITYSDK_OFFSET(0xF4EBE0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_PROTOCOL_OFFSET UNITYSDK_OFFSET(0xF4EBF0)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF4EC00)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_GEMPAIDREMAIN_OFFSET UNITYSDK_OFFSET(0xF4EC80)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_UPDATETIME_OFFSET UNITYSDK_OFFSET(0xF4EC90)
#define MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_ACQUIREDITEMS_OFFSET UNITYSDK_OFFSET(0xF4ECA0)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int ShopBuyGacha2Response_TypeDefinitionIndex = 12113;

	class ShopBuyGacha2Response : public Il2CppObject
	{
	public:
		::System::DateTime* _UpdateTime_k__BackingField; // 0x50
		::System::Int64 _GemBonusRemain_k__BackingField; // 0x58
		::System::Int64 _GemPaidRemain_k__BackingField; // 0x60
		Il2CppObject* _ConsumedItems_k__BackingField; // 0x68
		Il2CppObject* _GachaResults_k__BackingField; // 0x70
		Il2CppObject* _AcquiredItems_k__BackingField; // 0x78

		::System::Void set_ConsumedItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_CONSUMEDITEMS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GemBonusRemain()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_GEMBONUSREMAIN_OFFSET))(nullptr);
		}

		::System::Void set_GemPaidRemain(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_GEMPAIDREMAIN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GachaResults()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_GACHARESULTS_OFFSET))(nullptr);
		}

		::System::Void set_UpdateTime(::System::DateTime* arg)
		{
			((::System::Void(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_UPDATETIME_OFFSET))(arg, nullptr);
		}

		::System::Void set_GachaResults(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_GACHARESULTS_OFFSET))(arg, nullptr);
		}

		::System::Void set_GemBonusRemain(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_GEMBONUSREMAIN_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ConsumedItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_CONSUMEDITEMS_OFFSET))(nullptr);
		}

		::System::Void set_AcquiredItems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_SET_ACQUIREDITEMS_OFFSET))(arg, nullptr);
		}

		::MX::NetworkProtocol::Protocol* get_Protocol()
		{
			return ((::MX::NetworkProtocol::Protocol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_PROTOCOL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_GemPaidRemain()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_GEMPAIDREMAIN_OFFSET))(nullptr);
		}

		::System::DateTime* get_UpdateTime()
		{
			return ((::System::DateTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_UPDATETIME_OFFSET))(nullptr);
		}

		Il2CppObject* get_AcquiredItems()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_SHOPBUYGACHA2RESPONSE_GET_ACQUIREDITEMS_OFFSET))(nullptr);
		}

	};
}

