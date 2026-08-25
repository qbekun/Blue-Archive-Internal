#pragma once
#include "../../../unitysdk.h"

#define MX_GAMEDATA_REPOSITORY_READERCONFIG_SET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x17F9CF0)
#define MX_GAMEDATA_REPOSITORY_READERCONFIG_SET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x17F9D00)
#define MX_GAMEDATA_REPOSITORY_READERCONFIG_GET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x17F9D10)
#define MX_GAMEDATA_REPOSITORY_READERCONFIG_.CTOR_OFFSET UNITYSDK_OFFSET(0x17F9D20)
#define MX_GAMEDATA_REPOSITORY_READERCONFIG_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x17F9D30)
#define MX_GAMEDATA_REPOSITORY_READERCONFIG_GET_PATH_OFFSET UNITYSDK_OFFSET(0x17F9D40)
#define MX_GAMEDATA_REPOSITORY_READERCONFIG_SET_PATH_OFFSET UNITYSDK_OFFSET(0x17F9D50)

namespace MX::GameData::Repository
{
	inline static constexpr unsigned int ReaderConfig_TypeDefinitionIndex = 15663;

	class ReaderConfig : public Il2CppObject
	{
	public:
		::System::String* _Path_k__BackingField; // 0x10
		::System::String* _Extension_k__BackingField; // 0x18
		::System::String* _TypeName_k__BackingField; // 0x20

		::System::Void set_Extension(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_READERCONFIG_SET_EXTENSION_OFFSET))(str, nullptr);
		}

		::System::Void set_TypeName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_READERCONFIG_SET_TYPENAME_OFFSET))(str, nullptr);
		}

		::System::String* get_Extension()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_READERCONFIG_GET_EXTENSION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_READERCONFIG_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_READERCONFIG_GET_TYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_Path()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_READERCONFIG_GET_PATH_OFFSET))(nullptr);
		}

		::System::Void set_Path(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_GAMEDATA_REPOSITORY_READERCONFIG_SET_PATH_OFFSET))(str, nullptr);
		}

	};
}

