#pragma once
#include "../unitysdk.h"

#define TRIINSPECTOR_DECLARETABGROUPATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DCE610)

namespace TriInspector
{
	inline static constexpr unsigned int DeclareTabGroupAttribute_TypeDefinitionIndex = 37813;

	class DeclareTabGroupAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + TRIINSPECTOR_DECLARETABGROUPATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

	};
}

