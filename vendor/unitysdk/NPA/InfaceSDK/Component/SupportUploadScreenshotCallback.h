#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class SupportUploadScreenshotResult&; }

#define NPA_INFACESDK_COMPONENT_SUPPORTUPLOADSCREENSHOTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1BE20)
#define NPA_INFACESDK_COMPONENT_SUPPORTUPLOADSCREENSHOTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BEF0)
#define NPA_INFACESDK_COMPONENT_SUPPORTUPLOADSCREENSHOTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BF00)
#define NPA_INFACESDK_COMPONENT_SUPPORTUPLOADSCREENSHOTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BFA0)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int SupportUploadScreenshotCallback_TypeDefinitionIndex = 25965;

	class SupportUploadScreenshotCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_SUPPORTUPLOADSCREENSHOTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::SupportUploadScreenshotResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::SupportUploadScreenshotResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_SUPPORTUPLOADSCREENSHOTCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::SupportUploadScreenshotResult&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::InfaceSDK::Component::SupportUploadScreenshotResult&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_SUPPORTUPLOADSCREENSHOTCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::InfaceSDK::Component::SupportUploadScreenshotResult&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::SupportUploadScreenshotResult&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_SUPPORTUPLOADSCREENSHOTCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

