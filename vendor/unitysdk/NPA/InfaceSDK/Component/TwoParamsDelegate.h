#pragma once
#include "../../../unitysdk.h"

#define NPA_INFACESDK_COMPONENT_TWOPARAMSDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9D1B810)
#define NPA_INFACESDK_COMPONENT_TWOPARAMSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B8E0)
#define NPA_INFACESDK_COMPONENT_TWOPARAMSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B8F0)
#define NPA_INFACESDK_COMPONENT_TWOPARAMSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9D1B930)

namespace NPA::InfaceSDK::Component
{
	inline static constexpr unsigned int TwoParamsDelegate_TypeDefinitionIndex = 25959;

	class TwoParamsDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TWOPARAMSDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TWOPARAMSDELEGATE_INVOKE_OFFSET))(str, str, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* str, ::System::String* str, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TWOPARAMSDELEGATE_BEGININVOKE_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_INFACESDK_COMPONENT_TWOPARAMSDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};
}

