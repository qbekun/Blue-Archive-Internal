#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DECLAREFOLDOUTGROUPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE4B0)
#define TRIINSPECTOR_DECLAREFOLDOUTGROUPATTRIBUTE_SET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x9DCE530)
#define TRIINSPECTOR_DECLAREFOLDOUTGROUPATTRIBUTE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9DCE540)
#define TRIINSPECTOR_DECLAREFOLDOUTGROUPATTRIBUTE_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x9DCE550)
#define TRIINSPECTOR_DECLAREFOLDOUTGROUPATTRIBUTE_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x9DCE560)

namespace TriInspector
{
	inline static constexpr unsigned int DeclareFoldoutGroupAttribute_TypeDefinitionIndex = 37810;

	class DeclareFoldoutGroupAttribute : public Il2CppObject
	{
	public:
		::System::String* _Title_k__BackingField; // 0x18
		::System::Boolean _Expanded_k__BackingField; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREFOLDOUTGROUPATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_Expanded(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREFOLDOUTGROUPATTRIBUTE_SET_EXPANDED_OFFSET))(arg, nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREFOLDOUTGROUPATTRIBUTE_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Boolean get_Expanded()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREFOLDOUTGROUPATTRIBUTE_GET_EXPANDED_OFFSET))(nullptr);
		}

		::System::Void set_Title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREFOLDOUTGROUPATTRIBUTE_SET_TITLE_OFFSET))(str, nullptr);
		}

	};
}

