#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA2A5B30)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISTHREADSAFE_OFFSET UNITYSDK_OFFSET(0xA2A5B40)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISFREEFUNCTION_OFFSET UNITYSDK_OFFSET(0xA2A5B50)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_THROWSEXCEPTION_OFFSET UNITYSDK_OFFSET(0xA2A5B60)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_HASEXPLICITTHIS_OFFSET UNITYSDK_OFFSET(0xA2A5B70)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5B80)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5B90)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5CA0)
#define UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5CC0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeMethodAttribute_TypeDefinitionIndex = 37882;

	class NativeMethodAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Boolean _IsThreadSafe_k__BackingField; // 0x18
		::System::Boolean _IsFreeFunction_k__BackingField; // 0x19
		::System::Boolean _ThrowsException_k__BackingField; // 0x1A
		::System::Boolean _HasExplicitThis_k__BackingField; // 0x1B

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Void set_IsThreadSafe(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISTHREADSAFE_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsFreeFunction(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_ISFREEFUNCTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_ThrowsException(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_THROWSEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void set_HasExplicitThis(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_SET_HASEXPLICITTHIS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEMETHODATTRIBUTE_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

