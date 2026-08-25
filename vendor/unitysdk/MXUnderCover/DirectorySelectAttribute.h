#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_DIRECTORYSELECTATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBD960)

namespace MXUnderCover
{
	inline static constexpr unsigned int DirectorySelectAttribute_TypeDefinitionIndex = 10001;

	class DirectorySelectAttribute : public Il2CppObject
	{
	public:
		::System::String* DirectoryRoot; // 0x18
		::System::Boolean ShowPropertyName; // 0x20

		::System::Void .ctor(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_DIRECTORYSELECTATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};
}

