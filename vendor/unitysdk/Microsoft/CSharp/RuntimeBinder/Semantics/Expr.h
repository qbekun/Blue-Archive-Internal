#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ExpressionKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CE0F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_RUNTIMEOBJECT_OFFSET UNITYSDK_OFFSET(0x90CEF10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_RUNTIMEOBJECT_OFFSET UNITYSDK_OFFSET(0x90CEF20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_RUNTIMEOBJECTACTUALTYPE_OFFSET UNITYSDK_OFFSET(0x90CEF30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_RUNTIMEOBJECTACTUALTYPE_OFFSET UNITYSDK_OFFSET(0x90CEF40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_KIND_OFFSET UNITYSDK_OFFSET(0x90CEF50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x90CEF60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x90CEF70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_ISOPTIONALARGUMENT_OFFSET UNITYSDK_OFFSET(0x90CEF80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_ISOPTIONALARGUMENT_OFFSET UNITYSDK_OFFSET(0x90CEF90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_ERRORSTRING_OFFSET UNITYSDK_OFFSET(0x90CEFA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_ERRORSTRING_OFFSET UNITYSDK_OFFSET(0x90CEFB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x90CEFC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x90CEFD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_OBJECT_OFFSET UNITYSDK_OFFSET(0x90CEFE0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int Expr_TypeDefinitionIndex = 34565;

	class Expr : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _type; // 0x10
		::System::Object* _RuntimeObject_k__BackingField; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _RuntimeObjectActualType_k__BackingField; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* _Kind_k__BackingField; // 0x28
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* _Flags_k__BackingField; // 0x2C
		::System::Boolean _IsOptionalArgument_k__BackingField; // 0x30
		::System::String* _ErrorString_k__BackingField; // 0x38

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_RuntimeObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_RUNTIMEOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_RuntimeObject(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_RUNTIMEOBJECT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_RuntimeObjectActualType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_RUNTIMEOBJECTACTUALTYPE_OFFSET))(nullptr);
		}

		::System::Void set_RuntimeObjectActualType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_RUNTIMEOBJECTACTUALTYPE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind* get_Kind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ExpressionKind*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_KIND_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* get_Flags()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_FLAGS_OFFSET))(nullptr);
		}

		::System::Void set_Flags(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_FLAGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsOptionalArgument()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_ISOPTIONALARGUMENT_OFFSET))(nullptr);
		}

		::System::Void set_IsOptionalArgument(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_ISOPTIONALARGUMENT_OFFSET))(arg, nullptr);
		}

		::System::String* get_ErrorString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_ERRORSTRING_OFFSET))(nullptr);
		}

		::System::Void set_ErrorString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_ERRORSTRING_OFFSET))(str, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* get_Type()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_TYPE_OFFSET))(nullptr);
		}

		::System::Void set_Type(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_SET_TYPE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Object()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_EXPR_GET_OBJECT_OFFSET))(nullptr);
		}

	};
}

