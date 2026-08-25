#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }
namespace MX::NetworkProtocol { class ShopBuyGacha2Response; }
namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::GameLogic::Parcel { class ParcelResultDB; }

#define SHOPBUYGACHA3NETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA1E90)
#define SHOPBUYGACHA3NETWORKTASK_OPENGACHADIRECTING_OFFSET UNITYSDK_OFFSET(0x1FA4150)
#define SHOPBUYGACHA3NETWORKTASK_GET_FREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1FA4830)
#define SHOPBUYGACHA3NETWORKTASK_SYNCCURRENCYANDITEMINVENTORY_OFFSET UNITYSDK_OFFSET(0x1FA2680)
#define SHOPBUYGACHA3NETWORKTASK_HANDLECUSTOMERROR_OFFSET UNITYSDK_OFFSET(0x1FA4840)
#define SHOPBUYGACHA3NETWORKTASK_REPORTGACHAEVENT_OFFSET UNITYSDK_OFFSET(0x1FA4B00)
#define SHOPBUYGACHA3NETWORKTASK_SET_FREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1FA4C70)
#define SHOPBUYGACHA3NETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA4C80)
#define SHOPBUYGACHA3NETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA4D10)
#define SHOPBUYGACHA3NETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FA4D30)
#define SHOPBUYGACHA3NETWORKTASK_BUILDPARCELRESULT_OFFSET UNITYSDK_OFFSET(0x1FA2A00)

	inline static constexpr unsigned int ShopBuyGacha3NetworkTask_TypeDefinitionIndex = 2825;

	class ShopBuyGacha3NetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _FreeRecruitId_k__BackingField; // 0x68

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHA3NETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void OpenGachaDirecting(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHA3NETWORKTASK_OPENGACHADIRECTING_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_FreeRecruitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHA3NETWORKTASK_GET_FREERECRUITID_OFFSET))(nullptr);
		}

		::System::Void SyncCurrencyAndItemInventory(::MX::NetworkProtocol::ShopBuyGacha2Response* arg)
		{
			((::System::Void(*)(::MX::NetworkProtocol::ShopBuyGacha2Response*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHA3NETWORKTASK_SYNCCURRENCYANDITEMINVENTORY_OFFSET))(arg, nullptr);
		}

		::System::Boolean HandleCustomError(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHA3NETWORKTASK_HANDLECUSTOMERROR_OFFSET))(arg, nullptr);
		}

		::System::Void ReportGachaEvent(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHA3NETWORKTASK_REPORTGACHAEVENT_OFFSET))(arg, nullptr);
		}

		::System::Void set_FreeRecruitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHA3NETWORKTASK_SET_FREERECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHA3NETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHA3NETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHA3NETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::MX::GameLogic::Parcel::ParcelResultDB* BuildParcelResult(::MX::NetworkProtocol::ShopBuyGacha2Response* arg)
		{
			return ((::MX::GameLogic::Parcel::ParcelResultDB*(*)(::MX::NetworkProtocol::ShopBuyGacha2Response*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPBUYGACHA3NETWORKTASK_BUILDPARCELRESULT_OFFSET))(arg, nullptr);
		}

	};

