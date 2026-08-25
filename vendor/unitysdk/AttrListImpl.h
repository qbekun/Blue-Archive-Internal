#pragma once
#include "unitysdk.h"

#define ATTRLISTIMPL_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9124380)
#define ATTRLISTIMPL_GETNAME_OFFSET UNITYSDK_OFFSET(0x91243C0)
#define ATTRLISTIMPL_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9124410)
#define ATTRLISTIMPL_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9124460)
#define ATTRLISTIMPL_GET_NAMES_OFFSET UNITYSDK_OFFSET(0x9124500)
#define ATTRLISTIMPL_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x9124550)
#define ATTRLISTIMPL_CLEAR_OFFSET UNITYSDK_OFFSET(0x9123A30)
#define ATTRLISTIMPL_ADD_OFFSET UNITYSDK_OFFSET(0x9124270)
#define ATTRLISTIMPL_.CTOR_OFFSET UNITYSDK_OFFSET(0x91221E0)

	inline static constexpr unsigned int AttrListImpl_TypeDefinitionIndex = 23595;

	class AttrListImpl : public Il2CppObject
	{
	public:
		Il2CppObject* attrNames; // 0x10
		Il2CppObject* attrValues; // 0x18

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRLISTIMPL_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::String* GetName(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ATTRLISTIMPL_GETNAME_OFFSET))(arg, nullptr);
		}

		::System::String* GetValue(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ATTRLISTIMPL_GETVALUE_OFFSET))(arg, nullptr);
		}

		::System::String* GetValue(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRLISTIMPL_GETVALUE_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Names()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRLISTIMPL_GET_NAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Values()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRLISTIMPL_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRLISTIMPL_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Add(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRLISTIMPL_ADD_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRLISTIMPL_.CTOR_OFFSET))(nullptr);
		}

	};

