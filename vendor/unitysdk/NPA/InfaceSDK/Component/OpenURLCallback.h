#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_OPENURLCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D0F830)
#define NPA_INFACESDK_COMPONENT_OPENURLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B6A0)
#define NPA_INFACESDK_COMPONENT_OPENURLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B6B0)
#define NPA_INFACESDK_COMPONENT_OPENURLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B6E0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int OpenURLCallback_TypeDefinitionIndex = 25957;

	class OpenURLCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPENURLCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPENURLCALLBACK_INVOKE_OFFSET))(str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPENURLCALLBACK_BEGININVOKE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPENURLCALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

