#pragma once
#include "unitysdk.h"

#define TYPEDRESTORE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TYPEDRESTORE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define TYPEDRESTORE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define TYPEDRESTORE_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int TypedRestore_TypeDefinitionIndex = 28955;

	class TypedRestore : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(Il2CppObject&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDRESTORE_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDRESTORE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDRESTORE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject&* arg)
		{
			((::System::Void(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + TYPEDRESTORE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

