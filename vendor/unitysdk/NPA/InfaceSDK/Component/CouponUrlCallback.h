#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class CouponRedemptionUrlResult&; }

#define NPA_INFACESDK_COMPONENT_COUPONURLCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1B2E0)
#define NPA_INFACESDK_COMPONENT_COUPONURLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B3B0)
#define NPA_INFACESDK_COMPONENT_COUPONURLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B3C0)
#define NPA_INFACESDK_COMPONENT_COUPONURLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B460)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int CouponUrlCallback_TypeDefinitionIndex = 25954;

	class CouponUrlCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COUPONURLCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::CouponRedemptionUrlResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::CouponRedemptionUrlResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COUPONURLCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::CouponRedemptionUrlResult&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::InfaceSDK::Component::CouponRedemptionUrlResult&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COUPONURLCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::InfaceSDK::Component::CouponRedemptionUrlResult&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::CouponRedemptionUrlResult&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COUPONURLCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

