#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class ErrorPacket; }
namespace MX::NetworkProtocol { class Protocol; }

#define SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_HANDLECUSTOMERROR_OFFSET UNITYSDK_OFFSET(0x1FA68D0)
#define SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_SET_FREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1FA6B90)
#define SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1FA6BA0)
#define SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_GET_SHOWGACHADIRECTING_OFFSET UNITYSDK_OFFSET(0x1FA6C30)
#define SHOPPICKUPSELECTIONGACHABUYNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET UNITYSDK_OFFSET(0x1FA6C40)
#define SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1FA6C50)
#define SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_GET_FREERECRUITID_OFFSET UNITYSDK_OFFSET(0x1FA6C60)
#define SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1FA6C70)
#define SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_SET_SHOWGACHADIRECTING_OFFSET UNITYSDK_OFFSET(0x1FA78C0)

	inline static constexpr unsigned int ShopPickupSelectionGachaBuyNetworkTask_TypeDefinitionIndex = 2840;

	class ShopPickupSelectionGachaBuyNetworkTask : public Il2CppObject
	{
	public:
		::System::Int64 _FreeRecruitId_k__BackingField; // 0x70
		::System::Boolean _ShowGachaDirecting_k__BackingField; // 0x78

		::System::Boolean HandleCustomError(::MX::NetworkProtocol::ErrorPacket* arg)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::ErrorPacket*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_HANDLECUSTOMERROR_OFFSET))(arg, nullptr);
		}

		::System::Void set_FreeRecruitId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_SET_FREERECRUITID_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Boolean get_ShowGachaDirecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_GET_SHOWGACHADIRECTING_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__8_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPPICKUPSELECTIONGACHABUYNETWORKTASK__PROCESSSESSION_B__8_0_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 get_FreeRecruitId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_GET_FREERECRUITID_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_ShowGachaDirecting(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SHOPPICKUPSELECTIONGACHABUYNETWORKTASK_SET_SHOWGACHADIRECTING_OFFSET))(arg, nullptr);
		}

	};

