#pragma once
#include "unitysdk.h"

#define COROUTINECANCELLATIONTOKEN_CANCEL_OFFSET UNITYSDK_OFFSET(0x211DBC0)
#define COROUTINECANCELLATIONTOKEN_.CTOR_OFFSET UNITYSDK_OFFSET(0x211DBD0)
#define COROUTINECANCELLATIONTOKEN_GET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x211DBE0)
#define COROUTINECANCELLATIONTOKEN_SET_ISCANCELLATIONREQUESTED_OFFSET UNITYSDK_OFFSET(0x211DBF0)

	inline static constexpr unsigned int CoroutineCancellationToken_TypeDefinitionIndex = 3879;

	class CoroutineCancellationToken : public Il2CppObject
	{
	public:
		::System::Boolean _IsCancellationRequested_k__BackingField; // 0x10

		::System::Void Cancel()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINECANCELLATIONTOKEN_CANCEL_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINECANCELLATIONTOKEN_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsCancellationRequested()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COROUTINECANCELLATIONTOKEN_GET_ISCANCELLATIONREQUESTED_OFFSET))(nullptr);
		}

		::System::Void set_IsCancellationRequested(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + COROUTINECANCELLATIONTOKEN_SET_ISCANCELLATIONREQUESTED_OFFSET))(arg, nullptr);
		}

	};

