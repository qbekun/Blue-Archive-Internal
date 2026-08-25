#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_HWSTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x99ABBF0)
#define SYSTEM_XML_HWSTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x99ABC60)
#define SYSTEM_XML_HWSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x99ABCD0)
#define SYSTEM_XML_HWSTACK_POP_OFFSET UNITYSDK_OFFSET(0x99ABDF0)
#define SYSTEM_XML_HWSTACK_PEEK_OFFSET UNITYSDK_OFFSET(0x99ABE30)
#define SYSTEM_XML_HWSTACK_ADDTOTOP_OFFSET UNITYSDK_OFFSET(0x99ABE70)
#define SYSTEM_XML_HWSTACK_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x99ABEF0)
#define SYSTEM_XML_HWSTACK_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x99ABF70)
#define SYSTEM_XML_HWSTACK_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x99AC030)
#define SYSTEM_XML_HWSTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x99AC040)
#define SYSTEM_XML_HWSTACK_CLONE_OFFSET UNITYSDK_OFFSET(0x99AC090)

namespace System::Xml
{
	inline static constexpr unsigned int HWStack_TypeDefinitionIndex = 27788;

	class HWStack : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* stack; // 0x10
		::System::Int32 growthRate; // 0x18
		::System::Int32 used; // 0x1C
		::System::Int32 size; // 0x20
		::System::Int32 limit; // 0x24

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* Push()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_PUSH_OFFSET))(nullptr);
		}

		::System::Object* Pop()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_POP_OFFSET))(nullptr);
		}

		::System::Object* Peek()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_PEEK_OFFSET))(nullptr);
		}

		::System::Void AddToTop(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_ADDTOTOP_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_HWSTACK_CLONE_OFFSET))(nullptr);
		}

	};
}

