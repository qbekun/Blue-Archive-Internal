#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_CALLBACKIDHANDLEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1AF90)
#define NPA_INFACESDK_COMPONENT_CALLBACKIDHANDLEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B060)
#define NPA_INFACESDK_COMPONENT_CALLBACKIDHANDLEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B080)
#define NPA_INFACESDK_COMPONENT_CALLBACKIDHANDLEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B130)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int CallbackIdHandledDelegate_TypeDefinitionIndex = 25952;

	class CallbackIdHandledDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CALLBACKIDHANDLEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CALLBACKIDHANDLEDDELEGATE_INVOKE_OFFSET))(arg, arg, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CALLBACKIDHANDLEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CALLBACKIDHANDLEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

