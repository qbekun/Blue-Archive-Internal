#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstValKind; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstVal; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90BA8C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OBJECTVAL_OFFSET UNITYSDK_OFFSET(0x90BA8D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_BOOLEANVAL_OFFSET UNITYSDK_OFFSET(0x90BA8E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_SBYTEVAL_OFFSET UNITYSDK_OFFSET(0x90BA940)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_BYTEVAL_OFFSET UNITYSDK_OFFSET(0x90BA9A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_INT16VAL_OFFSET UNITYSDK_OFFSET(0x90BAA00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_UINT16VAL_OFFSET UNITYSDK_OFFSET(0x90BAA60)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_INT32VAL_OFFSET UNITYSDK_OFFSET(0x90BAAC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_UINT32VAL_OFFSET UNITYSDK_OFFSET(0x90BAB20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_INT64VAL_OFFSET UNITYSDK_OFFSET(0x90B56E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_UINT64VAL_OFFSET UNITYSDK_OFFSET(0x90BAB80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_SINGLEVAL_OFFSET UNITYSDK_OFFSET(0x90BABE0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_DOUBLEVAL_OFFSET UNITYSDK_OFFSET(0x90BAC40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_DECIMALVAL_OFFSET UNITYSDK_OFFSET(0x90BACA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_CHARVAL_OFFSET UNITYSDK_OFFSET(0x90BAD10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_STRINGVAL_OFFSET UNITYSDK_OFFSET(0x90BAD70)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_ISNULLREF_OFFSET UNITYSDK_OFFSET(0x90B57C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_ISZERO_OFFSET UNITYSDK_OFFSET(0x90BADD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_SPECIALUNBOX_OFFSET UNITYSDK_OFFSET(0x000000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x90BAF30)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GETDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x90B8320)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET UNITYSDK_OFFSET(0x90BB190)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET UNITYSDK_OFFSET(0x90BB220)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET UNITYSDK_OFFSET(0x90BB2B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET UNITYSDK_OFFSET(0x90BB310)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET UNITYSDK_OFFSET(0x90BB370)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET UNITYSDK_OFFSET(0x90BB390)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET UNITYSDK_OFFSET(0x90BB3F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET UNITYSDK_OFFSET(0x90BB450)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET UNITYSDK_OFFSET(0x90BB4B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET UNITYSDK_OFFSET(0x90B5740)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90BB510)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int ConstVal_TypeDefinitionIndex = 34485;

	class ConstVal : public Il2CppObject
	{
	public:
		::System::Object* s_false; // 0x0
		::System::Object* s_true; // 0x8
		::System::Object* s_zeroInt32; // 0x10
		::System::Object* _ObjectVal_k__BackingField; // 0x10

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_ObjectVal()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OBJECTVAL_OFFSET))(nullptr);
		}

		::System::Boolean get_BooleanVal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_BOOLEANVAL_OFFSET))(nullptr);
		}

		::System::SByte get_SByteVal()
		{
			return (return (::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_SBYTEVAL_OFFSET))(nullptr);
		}

		::System::Byte get_ByteVal()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_BYTEVAL_OFFSET))(nullptr);
		}

		::System::Int16 get_Int16Val()
		{
			return (return (::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_INT16VAL_OFFSET))(nullptr);
		}

		::System::UInt16 get_UInt16Val()
		{
			return (return (::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_UINT16VAL_OFFSET))(nullptr);
		}

		::System::Int32 get_Int32Val()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_INT32VAL_OFFSET))(nullptr);
		}

		::System::UInt32 get_UInt32Val()
		{
			return (return (::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_UINT32VAL_OFFSET))(nullptr);
		}

		::System::Int64 get_Int64Val()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_INT64VAL_OFFSET))(nullptr);
		}

		::System::UInt64 get_UInt64Val()
		{
			return (return (::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_UINT64VAL_OFFSET))(nullptr);
		}

		::System::Single get_SingleVal()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_SINGLEVAL_OFFSET))(nullptr);
		}

		::System::Double get_DoubleVal()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_DOUBLEVAL_OFFSET))(nullptr);
		}

		::System::Decimal* get_DecimalVal()
		{
			return (return (::System::Decimal*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_DECIMALVAL_OFFSET))(nullptr);
		}

		::System::Char get_CharVal()
		{
			return (return (::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_CHARVAL_OFFSET))(nullptr);
		}

		::System::String* get_StringVal()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_STRINGVAL_OFFSET))(nullptr);
		}

		::System::Boolean get_IsNullRef()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_ISNULLREF_OFFSET))(nullptr);
		}

		::System::Boolean IsZero(::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_ISZERO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* SpecialUnbox(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_SPECIALUNBOX_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDefault(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_ISDEFAULT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* GetDefaultValue(::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ConstValKind*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GETDEFAULTVALUE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* Get(::System::Boolean arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* Get(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* Get(::System::UInt32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* Get(::System::Decimal* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* Get(::System::String* str)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET))(str, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* Get(::System::Single arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* Get(::System::Double arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* Get(::System::Int64 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* Get(::System::UInt64 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* Get(::System::Object* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_GET_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_CONSTVAL_.CCTOR_OFFSET))(nullptr);
		}

	};
}

