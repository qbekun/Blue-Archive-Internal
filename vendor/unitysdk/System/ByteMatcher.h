#pragma once
#include "../unitysdk.h"

#define SYSTEM_BYTEMATCHER_ADDMAPPING_OFFSET UNITYSDK_OFFSET(0x93C5C10)
#define SYSTEM_BYTEMATCHER_SORT_OFFSET UNITYSDK_OFFSET(0x93C5D20)
#define SYSTEM_BYTEMATCHER_STARTSWITH_OFFSET UNITYSDK_OFFSET(0x93C17B0)
#define SYSTEM_BYTEMATCHER_MATCH_OFFSET UNITYSDK_OFFSET(0x93C1820)
#define SYSTEM_BYTEMATCHER_.CTOR_OFFSET UNITYSDK_OFFSET(0x93C5B30)

namespace System
{
	inline static constexpr unsigned int ByteMatcher_TypeDefinitionIndex = 23995;

	class ByteMatcher : public Il2CppObject
	{
	public:
		::System::Collections::Hashtable* map; // 0x10
		::System::Collections::Hashtable* starts; // 0x18

		::System::Void AddMapping(::System::TermInfoStrings* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::TermInfoStrings*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_ADDMAPPING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Sort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_SORT_OFFSET))(nullptr);
		}

		::System::Boolean StartsWith(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_STARTSWITH_OFFSET))(arg, nullptr);
		}

		::System::TermInfoStrings* Match(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::TermInfoStrings*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_MATCH_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BYTEMATCHER_.CTOR_OFFSET))(nullptr);
		}

	};
}

