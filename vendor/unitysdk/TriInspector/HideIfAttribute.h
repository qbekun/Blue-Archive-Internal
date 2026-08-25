#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_HIDEIFATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCED90)
#define TRIINSPECTOR_HIDEIFATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEE10)
#define TRIINSPECTOR_HIDEIFATTRIBUTE_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x9DCEE60)
#define TRIINSPECTOR_HIDEIFATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9DCEE70)
#define TRIINSPECTOR_HIDEIFATTRIBUTE_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCEE80)
#define TRIINSPECTOR_HIDEIFATTRIBUTE_SET_INVERSE_OFFSET UNITYSDK_OFFSET(0x9DCEE90)

namespace TriInspector
{
	inline static constexpr unsigned int HideIfAttribute_TypeDefinitionIndex = 37831;

	class HideIfAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Condition_k__BackingField; // 0x10
		::System::Object* _Value_k__BackingField; // 0x18
		::System::Boolean _Inverse_k__BackingField; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEIFATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEIFATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Condition()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEIFATTRIBUTE_GET_CONDITION_OFFSET))(nullptr);
		}

		::System::Object* get_Value()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEIFATTRIBUTE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Boolean get_Inverse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEIFATTRIBUTE_GET_INVERSE_OFFSET))(nullptr);
		}

		::System::Void set_Inverse(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_HIDEIFATTRIBUTE_SET_INVERSE_OFFSET))(arg, nullptr);
		}

	};
}

