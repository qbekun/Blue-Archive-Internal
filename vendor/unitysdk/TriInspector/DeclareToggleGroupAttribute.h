#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DECLARETOGGLEGROUPATTRIBUTE_GET_COLLAPSIBLE_OFFSET UNITYSDK_OFFSET(0x9DCE680)
#define TRIINSPECTOR_DECLARETOGGLEGROUPATTRIBUTE_SET_COLLAPSIBLE_OFFSET UNITYSDK_OFFSET(0x9DCE690)
#define TRIINSPECTOR_DECLARETOGGLEGROUPATTRIBUTE_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x9DCE6A0)
#define TRIINSPECTOR_DECLARETOGGLEGROUPATTRIBUTE_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x9DCE6B0)
#define TRIINSPECTOR_DECLARETOGGLEGROUPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE6C0)

namespace TriInspector
{
	inline static constexpr unsigned int DeclareToggleGroupAttribute_TypeDefinitionIndex = 37814;

	class DeclareToggleGroupAttribute : public Il2CppObject
	{
	public:
		::System::String* _Title_k__BackingField; // 0x18
		::System::Boolean _Collapsible_k__BackingField; // 0x20

		::System::Boolean get_Collapsible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLARETOGGLEGROUPATTRIBUTE_GET_COLLAPSIBLE_OFFSET))(nullptr);
		}

		::System::Void set_Collapsible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLARETOGGLEGROUPATTRIBUTE_SET_COLLAPSIBLE_OFFSET))(arg, nullptr);
		}

		::System::String* get_Title()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLARETOGGLEGROUPATTRIBUTE_GET_TITLE_OFFSET))(nullptr);
		}

		::System::Void set_Title(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLARETOGGLEGROUPATTRIBUTE_SET_TITLE_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLARETOGGLEGROUPATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

