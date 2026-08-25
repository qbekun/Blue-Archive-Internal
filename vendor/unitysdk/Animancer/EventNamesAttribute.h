#pragma once
#include "../unitysdk.h"

#define ANIMANCER_EVENTNAMESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AC070)
#define ANIMANCER_EVENTNAMESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AC080)
#define ANIMANCER_EVENTNAMESATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AC090)

namespace Animancer
{
	inline static constexpr unsigned int EventNamesAttribute_TypeDefinitionIndex = 35131;

	class EventNamesAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EVENTNAMESATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EVENTNAMESATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_EVENTNAMESATTRIBUTE_.CTOR_OFFSET))(arg, str, nullptr);
		}

	};
}

