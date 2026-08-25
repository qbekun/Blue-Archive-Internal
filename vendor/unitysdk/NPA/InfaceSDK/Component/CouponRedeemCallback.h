#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class StandardResult&; }

#define NPA_INFACESDK_COMPONENT_COUPONREDEEMCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1B140)
#define NPA_INFACESDK_COMPONENT_COUPONREDEEMCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B210)
#define NPA_INFACESDK_COMPONENT_COUPONREDEEMCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B220)
#define NPA_INFACESDK_COMPONENT_COUPONREDEEMCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B2C0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int CouponRedeemCallback_TypeDefinitionIndex = 25953;

	class CouponRedeemCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COUPONREDEEMCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::StandardResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::StandardResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COUPONREDEEMCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::StandardResult&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::InfaceSDK::Component::StandardResult&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COUPONREDEEMCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::InfaceSDK::Component::StandardResult&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::StandardResult&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_COUPONREDEEMCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

