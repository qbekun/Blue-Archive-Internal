#pragma once
#include "unitysdk.h"

#define RESIZESHAREDMEMORY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9BB0DA0)
#define RESIZESHAREDMEMORY_INVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0E70)
#define RESIZESHAREDMEMORY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0E90)
#define RESIZESHAREDMEMORY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9BB0F60)

	inline static constexpr unsigned int ResizeSharedMemory_TypeDefinitionIndex = 25414;

	class ResizeSharedMemory : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RESIZESHAREDMEMORY_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke(::System::Int32 arg, ::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RESIZESHAREDMEMORY_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::UInt32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::UInt32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RESIZESHAREDMEMORY_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RESIZESHAREDMEMORY_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

