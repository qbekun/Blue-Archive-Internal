#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_WRITERCONFIG_GET_OUTPUTFILENAME_OFFSET UNITYSDK_OFFSET(0x17F9D60)
#define MX_GAMEDATA_REPOSITORY_WRITERCONFIG_SET_OUTPUTFILENAME_OFFSET UNITYSDK_OFFSET(0x17F9D70)
#define MX_GAMEDATA_REPOSITORY_WRITERCONFIG_GET_OUTPUTPATH_OFFSET UNITYSDK_OFFSET(0x17F9D80)
#define MX_GAMEDATA_REPOSITORY_WRITERCONFIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F9D90)
#define MX_GAMEDATA_REPOSITORY_WRITERCONFIG_SET_OUTPUTPATH_OFFSET UNITYSDK_OFFSET(0x17F9DA0)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int WriterConfig_TypeDefinitionIndex = 15665;

	class WriterConfig : public Il2CppObject
	{
	public:
		::System::String* _OutputPath_k__BackingField; // 0x10
		::System::String* _OutputFileName_k__BackingField; // 0x18

		::System::String* get_OutputFileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_WRITERCONFIG_GET_OUTPUTFILENAME_OFFSET))(nullptr);
		}

		::System::Void set_OutputFileName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_WRITERCONFIG_SET_OUTPUTFILENAME_OFFSET))(str, nullptr);
		}

		::System::String* get_OutputPath()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_WRITERCONFIG_GET_OUTPUTPATH_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_WRITERCONFIG_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_OutputPath(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_WRITERCONFIG_SET_OUTPUTPATH_OFFSET))(str, nullptr);
		}

	};
}

