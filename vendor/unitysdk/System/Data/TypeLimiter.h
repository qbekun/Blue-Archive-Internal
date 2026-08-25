#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_TYPELIMITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x972AC10)
#define SYSTEM_DATA_TYPELIMITER_GET_ISTYPELIMITINGDISABLED_OFFSET UNITYSDK_OFFSET(0x972AC40)
#define SYSTEM_DATA_TYPELIMITER_CAPTURE_OFFSET UNITYSDK_OFFSET(0x972ACA0)
#define SYSTEM_DATA_TYPELIMITER_ENSURETYPEISALLOWED_OFFSET UNITYSDK_OFFSET(0x972AD20)
#define SYSTEM_DATA_TYPELIMITER_ENTERRESTRICTEDSCOPE_OFFSET UNITYSDK_OFFSET(0x972AF50)
#define SYSTEM_DATA_TYPELIMITER_ENTERRESTRICTEDSCOPE_OFFSET UNITYSDK_OFFSET(0x972B3B0)
#define SYSTEM_DATA_TYPELIMITER_GETPREVIOUSLYDECLAREDDATATYPES_OFFSET UNITYSDK_OFFSET(0x972B4B0)
#define SYSTEM_DATA_TYPELIMITER_GETPREVIOUSLYDECLAREDDATATYPES_OFFSET UNITYSDK_OFFSET(0x972B050)

namespace System::Data
{
	inline static constexpr unsigned int TypeLimiter_TypeDefinitionIndex = 32188;

	class TypeLimiter : public Il2CppObject
	{
	public:
		Scope* s_activeScope;
		Scope* m_instanceScope; // 0x10

		::System::Void .ctor(Scope* arg)
		{
			((::System::Void(*)(Scope*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_TYPELIMITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsTypeLimitingDisabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_TYPELIMITER_GET_ISTYPELIMITINGDISABLED_OFFSET))(nullptr);
		}

		::System::Data::TypeLimiter* Capture()
		{
			return (return (::System::Data::TypeLimiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_TYPELIMITER_CAPTURE_OFFSET))(nullptr);
		}

		::System::Void EnsureTypeIsAllowed(::System::Type* arg, ::System::Data::TypeLimiter* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Data::TypeLimiter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_TYPELIMITER_ENSURETYPEISALLOWED_OFFSET))(arg, arg, nullptr);
		}

		::System::IDisposable* EnterRestrictedScope(::System::Data::DataSet* arg)
		{
			return (return (::System::IDisposable*(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_TYPELIMITER_ENTERRESTRICTEDSCOPE_OFFSET))(arg, nullptr);
		}

		::System::IDisposable* EnterRestrictedScope(::System::Data::DataTable* arg)
		{
			return (return (::System::IDisposable*(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_TYPELIMITER_ENTERRESTRICTEDSCOPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPreviouslyDeclaredDataTypes(::System::Data::DataTable* arg)
		{
			return (return (Il2CppObject*(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_TYPELIMITER_GETPREVIOUSLYDECLAREDDATATYPES_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetPreviouslyDeclaredDataTypes(::System::Data::DataSet* arg)
		{
			return (return (Il2CppObject*(*)(::System::Data::DataSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_TYPELIMITER_GETPREVIOUSLYDECLAREDDATATYPES_OFFSET))(arg, nullptr);
		}

	};
}

