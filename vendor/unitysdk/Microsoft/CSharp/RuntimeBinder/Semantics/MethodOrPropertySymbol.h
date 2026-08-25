#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SymWithType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ConstVal; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GET_PARAMETERNAMES_OFFSET UNITYSDK_OFFSET(0x90CAA90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_SET_PARAMETERNAMES_OFFSET UNITYSDK_OFFSET(0x90CAAA0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GET_PARAMS_OFFSET UNITYSDK_OFFSET(0x90CAAB0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_SET_PARAMS_OFFSET UNITYSDK_OFFSET(0x90CAAC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CAE90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_ISPARAMETEROPTIONAL_OFFSET UNITYSDK_OFFSET(0x90CAF20)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_SETOPTIONALPARAMETER_OFFSET UNITYSDK_OFFSET(0x90CAF50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_HASOPTIONALPARAMETERS_OFFSET UNITYSDK_OFFSET(0x90CAF80)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_HASDEFAULTPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x90CAFD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_SETDEFAULTPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x90CB000)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GETDEFAULTPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x90CB0B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GETDEFAULTPARAMETERVALUECONSTVALTYPE_OFFSET UNITYSDK_OFFSET(0x90CB0E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_ISMARSHALASPARAMETER_OFFSET UNITYSDK_OFFSET(0x90CB110)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_SETMARSHALASPARAMETER_OFFSET UNITYSDK_OFFSET(0x90CB140)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GETMARSHALASPARAMETERVALUE_OFFSET UNITYSDK_OFFSET(0x90CB190)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_MARSHALASOBJECT_OFFSET UNITYSDK_OFFSET(0x90CB1C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GETCLASS_OFFSET UNITYSDK_OFFSET(0x90CB240)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_ISEXPIMPL_OFFSET UNITYSDK_OFFSET(0x90CB2B0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int MethodOrPropertySymbol_TypeDefinitionIndex = 34534;

	class MethodOrPropertySymbol : public Il2CppObject
	{
	public:
		::System::UInt32 modOptCount; // 0x48
		::System::Boolean isStatic; // 0x4C
		::System::Boolean isOverride; // 0x4D
		::System::Boolean isOperator; // 0x4E
		::System::Boolean isParamArray; // 0x4F
		::System::Boolean isHideByName; // 0x50
		Il2CppObject* _ParameterNames_k__BackingField; // 0x58
		::Il2CppArray<::System::Object*>* _optionalParameterIndex; // 0x60
		::Il2CppArray<::System::Object*>* _defaultParameterIndex; // 0x68
		::Il2CppArray<::System::Object*>* _defaultParameters; // 0x70
		::Il2CppArray<::System::Object*>* _defaultParameterConstValTypes; // 0x78
		::Il2CppArray<::System::Object*>* _marshalAsIndex; // 0x80
		::Il2CppArray<::System::Object*>* _marshalAsBuffer; // 0x88
		::Microsoft::CSharp::RuntimeBinder::Semantics::SymWithType* swtSlot; // 0x90
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* RetType; // 0x98
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _Params; // 0xA0

		Il2CppObject* get_ParameterNames()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GET_PARAMETERNAMES_OFFSET))(nullptr);
		}

		::System::Void set_ParameterNames(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_SET_PARAMETERNAMES_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* get_Params()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GET_PARAMS_OFFSET))(nullptr);
		}

		::System::Void set_Params(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_SET_PARAMS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsParameterOptional(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_ISPARAMETEROPTIONAL_OFFSET))(arg, nullptr);
		}

		::System::Void SetOptionalParameter(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_SETOPTIONALPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasOptionalParameters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_HASOPTIONALPARAMETERS_OFFSET))(nullptr);
		}

		::System::Boolean HasDefaultParameterValue(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_HASDEFAULTPARAMETERVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void SetDefaultParameterValue(::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* arg)
		{
			((::System::Void(*)(::System::Int32, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_SETDEFAULTPARAMETERVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal* GetDefaultParameterValue(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ConstVal*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GETDEFAULTPARAMETERVALUE_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* GetDefaultParameterValueConstValType(::System::Int32 arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GETDEFAULTPARAMETERVALUECONSTVALTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMarshalAsParameter(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_ISMARSHALASPARAMETER_OFFSET))(arg, nullptr);
		}

		::System::Void SetMarshalAsParameter(::System::Int32 arg, ::System::Runtime::InteropServices::UnmanagedType* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Runtime::InteropServices::UnmanagedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_SETMARSHALASPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::InteropServices::UnmanagedType* GetMarshalAsParameterValue(::System::Int32 arg)
		{
			return (return (::System::Runtime::InteropServices::UnmanagedType*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GETMARSHALASPARAMETERVALUE_OFFSET))(arg, nullptr);
		}

		::System::Boolean MarshalAsObject(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_MARSHALASOBJECT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* getClass()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_GETCLASS_OFFSET))(nullptr);
		}

		::System::Boolean IsExpImpl()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODORPROPERTYSYMBOL_ISEXPIMPL_OFFSET))(nullptr);
		}

	};
}

