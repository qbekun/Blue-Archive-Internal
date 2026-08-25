#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SYMKIND; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SubstContext; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class IndexerSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Errors { class MessageID; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }
namespace Microsoft::CSharp::RuntimeBinder::Errors { class ErrArg; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_BEGINSTRING_OFFSET UNITYSDK_OFFSET(0x90E2740)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ENDSTRING_OFFSET UNITYSDK_OFFSET(0x90E27B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRSK_OFFSET UNITYSDK_OFFSET(0x90E2800)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDPARAMLIST_OFFSET UNITYSDK_OFFSET(0x90E2830)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDSTRING_OFFSET UNITYSDK_OFFSET(0x90E29F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDCHAR_OFFSET UNITYSDK_OFFSET(0x90E3120)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDPRINTF_OFFSET UNITYSDK_OFFSET(0x90E3140)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDNAME_OFFSET UNITYSDK_OFFSET(0x90E31C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDPARENTSYM_OFFSET UNITYSDK_OFFSET(0x90E3250)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDPARENTCORE_OFFSET UNITYSDK_OFFSET(0x90E3270)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDTYPEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x90E33F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDMETHOD_OFFSET UNITYSDK_OFFSET(0x90E34F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDINDEXER_OFFSET UNITYSDK_OFFSET(0x90E3D00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDPROPERTY_OFFSET UNITYSDK_OFFSET(0x90E3DC0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDID_OFFSET UNITYSDK_OFFSET(0x90E3F40)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDSYM_OFFSET UNITYSDK_OFFSET(0x90E33D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDSYM_OFFSET UNITYSDK_OFFSET(0x90E3920)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDTYPE_OFFSET UNITYSDK_OFFSET(0x90E2A10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRARGTOSTRING_OFFSET UNITYSDK_OFFSET(0x90E23C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRID_OFFSET UNITYSDK_OFFSET(0x90E2820)

namespace Microsoft::CSharp::RuntimeBinder::Errors
{
	inline static constexpr unsigned int UserStringBuilder_TypeDefinitionIndex = 34633;

	class UserStringBuilder : public Il2CppObject
	{
	public:
		::System::Text::StringBuilder* _strBuilder; // 0x10

		::System::Void BeginString()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_BEGINSTRING_OFFSET))(nullptr);
		}

		::System::String* EndString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ENDSTRING_OFFSET))(nullptr);
		}

		::System::String* ErrSK(::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* arg)
		{
			return (return (::System::String*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRSK_OFFSET))(arg, nullptr);
		}

		::System::Void ErrAppendParamList(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDPARAMLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ErrAppendString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDSTRING_OFFSET))(str, nullptr);
		}

		::System::Void ErrAppendChar(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDCHAR_OFFSET))(arg, nullptr);
		}

		::System::Void ErrAppendPrintf(::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDPRINTF_OFFSET))(str, arg, nullptr);
		}

		::System::Void ErrAppendName(::Microsoft::CSharp::RuntimeBinder::Syntax::Name* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::Name*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDNAME_OFFSET))(arg, nullptr);
		}

		::System::Void ErrAppendParentSym(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDPARENTSYM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ErrAppendParentCore(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDPARENTCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ErrAppendTypeParameters(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDTYPEPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ErrAppendMethod(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDMETHOD_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ErrAppendIndexer(::Microsoft::CSharp::RuntimeBinder::Semantics::IndexerSymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::IndexerSymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDINDEXER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ErrAppendProperty(::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ErrAppendId(::Microsoft::CSharp::RuntimeBinder::Errors::MessageID* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Errors::MessageID*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDID_OFFSET))(arg, nullptr);
		}

		::System::Void ErrAppendSym(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDSYM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ErrAppendSym(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDSYM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ErrAppendType(::Microsoft::CSharp::RuntimeBinder::Semantics::CType* arg, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::CType*, ::Microsoft::CSharp::RuntimeBinder::Semantics::SubstContext*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRAPPENDTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ErrArgToString(::System::String&* arg, ::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg* arg, bool&* arg)
		{
			return (return (::System::Boolean(*)(::System::String&*, ::Microsoft::CSharp::RuntimeBinder::Errors::ErrArg*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRARGTOSTRING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ErrId(::Microsoft::CSharp::RuntimeBinder::Errors::MessageID* arg)
		{
			return (return (::System::String*(*)(::Microsoft::CSharp::RuntimeBinder::Errors::MessageID*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_ERRORS_USERSTRINGBUILDER_ERRID_OFFSET))(arg, nullptr);
		}

	};
}

