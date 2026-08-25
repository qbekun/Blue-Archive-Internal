#pragma once
#include "../unitysdk.h"

namespace TriInspector { class TriMessageType; }

#define TRIINSPECTOR_DROPDOWNATTRIBUTE_SET_VALIDATIONMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x9DCE970)
#define TRIINSPECTOR_DROPDOWNATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE980)
#define TRIINSPECTOR_DROPDOWNATTRIBUTE_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x9DCE9C0)
#define TRIINSPECTOR_DROPDOWNATTRIBUTE_GET_VALIDATIONMESSAGETYPE_OFFSET UNITYSDK_OFFSET(0x9DCE9D0)

namespace TriInspector
{
	inline static constexpr unsigned int DropdownAttribute_TypeDefinitionIndex = 37822;

	class DropdownAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _Values_k__BackingField; // 0x10
		::TriInspector::TriMessageType* _ValidationMessageType_k__BackingField; // 0x18

		::System::Void set_ValidationMessageType(::TriInspector::TriMessageType* arg)
		{
			((::System::Void(*)(::TriInspector::TriMessageType*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DROPDOWNATTRIBUTE_SET_VALIDATIONMESSAGETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DROPDOWNATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Values()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DROPDOWNATTRIBUTE_GET_VALUES_OFFSET))(nullptr);
		}

		::TriInspector::TriMessageType* get_ValidationMessageType()
		{
			return (return (::TriInspector::TriMessageType*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DROPDOWNATTRIBUTE_GET_VALIDATIONMESSAGETYPE_OFFSET))(nullptr);
		}

	};
}

