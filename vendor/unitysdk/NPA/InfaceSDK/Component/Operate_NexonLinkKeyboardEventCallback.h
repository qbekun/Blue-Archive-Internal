#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class NexonLinkKeyboardEvent&; }

#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKKEYBOARDEVENTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D14630)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKKEYBOARDEVENTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BBB0)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKKEYBOARDEVENTCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BBC0)
#define NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKKEYBOARDEVENTCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BC60)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int Operate_NexonLinkKeyboardEventCallback_TypeDefinitionIndex = 25963;

	class Operate_NexonLinkKeyboardEventCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKKEYBOARDEVENTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkKeyboardEvent&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkKeyboardEvent&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKKEYBOARDEVENTCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::NexonLinkKeyboardEvent&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::InfaceSDK::Component::NexonLinkKeyboardEvent&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKKEYBOARDEVENTCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::InfaceSDK::Component::NexonLinkKeyboardEvent&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::NexonLinkKeyboardEvent&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OPERATE_NEXONLINKKEYBOARDEVENTCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

