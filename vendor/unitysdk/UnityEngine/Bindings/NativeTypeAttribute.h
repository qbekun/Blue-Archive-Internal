#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Bindings { class CodegenOptions; }

#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_HEADER_OFFSET UNITYSDK_OFFSET(0xA2A5D90)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_INTERMEDIATESCRIPTINGSTRUCTNAME_OFFSET UNITYSDK_OFFSET(0xA2A5DA0)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_CODEGENOPTIONS_OFFSET UNITYSDK_OFFSET(0xA2A5DB0)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5DC0)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5DE0)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5E00)
#define UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5F10)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeTypeAttribute_TypeDefinitionIndex = 37887;

	class NativeTypeAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Header_k__BackingField; // 0x10
		::System::String* _IntermediateScriptingStructName_k__BackingField; // 0x18
		::UnityEngine::Bindings::CodegenOptions* _CodegenOptions_k__BackingField; // 0x20

		::System::Void set_Header(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_HEADER_OFFSET))(str, nullptr);
		}

		::System::Void set_IntermediateScriptingStructName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_INTERMEDIATESCRIPTINGSTRUCTNAME_OFFSET))(str, nullptr);
		}

		::System::Void set_CodegenOptions(::UnityEngine::Bindings::CodegenOptions* arg)
		{
			((::System::Void(*)(::UnityEngine::Bindings::CodegenOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_SET_CODEGENOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::Bindings::CodegenOptions* arg)
		{
			((::System::Void(*)(::UnityEngine::Bindings::CodegenOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Bindings::CodegenOptions* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::Bindings::CodegenOptions*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVETYPEATTRIBUTE_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};
}

