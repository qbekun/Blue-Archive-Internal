#pragma once
#include "unitysdk.h"

#define FORMATPARAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x93C76D0)
#define FORMATPARAM_.CTOR_OFFSET UNITYSDK_OFFSET(0x93C76F0)
#define FORMATPARAM_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x93C2CF0)
#define FORMATPARAM_GET_INT32_OFFSET UNITYSDK_OFFSET(0x93C7710)
#define FORMATPARAM_GET_STRING_OFFSET UNITYSDK_OFFSET(0x93C6D90)
#define FORMATPARAM_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x93C6DF0)

	inline static constexpr unsigned int FormatParam_TypeDefinitionIndex = 23992;

	class FormatParam : public Il2CppObject
	{
	public:
		::System::Int32 _int32; // 0x10
		::System::String* _string; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FORMATPARAM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + FORMATPARAM_.CTOR_OFFSET))(arg, str, nullptr);
		}

		FormatParam* op_Implicit(::System::Int32 arg)
		{
			return (return (FormatParam*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FORMATPARAM_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Int32()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATPARAM_GET_INT32_OFFSET))(nullptr);
		}

		::System::String* get_String()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATPARAM_GET_STRING_OFFSET))(nullptr);
		}

		::System::Object* get_Object()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FORMATPARAM_GET_OBJECT_OFFSET))(nullptr);
		}

	};

