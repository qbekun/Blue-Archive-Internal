#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_TEXTAREAATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22CB10)

namespace UnityEngine
{
	inline static constexpr unsigned int TextAreaAttribute_TypeDefinitionIndex = 31118;

	class TextAreaAttribute : public Il2CppObject
	{
	public:
		::System::Int32 minLines; // 0x18
		::System::Int32 maxLines; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TEXTAREAATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

