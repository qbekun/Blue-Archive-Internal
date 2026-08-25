#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_NATIVECLASSATTRIBUTE_SET_QUALIFIEDNATIVENAME_OFFSET UNITYSDK_OFFSET(0xA2A5670)
#define UNITYENGINE_NATIVECLASSATTRIBUTE_SET_DECLARATION_OFFSET UNITYSDK_OFFSET(0xA2A5680)
#define UNITYENGINE_NATIVECLASSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5690)
#define UNITYENGINE_NATIVECLASSATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2A5700)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeClassAttribute_TypeDefinitionIndex = 37875;

	class NativeClassAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _QualifiedNativeName_k__BackingField; // 0x10
		::System::String* _Declaration_k__BackingField; // 0x18

		::System::Void set_QualifiedNativeName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE_SET_QUALIFIEDNATIVENAME_OFFSET))(str, nullptr);
		}

		::System::Void set_Declaration(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE_SET_DECLARATION_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVECLASSATTRIBUTE_.CTOR_OFFSET))(str, str, nullptr);
		}

	};
}

