#pragma once
#include "unitysdk.h"

#define MISSINGEXPORTEDFUNCTIONEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB19E0)

	inline static constexpr unsigned int MissingExportedFunctionException_TypeDefinitionIndex = 25421;

	class MissingExportedFunctionException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MISSINGEXPORTEDFUNCTIONEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

	};

