#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Bindings { class TargetType; }

#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_SET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0xA2A5CF0)
#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5D00)
#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5D10)
#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5D20)
#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5D50)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativePropertyAttribute_TypeDefinitionIndex = 37884;

	class NativePropertyAttribute : public Il2CppObject
	{
	public:
		::UnityEngine::Bindings::TargetType* _TargetType_k__BackingField; // 0x20

		::System::Void set_TargetType(::UnityEngine::Bindings::TargetType* arg)
		{
			((::System::Void(*)(::UnityEngine::Bindings::TargetType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_SET_TARGETTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::UnityEngine::Bindings::TargetType* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::UnityEngine::Bindings::TargetType*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::UnityEngine::Bindings::TargetType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::UnityEngine::Bindings::TargetType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_.CTOR_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

