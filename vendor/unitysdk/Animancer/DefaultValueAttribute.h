#pragma once
#include "../unitysdk.h"

#define ANIMANCER_DEFAULTVALUEATTRIBUTE_GET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x4ABFD0)
#define ANIMANCER_DEFAULTVALUEATTRIBUTE_SET_PRIMARY_OFFSET UNITYSDK_OFFSET(0x4ABFE0)
#define ANIMANCER_DEFAULTVALUEATTRIBUTE_GET_SECONDARY_OFFSET UNITYSDK_OFFSET(0x4ABFF0)
#define ANIMANCER_DEFAULTVALUEATTRIBUTE_SET_SECONDARY_OFFSET UNITYSDK_OFFSET(0x4AC000)
#define ANIMANCER_DEFAULTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4AC010)
#define ANIMANCER_DEFAULTVALUEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4ABFC0)

namespace Animancer
{
	inline static constexpr unsigned int DefaultValueAttribute_TypeDefinitionIndex = 35129;

	class DefaultValueAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Object* _Primary_k__BackingField; // 0x10
		::System::Object* _Secondary_k__BackingField; // 0x18

		::System::Object* get_Primary()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DEFAULTVALUEATTRIBUTE_GET_PRIMARY_OFFSET))(nullptr);
		}

		::System::Void set_Primary(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DEFAULTVALUEATTRIBUTE_SET_PRIMARY_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Secondary()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DEFAULTVALUEATTRIBUTE_GET_SECONDARY_OFFSET))(nullptr);
		}

		::System::Void set_Secondary(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DEFAULTVALUEATTRIBUTE_SET_SECONDARY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DEFAULTVALUEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMANCER_DEFAULTVALUEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

	};
}

