#pragma once
#include "../unitysdk.h"

#define SYSTEM_LAZYHELPER_GET_STATE_OFFSET UNITYSDK_OFFSET(0x935A6B0)
#define SYSTEM_LAZYHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x935A6C0)
#define SYSTEM_LAZYHELPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x935A6E0)
#define SYSTEM_LAZYHELPER_THROWEXCEPTION_OFFSET UNITYSDK_OFFSET(0x935A730)
#define SYSTEM_LAZYHELPER_CREATE_OFFSET UNITYSDK_OFFSET(0x935A750)
#define SYSTEM_LAZYHELPER_CREATEVIADEFAULTCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x935A8D0)
#define SYSTEM_LAZYHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x935A9C0)

namespace System
{
	inline static constexpr unsigned int LazyHelper_TypeDefinitionIndex = 23789;

	class LazyHelper : public Il2CppObject
	{
	public:
		::System::LazyHelper* NoneViaConstructor; // 0x0
		::System::LazyHelper* NoneViaFactory; // 0x8
		::System::LazyHelper* PublicationOnlyViaConstructor; // 0x10
		::System::LazyHelper* PublicationOnlyViaFactory; // 0x18
		::System::LazyHelper* PublicationOnlyWaitForOtherThreadToPublish; // 0x20
		::System::LazyState* _State_k__BackingField; // 0x10
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _exceptionDispatch; // 0x18

		::System::LazyState* get_State()
		{
			return (return (::System::LazyState*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZYHELPER_GET_STATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::LazyState* arg)
		{
			((::System::Void(*)(::System::LazyState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZYHELPER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Threading::LazyThreadSafetyMode* arg, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::Threading::LazyThreadSafetyMode*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZYHELPER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ThrowException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZYHELPER_THROWEXCEPTION_OFFSET))(nullptr);
		}

		::System::LazyHelper* Create(::System::Threading::LazyThreadSafetyMode* arg, ::System::Boolean arg)
		{
			return (return (::System::LazyHelper*(*)(::System::Threading::LazyThreadSafetyMode*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZYHELPER_CREATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* CreateViaDefaultConstructor(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZYHELPER_CREATEVIADEFAULTCONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LAZYHELPER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

