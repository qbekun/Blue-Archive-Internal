#pragma once
#include "unitysdk.h"

#define CONDITIONALFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21633B0)
#define CONDITIONALFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21633C0)
#define CONDITIONALFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21633D0)
#define CONDITIONALFIELDATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21633E0)

	inline static constexpr unsigned int ConditionalFieldAttribute_TypeDefinitionIndex = 4004;

	class ConditionalFieldAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONDITIONALFIELDATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Type* arg, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONDITIONALFIELDATTRIBUTE_.CTOR_OFFSET))(str, arg, str2, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CONDITIONALFIELDATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Object* arg, ::System::Object* arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CONDITIONALFIELDATTRIBUTE_.CTOR_OFFSET))(str, arg, arg2, nullptr);
		}

	};

