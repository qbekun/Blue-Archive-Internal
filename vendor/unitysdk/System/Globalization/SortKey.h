#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_SORTKEY_COMPARE_OFFSET UNITYSDK_OFFSET(0x92A6940)
#define SYSTEM_GLOBALIZATION_SORTKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A6AD0)
#define SYSTEM_GLOBALIZATION_SORTKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A6BB0)
#define SYSTEM_GLOBALIZATION_SORTKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A6C10)
#define SYSTEM_GLOBALIZATION_SORTKEY_GET_ORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x92A6C60)
#define SYSTEM_GLOBALIZATION_SORTKEY_GET_KEYDATA_OFFSET UNITYSDK_OFFSET(0x92A6C70)
#define SYSTEM_GLOBALIZATION_SORTKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0x92A6C80)
#define SYSTEM_GLOBALIZATION_SORTKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x92A6D10)
#define SYSTEM_GLOBALIZATION_SORTKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92A6DE0)
#define SYSTEM_GLOBALIZATION_SORTKEY_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A7040)

namespace System::Globalization
{
	inline static constexpr unsigned int SortKey_TypeDefinitionIndex = 25002;

	class SortKey : public Il2CppObject
	{
	public:
		::System::String* source; // 0x10
		::Il2CppArray<::System::Object*>* key; // 0x18
		::System::Globalization::CompareOptions* options; // 0x20
		::System::Int32 lcid; // 0x24

		::System::Int32 Compare(::System::Globalization::SortKey* arg, ::System::Globalization::SortKey* arg)
		{
			return (return (::System::Int32(*)(::System::Globalization::SortKey*, ::System::Globalization::SortKey*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::System::Globalization::CompareOptions* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::System::Globalization::CompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_.CTOR_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Globalization::CompareOptions* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Globalization::CompareOptions*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_.CTOR_OFFSET))(arg, str, arg, arg, arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Globalization::CompareOptions* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Globalization::CompareOptions*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_.CTOR_OFFSET))(str, str, arg, arg, nullptr);
		}

		::System::String* get_OriginalString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_GET_ORIGINALSTRING_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_KeyData()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_GET_KEYDATA_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_SORTKEY_.CTOR_OFFSET))(nullptr);
		}

	};
}

