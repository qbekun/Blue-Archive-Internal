#pragma once
#include "../../../../unitysdk.h"

namespace Microsoft::CSharp::RuntimeBinder::Semantics { class FUNDTYPE; }
namespace Microsoft::CSharp::RuntimeBinder::Syntax { class PredefinedType; }

#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_GETFUNDTYPE_OFFSET UNITYSDK_OFFSET(0x90D9140)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_GETASSOCIATEDSYSTEMTYPE_OFFSET UNITYSDK_OFFSET(0x90DA5E0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_ISSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x90D8B00)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_ISNUMERICTYPE_OFFSET UNITYSDK_OFFSET(0x90D8C90)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_GETNICENAME_OFFSET UNITYSDK_OFFSET(0x90DA730)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_TRYGETPREDEFTYPEINDEX_OFFSET UNITYSDK_OFFSET(0x90DAA10)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_CREATEPREDEFINEDTYPEFACTS_OFFSET UNITYSDK_OFFSET(0x90DAAD0)
#define MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x90DABC0)

namespace Microsoft::CSharp::RuntimeBinder::Semantics
{
	inline static constexpr unsigned int PredefinedTypeFacts_TypeDefinitionIndex = 34600;

	class PredefinedTypeFacts : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_types; // 0x0
		Il2CppObject* s_typesByName; // 0x8

		::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE* GetFundType(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Semantics::FUNDTYPE*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_GETFUNDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetAssociatedSystemType(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::System::Type*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_GETASSOCIATEDSYSTEMTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSimpleType(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_ISSIMPLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNumericType(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::System::Boolean(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_ISNUMERICTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* GetNiceName(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* arg)
		{
			return (return (::System::String*(*)(::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_GETNICENAME_OFFSET))(arg, nullptr);
		}

		::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType* TryGetPredefTypeIndex(::System::String* str)
		{
			return (return (::Microsoft::CSharp::RuntimeBinder::Syntax::PredefinedType*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_TRYGETPREDEFTYPEINDEX_OFFSET))(str, nullptr);
		}

		Il2CppObject* CreatePredefinedTypeFacts()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_CREATEPREDEFINEDTYPEFACTS_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_CSHARP_RUNTIMEBINDER_SEMANTICS_PREDEFINEDTYPEFACTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

