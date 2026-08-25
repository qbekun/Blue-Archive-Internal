#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Bindings { class StaticAccessorType; }

#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA2A6020)
#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xA2A6030)
#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A6040)
#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A6070)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int StaticAccessorAttribute_TypeDefinitionIndex = 37893;

	class StaticAccessorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::UnityEngine::Bindings::StaticAccessorType* _Type_k__BackingField; // 0x18

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_Type(::UnityEngine::Bindings::StaticAccessorType* arg)
		{
			((::System::Void(*)(::UnityEngine::Bindings::StaticAccessorType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::UnityEngine::Bindings::StaticAccessorType* arg)
		{
			((::System::Void(*)(::System::String*, ::UnityEngine::Bindings::StaticAccessorType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

