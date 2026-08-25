#pragma once
#include "unitysdk.h"

#define FILESERVICE_WRITE_OFFSET UNITYSDK_OFFSET(0x1FC9B80)
#define FILESERVICE_WRITE_OFFSET UNITYSDK_OFFSET(0x1FC9E40)

	inline static constexpr unsigned int FileService_TypeDefinitionIndex = 2980;

	class FileService : public Il2CppObject
	{
	public:
		::System::Void Write(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + FILESERVICE_WRITE_OFFSET))(str, str2, nullptr);
		}

		::System::Void Write(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + FILESERVICE_WRITE_OFFSET))(str, arg, nullptr);
		}

	};

