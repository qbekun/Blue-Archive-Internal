#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DECLAREVERTICALGROUPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE740)

namespace TriInspector
{
	inline static constexpr unsigned int DeclareVerticalGroupAttribute_TypeDefinitionIndex = 37815;

	class DeclareVerticalGroupAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLAREVERTICALGROUPATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

