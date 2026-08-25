#pragma once
#include "../unitysdk.h"

namespace TriInspector { class ButtonSizes; }

#define TRIINSPECTOR_BUTTONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE2D0)
#define TRIINSPECTOR_BUTTONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE2E0)
#define TRIINSPECTOR_BUTTONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE310)
#define TRIINSPECTOR_BUTTONATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9DCE350)
#define TRIINSPECTOR_BUTTONATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9DCE360)
#define TRIINSPECTOR_BUTTONATTRIBUTE_GET_BUTTONSIZE_OFFSET UNITYSDK_OFFSET(0x9DCE370)

namespace TriInspector
{
	inline static constexpr unsigned int ButtonAttribute_TypeDefinitionIndex = 37808;

	class ButtonAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Int32 _ButtonSize_k__BackingField; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_BUTTONATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_BUTTONATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::TriInspector::ButtonSizes* arg, ::System::String* str)
		{
			((::System::Void(*)(::TriInspector::ButtonSizes*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_BUTTONATTRIBUTE_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_BUTTONATTRIBUTE_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_BUTTONATTRIBUTE_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Int32 get_ButtonSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_BUTTONATTRIBUTE_GET_BUTTONSIZE_OFFSET))(nullptr);
		}

	};
}

