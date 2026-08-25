#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_CALLBACKUINTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1AC90)
#define NPA_INFACESDK_COMPONENT_CALLBACKUINTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1AD60)
#define NPA_INFACESDK_COMPONENT_CALLBACKUINTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1AD70)
#define NPA_INFACESDK_COMPONENT_CALLBACKUINTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1AE10)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int CallbackUIntDelegate_TypeDefinitionIndex = 25950;

	class CallbackUIntDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CALLBACKUINTDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::UInt32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CALLBACKUINTDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::UInt32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CALLBACKUINTDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_CALLBACKUINTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

