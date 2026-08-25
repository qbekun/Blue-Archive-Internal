#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DECLAREBOXGROUPATTRIBUTE_SET_HIDETITLE_OFFSET UNITYSDK_OFFSET(0x9DCE380)
#define TRIINSPECTOR_DECLAREBOXGROUPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE390)
#define TRIINSPECTOR_DECLAREBOXGROUPATTRIBUTE_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x9DCE480)
#define TRIINSPECTOR_DECLAREBOXGROUPATTRIBUTE_GET_HIDETITLE_OFFSET UNITYSDK_OFFSET(0x9DCE490)
#define TRIINSPECTOR_DECLAREBOXGROUPATTRIBUTE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9DCE4A0)

namespace TriInspector
{
	inline static constexpr unsigned int DeclareBoxGroupAttribute_TypeDefinitionIndex = 37809;

	class DeclareBoxGroupAttribute : public Il2CppObject
	{
	public:
		::System::String* _Title_k__BackingField; // 0x18
		::System::Boolean _HideTitle_k__BackingField; // 0x20

		::System::Void set_HideTitle(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREBOXGROUPATTRIBUTE_SET_HIDETITLE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREBOXGROUPATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void set_Title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREBOXGROUPATTRIBUTE_SET_TITLE_OFFSET))(str, nullptr);
		}

		::System::Boolean get_HideTitle()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREBOXGROUPATTRIBUTE_GET_HIDETITLE_OFFSET))(nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREBOXGROUPATTRIBUTE_GET_TITLE_OFFSET))(nullptr);
		}

	};
}

