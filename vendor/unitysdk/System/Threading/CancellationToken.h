#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_CANCELLATIONTOKEN_GET_NONE_OFFSET UNITYSDK_OFFSET(0x93D7BF0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x93D7C00)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GET_CANBECANCELED_OFFSET UNITYSDK_OFFSET(0x93D7C50)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7C60)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x93D7C70)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET UNITYSDK_OFFSET(0x93D7D10)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET UNITYSDK_OFFSET(0x93D7FB0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET UNITYSDK_OFFSET(0x93D8020)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_INTERNALREGISTERWITHOUTEC_OFFSET UNITYSDK_OFFSET(0x93D80A0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET UNITYSDK_OFFSET(0x93D7E30)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x93D8540)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x93D8550)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x93D85E0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x93D8660)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x93D86B0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_THROWIFCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x93D8700)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_THROWOPERATIONCANCELEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x93D87E0)
#define SYSTEM_THREADING_CANCELLATIONTOKEN_.CCTOR_OFFSET UNITYSDK_OFFSET(0x93D8840)

namespace System::Threading
{
	inline static constexpr unsigned int CancellationToken_TypeDefinitionIndex = 24052;

	class CancellationToken : public Il2CppObject
	{
	public:
		::System::Threading::CancellationTokenSource* _source; // 0x10
		Il2CppObject* s_actionToActionObjShunt; // 0x0

		::System::Threading::CancellationToken* get_None()
		{
			return (return (::System::Threading::CancellationToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_GET_NONE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCancellationRequested()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_GET_ISCANCELLATIONREQUESTED_OFFSET))(nullptr);
		}

		::System::Boolean get_CanBeCanceled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_GET_CANBECANCELED_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Threading::CancellationTokenSource* arg)
		{
			((::System::Void(*)(::System::Threading::CancellationTokenSource*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Threading::CancellationTokenRegistration* Register(::System::Action* arg)
		{
			return (return (::System::Threading::CancellationTokenRegistration*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET))(arg, nullptr);
		}

		::System::Threading::CancellationTokenRegistration* Register(Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (::System::Threading::CancellationTokenRegistration*(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::CancellationTokenRegistration* Register(Il2CppObject* arg, ::System::Object* arg, ::System::Boolean arg)
		{
			return (return (::System::Threading::CancellationTokenRegistration*(*)(Il2CppObject*, ::System::Object*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::CancellationTokenRegistration* InternalRegisterWithoutEC(Il2CppObject* arg, ::System::Object* arg)
		{
			return (return (::System::Threading::CancellationTokenRegistration*(*)(Il2CppObject*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_INTERNALREGISTERWITHOUTEC_OFFSET))(arg, arg, nullptr);
		}

		::System::Threading::CancellationTokenRegistration* Register(Il2CppObject* arg, ::System::Object* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Threading::CancellationTokenRegistration*(*)(Il2CppObject*, ::System::Object*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_REGISTER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::System::Threading::CancellationToken* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::CancellationToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::System::Threading::CancellationToken* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Boolean(*)(::System::Threading::CancellationToken*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ThrowIfCancellationRequested()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_THROWIFCANCELLATIONREQUESTED_OFFSET))(nullptr);
		}

		::System::Void ThrowOperationCanceledException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_THROWOPERATIONCANCELEDEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CANCELLATIONTOKEN_.CCTOR_OFFSET))(nullptr);
		}

	};
}

