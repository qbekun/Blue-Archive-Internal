#pragma once
#include "unitysdk.h"

#define TRYFORMAT`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRYFORMAT`1_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRYFORMAT`1_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TRYFORMAT`1_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int TryFormat`1_TypeDefinitionIndex = 34723;

	class TryFormat`1 : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TRYFORMAT`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::PVOID))((::PBYTE)hIl2Cpp + TRYFORMAT`1_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, Il2CppObject* arg, int32_t&* arg, ::System::Buffers::StandardFormat* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, Il2CppObject*, int32_t&*, ::System::Buffers::StandardFormat*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TRYFORMAT`1_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean EndInvoke(int32_t&* arg, ::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(int32_t&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + TRYFORMAT`1_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};

