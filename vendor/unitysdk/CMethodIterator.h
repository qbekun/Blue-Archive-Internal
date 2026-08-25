#pragma once
#include "unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class symbmask_t; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EXPRFLAG; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ArgInfos; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodOrPropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class AggregateType; }

#define CMETHODITERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x90BF7C0)
#define CMETHODITERATOR_GET_CURRENTSYMBOL_OFFSET UNITYSDK_OFFSET(0x90BF890)
#define CMETHODITERATOR_SET_CURRENTSYMBOL_OFFSET UNITYSDK_OFFSET(0x90BF8A0)
#define CMETHODITERATOR_GET_CURRENTTYPE_OFFSET UNITYSDK_OFFSET(0x90BF8B0)
#define CMETHODITERATOR_SET_CURRENTTYPE_OFFSET UNITYSDK_OFFSET(0x90BF8C0)
#define CMETHODITERATOR_GET_ISCURRENTSYMBOLINACCESSIBLE_OFFSET UNITYSDK_OFFSET(0x90BF8D0)
#define CMETHODITERATOR_SET_ISCURRENTSYMBOLINACCESSIBLE_OFFSET UNITYSDK_OFFSET(0x90BF8E0)
#define CMETHODITERATOR_GET_ISCURRENTSYMBOLBOGUS_OFFSET UNITYSDK_OFFSET(0x90BF8F0)
#define CMETHODITERATOR_SET_ISCURRENTSYMBOLBOGUS_OFFSET UNITYSDK_OFFSET(0x90BF900)
#define CMETHODITERATOR_GET_ISCURRENTSYMBOLMISNAMED_OFFSET UNITYSDK_OFFSET(0x90BF910)
#define CMETHODITERATOR_SET_ISCURRENTSYMBOLMISNAMED_OFFSET UNITYSDK_OFFSET(0x90BF920)
#define CMETHODITERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x90B5DF0)
#define CMETHODITERATOR_GET_ATEND_OFFSET UNITYSDK_OFFSET(0x90B5E20)
#define CMETHODITERATOR_GET_CANUSECURRENTSYMBOL_OFFSET UNITYSDK_OFFSET(0x90B3DD0)
#define CMETHODITERATOR_CHECKARGUMENTNAMES_OFFSET UNITYSDK_OFFSET(0x90BFAE0)
#define CMETHODITERATOR_FINDNEXTMETHOD_OFFSET UNITYSDK_OFFSET(0x90BF9D0)
#define CMETHODITERATOR_FINDNEXTTYPEFORINSTANCEMETHODS_OFFSET UNITYSDK_OFFSET(0x90BF930)

	inline static constexpr unsigned int CMethodIterator_TypeDefinitionIndex = 34512;

	class CMethodIterator : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* _context; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* _containingTypes; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* _qualifyingType; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* _name; // 0x28
		::System::Int32 _arity; // 0x30
		::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* _mask; // 0x38
		::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* _flags; // 0x40
		::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* _nonTrailingNamedArguments; // 0x48
		::System::Int32 _currentTypeIndex; // 0x50
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* _CurrentSymbol_k__BackingField; // 0x58
		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* _CurrentType_k__BackingField; // 0x60
		::System::Boolean _IsCurrentSymbolInaccessible_k__BackingField; // 0x68
		::System::Boolean _IsCurrentSymbolBogus_k__BackingField; // 0x69
		::System::Boolean _IsCurrentSymbolMisnamed_k__BackingField; // 0x6A

		::System::Void .ctor(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol* arg, ::System::Int32 arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateSymbol*, ::System::Int32, ::Microsoft::CSharp::RuntimeBinder::Semantics::EXPRFLAG*, ::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t*, ::Microsoft::CSharp::RuntimeBinder::Semantics::ArgInfos*, ::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* get_CurrentSymbol()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_GET_CURRENTSYMBOL_OFFSET))(nullptr);
		}

		::System::Void set_CurrentSymbol(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodOrPropertySymbol*, ::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_SET_CURRENTSYMBOL_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* get_CurrentType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_GET_CURRENTTYPE_OFFSET))(nullptr);
		}

		::System::Void set_CurrentType(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::AggregateType*, ::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_SET_CURRENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCurrentSymbolInaccessible()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_GET_ISCURRENTSYMBOLINACCESSIBLE_OFFSET))(nullptr);
		}

		::System::Void set_IsCurrentSymbolInaccessible(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_SET_ISCURRENTSYMBOLINACCESSIBLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCurrentSymbolBogus()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_GET_ISCURRENTSYMBOLBOGUS_OFFSET))(nullptr);
		}

		::System::Void set_IsCurrentSymbolBogus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_SET_ISCURRENTSYMBOLBOGUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCurrentSymbolMisnamed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_GET_ISCURRENTSYMBOLMISNAMED_OFFSET))(nullptr);
		}

		::System::Void set_IsCurrentSymbolMisnamed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_SET_ISCURRENTSYMBOLMISNAMED_OFFSET))(arg, nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Boolean get_AtEnd()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_GET_ATEND_OFFSET))(nullptr);
		}

		::System::Boolean get_CanUseCurrentSymbol()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_GET_CANUSECURRENTSYMBOL_OFFSET))(nullptr);
		}

		::System::Boolean CheckArgumentNames()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_CHECKARGUMENTNAMES_OFFSET))(nullptr);
		}

		::System::Boolean FindNextMethod()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_FINDNEXTMETHOD_OFFSET))(nullptr);
		}

		::System::Boolean FindNextTypeForInstanceMethods()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMETHODITERATOR_FINDNEXTTYPEFORINSTANCEMETHODS_OFFSET))(nullptr);
		}

	};

