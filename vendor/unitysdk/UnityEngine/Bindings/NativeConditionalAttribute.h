#pragma once
#include "../../unitysdk.h"

#define UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0xA2A5810)
#define UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_STUBRETURNSTATEMENT_OFFSET UNITYSDK_OFFSET(0xA2A5820)
#define UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0xA2A5830)
#define UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5840)
#define UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5870)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeConditionalAttribute_TypeDefinitionIndex = 37878;

	class NativeConditionalAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Condition_k__BackingField; // 0x10
		::System::String* _StubReturnStatement_k__BackingField; // 0x18
		::System::Boolean _Enabled_k__BackingField; // 0x20

		::System::Void set_Condition(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_CONDITION_OFFSET))(str, nullptr);
		}

		::System::Void set_StubReturnStatement(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_STUBRETURNSTATEMENT_OFFSET))(str, nullptr);
		}

		::System::Void set_Enabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_ENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}

