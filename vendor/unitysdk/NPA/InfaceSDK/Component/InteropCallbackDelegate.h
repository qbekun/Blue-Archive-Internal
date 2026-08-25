#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_INTEROPCALLBACKDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D0F6D0)
#define NPA_INFACESDK_COMPONENT_INTEROPCALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B480)
#define NPA_INFACESDK_COMPONENT_INTEROPCALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B490)
#define NPA_INFACESDK_COMPONENT_INTEROPCALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B510)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int InteropCallbackDelegate_TypeDefinitionIndex = 25955;

	class InteropCallbackDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INTEROPCALLBACKDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INTEROPCALLBACKDELEGATE_INVOKE_OFFSET))(arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INTEROPCALLBACKDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_INTEROPCALLBACKDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

