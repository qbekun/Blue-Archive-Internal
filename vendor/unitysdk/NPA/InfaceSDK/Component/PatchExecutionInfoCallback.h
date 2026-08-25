#pragma once
#include "../../../unitysdk.h"

namespace NPA::InfaceSDK::Component { class ExecutionInfoResult&; }

#define NPA_INFACESDK_COMPONENT_PATCHEXECUTIONINFOCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1BC80)
#define NPA_INFACESDK_COMPONENT_PATCHEXECUTIONINFOCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BD50)
#define NPA_INFACESDK_COMPONENT_PATCHEXECUTIONINFOCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BD60)
#define NPA_INFACESDK_COMPONENT_PATCHEXECUTIONINFOCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1BE00)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int PatchExecutionInfoCallback_TypeDefinitionIndex = 25964;

	class PatchExecutionInfoCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_PATCHEXECUTIONINFOCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::ExecutionInfoResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::InfaceSDK::Component::ExecutionInfoResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_PATCHEXECUTIONINFOCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::InfaceSDK::Component::ExecutionInfoResult&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::InfaceSDK::Component::ExecutionInfoResult&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_PATCHEXECUTIONINFOCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::InfaceSDK::Component::ExecutionInfoResult&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::InfaceSDK::Component::ExecutionInfoResult&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_PATCHEXECUTIONINFOCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

