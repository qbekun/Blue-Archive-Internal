#pragma once
#include "../../unitysdk.h"

#define NPA_EDITOR_FILELOGINTERNAL_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x9D4FA50)

namespace NPA::Editor
{
	inline static constexpr unsigned int FileLogInternal_TypeDefinitionIndex = 26177;

	class FileLogInternal : public Il2CppObject
	{
	public:
		::System::Void Enqueue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_FILELOGINTERNAL_ENQUEUE_OFFSET))(str, nullptr);
		}

	};
}

