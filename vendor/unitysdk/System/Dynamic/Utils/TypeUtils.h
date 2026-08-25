#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x96C0D90)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x96C0EE0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x96C0E30)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLEORREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x96C1030)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISBOOL_OFFSET UNITYSDK_OFFSET(0x96C10A0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0x96C1140)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x96C1280)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISARITHMETIC_OFFSET UNITYSDK_OFFSET(0x96C13C0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISUNSIGNEDINT_OFFSET UNITYSDK_OFFSET(0x96C1500)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGERORBOOL_OFFSET UNITYSDK_OFFSET(0x96C1620)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERICORBOOL_OFFSET UNITYSDK_OFFSET(0x96C1760)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISVALIDINSTANCETYPE_OFFSET UNITYSDK_OFFSET(0x96C17F0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASIDENTITYPRIMITIVEORNULLABLECONVERSIONTO_OFFSET UNITYSDK_OFFSET(0x96C1C90)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCECONVERSIONTO_OFFSET UNITYSDK_OFFSET(0x96C21C0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_STRICTHASREFERENCECONVERSIONTO_OFFSET UNITYSDK_OFFSET(0x96C2940)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASARRAYTOINTERFACECONVERSION_OFFSET UNITYSDK_OFFSET(0x96C2D90)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASINTERFACETOARRAYCONVERSION_OFFSET UNITYSDK_OFFSET(0x96C3070)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCOVARIANT_OFFSET UNITYSDK_OFFSET(0x96C3370)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONTRAVARIANT_OFFSET UNITYSDK_OFFSET(0x96C33A0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINVARIANT_OFFSET UNITYSDK_OFFSET(0x96C33D0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISDELEGATE_OFFSET UNITYSDK_OFFSET(0x96C3400)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISLEGALEXPLICITVARIANTDELEGATECONVERSION_OFFSET UNITYSDK_OFFSET(0x96C2400)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x96C2070)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCEEQUALITY_OFFSET UNITYSDK_OFFSET(0x96C3490)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASBUILTINEQUALITYOPERATOR_OFFSET UNITYSDK_OFFSET(0x96C3570)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITLYCONVERTIBLETO_OFFSET UNITYSDK_OFFSET(0x96C3820)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETUSERDEFINEDCOERCIONMETHOD_OFFSET UNITYSDK_OFFSET(0x96C3DC0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDCONVERSIONOPERATOR_OFFSET UNITYSDK_OFFSET(0x96C4120)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNUMERICCONVERSION_OFFSET UNITYSDK_OFFSET(0x96C39D0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITREFERENCECONVERSION_OFFSET UNITYSDK_OFFSET(0x96C3340)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITBOXINGCONVERSION_OFFSET UNITYSDK_OFFSET(0x96C3BC0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNULLABLECONVERSION_OFFSET UNITYSDK_OFFSET(0x96C3D10)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x96C4400)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETBOOLEANOPERATOR_OFFSET UNITYSDK_OFFSET(0x96C4960)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONREFTYPE_OFFSET UNITYSDK_OFFSET(0x96C4B80)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x96BD780)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREREFERENCEASSIGNABLE_OFFSET UNITYSDK_OFFSET(0x96BF9F0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISSAMEORSUBCLASS_OFFSET UNITYSDK_OFFSET(0x96BFC50)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET UNITYSDK_OFFSET(0x96C4BD0)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET UNITYSDK_OFFSET(0x96BF920)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET UNITYSDK_OFFSET(0x96C4C30)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETINVOKEMETHOD_OFFSET UNITYSDK_OFFSET(0x96C4D30)
#define SYSTEM_DYNAMIC_UTILS_TYPEUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96C4D80)

namespace System::Dynamic::Utils
{
	inline static constexpr unsigned int TypeUtils_TypeDefinitionIndex = 33582;

	class TypeUtils : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_arrayAssignableInterfaces; // 0x0

		::System::Type* GetNonNullableType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONNULLABLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetNullableType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNULLABLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNullableType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNullableOrReferenceType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNULLABLEORREFERENCETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsBool(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISBOOL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNumeric(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERIC_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInteger(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGER_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsArithmetic(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISARITHMETIC_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsUnsignedInt(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISUNSIGNEDINT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsIntegerOrBool(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINTEGERORBOOL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNumericOrBool(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISNUMERICORBOOL_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidInstanceType(::System::Reflection::MemberInfo* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISVALIDINSTANCETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasIdentityPrimitiveOrNullableConversionTo(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASIDENTITYPRIMITIVEORNULLABLECONVERSIONTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasReferenceConversionTo(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCECONVERSIONTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean StrictHasReferenceConversionTo(::System::Type* arg, ::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_STRICTHASREFERENCECONVERSIONTO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean HasArrayToInterfaceConversion(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASARRAYTOINTERFACECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasInterfaceToArrayConversion(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASINTERFACETOARRAYCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsCovariant(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCOVARIANT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsContravariant(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONTRAVARIANT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsInvariant(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISINVARIANT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsDelegate(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISDELEGATE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLegalExplicitVariantDelegateConversion(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISLEGALEXPLICITVARIANTDELEGATECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsConvertible(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISCONVERTIBLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasReferenceEquality(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASREFERENCEEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean HasBuiltInEqualityOperator(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_HASBUILTINEQUALITYOPERATOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsImplicitlyConvertibleTo(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITLYCONVERTIBLETO_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetUserDefinedCoercionMethod(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETUSERDEFINEDCOERCIONMETHOD_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MethodInfo* FindConversionOperator(::Il2CppArray<::System::Object*>* arg, ::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::Il2CppArray<::System::Object*>*, ::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDCONVERSIONOPERATOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean IsImplicitNumericConversion(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNUMERICCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsImplicitReferenceConversion(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITREFERENCECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsImplicitBoxingConversion(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITBOXINGCONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsImplicitNullableConversion(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISIMPLICITNULLABLECONVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* FindGenericType(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_FINDGENERICTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetBooleanOperator(::System::Type* arg, ::System::String* str)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETBOOLEANOPERATOR_OFFSET))(arg, str, nullptr);
		}

		::System::Type* GetNonRefType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETNONREFTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean AreEquivalent(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREEQUIVALENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean AreReferenceAssignable(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_AREREFERENCEASSIGNABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsSameOrSubclass(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_ISSAMEORSUBCLASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateType(::System::Type* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET))(arg, str, nullptr);
		}

		::System::Void ValidateType(::System::Type* arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Type*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Boolean ValidateType(::System::Type* arg, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_VALIDATETYPE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetInvokeMethod(::System::Type* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_GETINVOKEMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_UTILS_TYPEUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

