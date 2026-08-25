#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_FILESELECTFROMDIRECTORYATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBD900)

namespace MXUnderCover
{
	inline static constexpr unsigned int FileSelectFromDirectoryAttribute_TypeDefinitionIndex = 10000;

	class FileSelectFromDirectoryAttribute : public Il2CppObject
	{
	public:
		::System::String* Directory; // 0x18
		::System::String* SerchFilter; // 0x20
		::System::Boolean WithOutExtension; // 0x28
		::System::Boolean ShowPropertyName; // 0x29

		::System::Void .ctor(::System::String* str, ::System::String* str2, ::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_FILESELECTFROMDIRECTORYATTRIBUTE_.CTOR_OFFSET))(str, str2, arg, arg2, nullptr);
		}

	};
}

