#pragma once
#include "unitysdk.h"

namespace MX::NetworkProtocol { class Protocol; }

#define USECOUPONNETWORKTASK_PROCESSSESSION_OFFSET UNITYSDK_OFFSET(0x1F62520)
#define USECOUPONNETWORKTASK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1F625B0)
#define USECOUPONNETWORKTASK_GET_COUPONSERIAL_OFFSET UNITYSDK_OFFSET(0x1F625C0)
#define USECOUPONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F625D0)
#define USECOUPONNETWORKTASK_HANDLEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1F625E0)
#define USECOUPONNETWORKTASK_SET_COUPONSERIAL_OFFSET UNITYSDK_OFFSET(0x1F62780)
#define USECOUPONNETWORKTASK_ERRORHANDLER_OFFSET UNITYSDK_OFFSET(0x1F62790)

	inline static constexpr unsigned int UseCouponNetworkTask_TypeDefinitionIndex = 2410;

	class UseCouponNetworkTask : public Il2CppObject
	{
	public:
		::System::String* _CouponSerial_k__BackingField; // 0x40

		::System::Collections::IEnumerator* ProcessSession()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + USECOUPONNETWORKTASK_PROCESSSESSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + USECOUPONNETWORKTASK_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_CouponSerial()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + USECOUPONNETWORKTASK_GET_COUPONSERIAL_OFFSET))(nullptr);
		}

		::System::Boolean _ProcessSession_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + USECOUPONNETWORKTASK__PROCESSSESSION_B__4_0_OFFSET))(nullptr);
		}

		::System::Boolean HandleMessage(::MX::NetworkProtocol::Protocol* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg2)
		{
			return ((::System::Boolean(*)(::MX::NetworkProtocol::Protocol*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + USECOUPONNETWORKTASK_HANDLEMESSAGE_OFFSET))(arg, str, arg2, nullptr);
		}

		::System::Void set_CouponSerial(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + USECOUPONNETWORKTASK_SET_COUPONSERIAL_OFFSET))(str, nullptr);
		}

		::System::Boolean ErrorHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + USECOUPONNETWORKTASK_ERRORHANDLER_OFFSET))(nullptr);
		}

	};

