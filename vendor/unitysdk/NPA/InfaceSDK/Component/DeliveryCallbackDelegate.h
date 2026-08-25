#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_DELIVERYCALLBACKDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1AB20)
#define NPA_INFACESDK_COMPONENT_DELIVERYCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1ABF0)
#define NPA_INFACESDK_COMPONENT_DELIVERYCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1AC00)
#define NPA_INFACESDK_COMPONENT_DELIVERYCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1AC80)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int DeliveryCallbackDelegate_TypeDefinitionIndex = 25949;

	class DeliveryCallbackDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_DELIVERYCALLBACKDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_DELIVERYCALLBACKDELEGATE_INVOKE_OFFSET))(str, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_DELIVERYCALLBACKDELEGATE_BEGININVOKE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_DELIVERYCALLBACKDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

