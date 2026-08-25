#pragma once
#include "unitysdk.h"

#define ACQUIREREADBUFFERDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB16C0)
#define ACQUIREREADBUFFERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1790)
#define ACQUIREREADBUFFERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB17A0)
#define ACQUIREREADBUFFERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1840)

	inline static constexpr unsigned int AcquireReadBufferDelegate_TypeDefinitionIndex = 25419;

	class AcquireReadBufferDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ACQUIREREADBUFFERDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ACQUIREREADBUFFERDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, int32_t&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, int32_t&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ACQUIREREADBUFFERDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(int32_t&* arg, ::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ACQUIREREADBUFFERDELEGATE_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

