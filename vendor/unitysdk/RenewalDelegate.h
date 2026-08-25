#pragma once
#include "unitysdk.h"

#define RENEWALDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x91DB140)
#define RENEWALDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x91DB4E0)
#define RENEWALDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x91DB250)
#define RENEWALDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x91DB4B0)

	inline static constexpr unsigned int RenewalDelegate_TypeDefinitionIndex = 24467;

	class RenewalDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RENEWALDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::TimeSpan* Invoke(::System::Runtime::Remoting::Lifetime::ILease* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::Runtime::Remoting::Lifetime::ILease*, ::PVOID))((::PBYTE)hIl2Cpp + RENEWALDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Runtime::Remoting::Lifetime::ILease* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Runtime::Remoting::Lifetime::ILease*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RENEWALDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::TimeSpan* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::TimeSpan*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RENEWALDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

