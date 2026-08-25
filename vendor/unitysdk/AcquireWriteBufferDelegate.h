#pragma once
#include "unitysdk.h"

#define ACQUIREWRITEBUFFERDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB1350)
#define ACQUIREWRITEBUFFERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1420)
#define ACQUIREWRITEBUFFERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB1430)
#define ACQUIREWRITEBUFFERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB14D0)

	inline static constexpr unsigned int AcquireWriteBufferDelegate_TypeDefinitionIndex = 25417;

	class AcquireWriteBufferDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ACQUIREWRITEBUFFERDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, int32_t&* arg)
		{
			return (return (::System::Int32(*)(::System::Int32, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + ACQUIREWRITEBUFFERDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, int32_t&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, int32_t&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ACQUIREWRITEBUFFERDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(int32_t&* arg, ::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(int32_t&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ACQUIREWRITEBUFFERDELEGATE_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

