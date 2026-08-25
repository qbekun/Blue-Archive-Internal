#pragma once
#include "../unitysdk.h"

namespace NPA { class NXPToyFileLogger; }

#define NPA_NXPTOYFILELOGGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9BC7AA0)
#define NPA_NXPTOYFILELOGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BC7C90)
#define NPA_NXPTOYFILELOGGER_WRITEFILE_OFFSET UNITYSDK_OFFSET(0x9BC7CA0)
#define NPA_NXPTOYFILELOGGER_CLOSEFILE_OFFSET UNITYSDK_OFFSET(0x9BC82E0)
#define NPA_NXPTOYFILELOGGER_SETDATAROOTDIRECTORY_OFFSET UNITYSDK_OFFSET(0x9BC8400)
#define NPA_NXPTOYFILELOGGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9BC8410)

namespace NPA
{
	inline static constexpr unsigned int NXPToyFileLogger_TypeDefinitionIndex = 25607;

	class NXPToyFileLogger : public Il2CppObject
	{
	public:
		::NPA::NXPToyFileLogger* instance; // 0x0
		::System::Object* fileLoggerSyncObject; // 0x8
		::System::IO::StreamWriter* writer; // 0x10
		::System::String* dataPath; // 0x10

		::NPA::NXPToyFileLogger* get_Instance()
		{
			return (return (::NPA::NXPToyFileLogger*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYFILELOGGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYFILELOGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void WriteFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYFILELOGGER_WRITEFILE_OFFSET))(str, nullptr);
		}

		::System::Void CloseFile()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYFILELOGGER_CLOSEFILE_OFFSET))(nullptr);
		}

		::System::Void SetDataRootDirectory(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYFILELOGGER_SETDATAROOTDIRECTORY_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_NXPTOYFILELOGGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

