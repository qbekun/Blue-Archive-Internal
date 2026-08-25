#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DISABLEIFATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE7B0)
#define TRIINSPECTOR_DISABLEIFATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE830)
#define TRIINSPECTOR_DISABLEIFATTRIBUTE_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x9DCE880)
#define TRIINSPECTOR_DISABLEIFATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9DCE890)
#define TRIINSPECTOR_DISABLEIFATTRIBUTE_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCE8A0)
#define TRIINSPECTOR_DISABLEIFATTRIBUTE_SET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCE8B0)

namespace TriInspector
{
	inline static constexpr unsigned int DisableIfAttribute_TypeDefinitionIndex = 37816;

	class DisableIfAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Condition_k__BackingField; // 0x10
		::System::Object* _Value_k__BackingField; // 0x18
		::System::Boolean _Inverse_k__BackingField; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEIFATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEIFATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Condition()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEIFATTRIBUTE_GET_CONDITION_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEIFATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_Inverse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEIFATTRIBUTE_GET_INVERSE_OFFSET))(nullptr);
		}

		::System::Void set_Inverse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DISABLEIFATTRIBUTE_SET_INVERSE_OFFSET))(arg, nullptr);
		}

	};
}

