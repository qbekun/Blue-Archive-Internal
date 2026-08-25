#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodKindEnum; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class MethodSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class PropertySymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class EventSymbol; }
namespace Microsoft::CSharp::RuntimeBinder::Semantics { class TypeArray; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_INFERENCEMUSTFAIL_OFFSET UNITYSDK_OFFSET(0x90CB2C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_GET_METHKIND_OFFSET UNITYSDK_OFFSET(0x90CB590)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x90CB5A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISNULLABLECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x90CB5B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISPROPERTYACCESSOR_OFFSET UNITYSDK_OFFSET(0x90CB6B0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISEVENTACCESSOR_OFFSET UNITYSDK_OFFSET(0x90CB6C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISIMPLICIT_OFFSET UNITYSDK_OFFSET(0x90CB6D0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_SETMETHKIND_OFFSET UNITYSDK_OFFSET(0x90CB6E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_CONVNEXT_OFFSET UNITYSDK_OFFSET(0x90CB6F0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_SETCONVNEXT_OFFSET UNITYSDK_OFFSET(0x90CB700)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x90CB720)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_SETPROPERTY_OFFSET UNITYSDK_OFFSET(0x90CB730)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_GETEVENT_OFFSET UNITYSDK_OFFSET(0x90CB750)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_SETEVENT_OFFSET UNITYSDK_OFFSET(0x90CB760)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISUSERCALLABLE_OFFSET UNITYSDK_OFFSET(0x90CB780)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISANYACCESSOR_OFFSET UNITYSDK_OFFSET(0x90CB7A0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISSETACCESSOR_OFFSET UNITYSDK_OFFSET(0x90CB7C0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_.CTOR_OFFSET UNITYSDK_OFFSET(0x90CB7F0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int MethodSymbol_TypeDefinitionIndex = 34535;

	class MethodSymbol : public Il2CppObject
	{
	public:
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* _methKind; // 0xA8
		::System::Boolean _inferenceMustFail; // 0xAC
		::System::Boolean _checkedInfMustFail; // 0xAD
		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* _convNext; // 0xB0
		::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* _prop; // 0xB8
		::Microsoft::CSharp::RuntimeBinder::Semantics::EventSymbol* _evt; // 0xC0
		::System::Boolean isVirtual; // 0xC8
		::System::Reflection::MemberInfo* AssociatedMemberInfo; // 0xD0
		::Microsoft::CSharp::RuntimeBinder::Semantics::TypeArray* typeVars; // 0xD8

		::System::Boolean InferenceMustFail()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_INFERENCEMUSTFAIL_OFFSET))(nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* get_MethKind()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_GET_METHKIND_OFFSET))(nullptr);
		}

		::System::Boolean IsConstructor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISCONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsNullableConstructor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISNULLABLECONSTRUCTOR_OFFSET))(nullptr);
		}

		::System::Boolean isPropertyAccessor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISPROPERTYACCESSOR_OFFSET))(nullptr);
		}

		::System::Boolean isEventAccessor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISEVENTACCESSOR_OFFSET))(nullptr);
		}

		::System::Boolean isImplicit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISIMPLICIT_OFFSET))(nullptr);
		}

		::System::Void SetMethKind(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodKindEnum*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_SETMETHKIND_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* ConvNext()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_CONVNEXT_OFFSET))(nullptr);
		}

		::System::Void SetConvNext(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::MethodSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_SETCONVNEXT_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* getProperty()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_GETPROPERTY_OFFSET))(nullptr);
		}

		::System::Void SetProperty(::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::PropertySymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_SETPROPERTY_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Semantics::EventSymbol* getEvent()
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::EventSymbol*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_GETEVENT_OFFSET))(nullptr);
		}

		::System::Void SetEvent(::Microsoft::CSharp::RuntimeBinder::Semantics::EventSymbol* arg)
		{
			((::System::Void(*)(::Microsoft::CSharp::RuntimeBinder::Semantics::EventSymbol*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_SETEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean isUserCallable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISUSERCALLABLE_OFFSET))(nullptr);
		}

		::System::Boolean isAnyAccessor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISANYACCESSOR_OFFSET))(nullptr);
		}

		::System::Boolean isSetAccessor()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_ISSETACCESSOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_METHODSYMBOL_.CTOR_OFFSET))(nullptr);
		}

	};
}

