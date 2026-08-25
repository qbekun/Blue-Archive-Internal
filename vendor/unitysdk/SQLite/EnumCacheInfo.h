#pragma once
#include "../unitysdk.h"

#define SQLITE_ENUMCACHEINFO_SET_STOREASTEXT_OFFSET UNITYSDK_OFFSET(0xA23230)
#define SQLITE_ENUMCACHEINFO_GET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0xA23240)
#define SQLITE_ENUMCACHEINFO_SET_ENUMVALUES_OFFSET UNITYSDK_OFFSET(0xA23250)
#define SQLITE_ENUMCACHEINFO_GET_STOREASTEXT_OFFSET UNITYSDK_OFFSET(0xA23260)
#define SQLITE_ENUMCACHEINFO_GET_ISENUM_OFFSET UNITYSDK_OFFSET(0xA23270)
#define SQLITE_ENUMCACHEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xA23280)
#define SQLITE_ENUMCACHEINFO_SET_ISENUM_OFFSET UNITYSDK_OFFSET(0xA237A0)

namespace SQLite
{
	inline static constexpr unsigned int EnumCacheInfo_TypeDefinitionIndex = 36615;

	class EnumCacheInfo : public Il2CppObject
	{
	public:
		::System::Boolean _IsEnum_k__BackingField; // 0x10
		::System::Boolean _StoreAsText_k__BackingField; // 0x11
		Il2CppObject* _EnumValues_k__BackingField; // 0x18

		::System::Void set_StoreAsText(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_SET_STOREASTEXT_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_EnumValues()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_GET_ENUMVALUES_OFFSET))(nullptr);
		}

		::System::Void set_EnumValues(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_SET_ENUMVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_StoreAsText()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_GET_STOREASTEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEnum()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_GET_ISENUM_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsEnum(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SQLITE_ENUMCACHEINFO_SET_ISENUM_OFFSET))(arg, nullptr);
		}

	};
}

