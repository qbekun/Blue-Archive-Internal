#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_OUTCHARARRAYCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1B520)
#define NPA_INFACESDK_COMPONENT_OUTCHARARRAYCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B5F0)
#define NPA_INFACESDK_COMPONENT_OUTCHARARRAYCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B600)
#define NPA_INFACESDK_COMPONENT_OUTCHARARRAYCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B680)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int OutCharArrayCallback_TypeDefinitionIndex = 25956;

	class OutCharArrayCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OUTCHARARRAYCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str, uint8_t&* arg)
		{
			((::System::Void(*)(::System::String*, uint8_t&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OUTCHARARRAYCALLBACK_INVOKE_OFFSET))(str, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, uint8_t&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, uint8_t&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OUTCHARARRAYCALLBACK_BEGININVOKE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(uint8_t&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(uint8_t&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_OUTCHARARRAYCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

