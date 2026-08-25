#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_INDENTATTRIBUTE_GET_INDENT_OFFSET UNITYSDK_OFFSET(0x9DCEF30)
#define TRIINSPECTOR_INDENTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEF40)
#define TRIINSPECTOR_INDENTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCEF60)

namespace TriInspector
{
	inline static constexpr unsigned int IndentAttribute_TypeDefinitionIndex = 37837;

	class IndentAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::Int32 _Indent_k__BackingField; // 0x10

		::System::Int32 get_Indent()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INDENTATTRIBUTE_GET_INDENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INDENTATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_INDENTATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

