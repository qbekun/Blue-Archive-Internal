#pragma once
#include "unitysdk.h"

#define IATTRLIST_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x000000)
#define IATTRLIST_GETNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define IATTRLIST_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IATTRLIST_GETVALUE_OFFSET UNITYSDK_OFFSET(0x000000)
#define IATTRLIST_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x000000)
#define IATTRLIST_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int IAttrList_TypeDefinitionIndex = 23594;

	class IAttrList : public Il2CppObject
	{
	public:
		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IATTRLIST_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::String* GetName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IATTRLIST_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetValue(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + IATTRLIST_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* GetValue(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + IATTRLIST_GETVALUE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Names()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IATTRLIST_GET_NAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Values()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IATTRLIST_GET_VALUES_OFFSET))(nullptr);
		}

	};

