#pragma once
#include "../../unitysdk.h"

#define NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x944A390)
#define NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x944A3D0)
#define NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_GET_OFFSET UNITYSDK_OFFSET(0x944A440)
#define NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x944A790)
#define NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_ADDENTRY_OFFSET UNITYSDK_OFFSET(0x944A940)
#define NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_GROW_OFFSET UNITYSDK_OFFSET(0x944AAC0)
#define NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_TEXTEQUALS_OFFSET UNITYSDK_OFFSET(0x944A6F0)

namespace Newtonsoft::Json
{
	inline static constexpr unsigned int DefaultJsonNameTable_TypeDefinitionIndex = 31674;

	class DefaultJsonNameTable : public Il2CppObject
	{
	public:
		::System::Int32 HashCodeRandomizer; // 0x0
		::System::Int32 _count; // 0x10
		::Il2CppArray<::System::Object*>* _entries; // 0x18
		::System::Int32 _mask; // 0x20

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_.CTOR_OFFSET))(nullptr);
		}

		::System::String* Get(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_GET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* Add(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_ADD_OFFSET))(str, nullptr);
		}

		::System::String* AddEntry(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_ADDENTRY_OFFSET))(str, arg, nullptr);
		}

		::System::Void Grow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_GROW_OFFSET))(nullptr);
		}

		::System::Boolean TextEquals(::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_DEFAULTJSONNAMETABLE_TEXTEQUALS_OFFSET))(str, arg, arg, arg, nullptr);
		}

	};
}

