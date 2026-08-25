#pragma once
#include "../unitysdk.h"

#define MXUNDERCOVER_FILESELECTFROMSOLOCATIONATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xDBD8C0)

namespace MXUnderCover
{
	inline static constexpr unsigned int FileSelectFromSOLocationAttribute_TypeDefinitionIndex = 9999;

	class FileSelectFromSOLocationAttribute : public Il2CppObject
	{
	public:
		::System::String* SerchFilter; // 0x18
		::System::Boolean WithOutExtension; // 0x20
		::System::Boolean ShowPropertyName; // 0x21

		::System::Void .ctor(::System::String* str, ::System::Boolean arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_FILESELECTFROMSOLOCATIONATTRIBUTE_.CTOR_OFFSET))(str, arg, arg2, nullptr);
		}

	};
}

