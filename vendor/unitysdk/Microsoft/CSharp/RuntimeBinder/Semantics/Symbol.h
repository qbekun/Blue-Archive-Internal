#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class SYMKIND; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ACCESS; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class Name; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class ParentSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class Symbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class symbmask_t; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class CType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_LOOKUPNEXT_OFFSET UNITYSDK_OFFSET(0x90CC300)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_GETACCESS_OFFSET UNITYSDK_OFFSET(0x90CC350)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_SETACCESS_OFFSET UNITYSDK_OFFSET(0x90CC360)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_GETKIND_OFFSET UNITYSDK_OFFSET(0x90CC370)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_SETKIND_OFFSET UNITYSDK_OFFSET(0x90CC380)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_MASK_OFFSET UNITYSDK_OFFSET(0x90CC340)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_GETTYPE_OFFSET UNITYSDK_OFFSET(0x90C8F50)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_GET_ISSTATIC_OFFSET UNITYSDK_OFFSET(0x90C9410)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_GETASSEMBLY_OFFSET UNITYSDK_OFFSET(0x90CC390)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_INTERNALSVISIBLETO_OFFSET UNITYSDK_OFFSET(0x90CC420)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_SAMEASSEMORFRIEND_OFFSET UNITYSDK_OFFSET(0x90C9350)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_ISOVERRIDE_OFFSET UNITYSDK_OFFSET(0x90CC510)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_ISHIDEBYNAME_OFFSET UNITYSDK_OFFSET(0x90CC5B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_ISUSERCALLABLE_OFFSET UNITYSDK_OFFSET(0x90CC650)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CA810)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int Symbol_TypeDefinitionIndex = 34545;

	class Symbol : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* _kind; // 0x10
		::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS* _access; // 0x14
		::Microsoft::CSharp::RuntimeBinder::Syntax::Name* name; // 0x18
		::Microsoft::CSharp::RuntimeBinder::Semantics::ParentSymbol* parent; // 0x20
		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* nextChild; // 0x28
		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* nextSameName; // 0x30

		::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* LookupNext(::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_LOOKUPNEXT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS* GetAccess()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_GETACCESS_OFFSET))(nullptr);
		}

		::System::Void SetAccess(::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::ACCESS*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_SETACCESS_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* getKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_GETKIND_OFFSET))(nullptr);
		}

		::System::Void setKind(::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::SYMKIND*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_SETKIND_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t* mask()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::symbmask_t*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_MASK_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::CType* getType()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::CType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_GETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_isStatic()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_GET_ISSTATIC_OFFSET))(nullptr);
		}

		::System::Reflection::Assembly* GetAssembly()
		{
			return (return (::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_GETASSEMBLY_OFFSET))(nullptr);
		}

		::System::Boolean InternalsVisibleTo(::System::Reflection::Assembly* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_INTERNALSVISIBLETO_OFFSET))(arg, nullptr);
		}

		::System::Boolean SameAssemOrFriend(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::Symbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_SAMEASSEMORFRIEND_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsOverride()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_ISOVERRIDE_OFFSET))(nullptr);
		}

		::System::Boolean IsHideByName()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_ISHIDEBYNAME_OFFSET))(nullptr);
		}

		::System::Boolean isUserCallable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_ISUSERCALLABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_SYMBOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

