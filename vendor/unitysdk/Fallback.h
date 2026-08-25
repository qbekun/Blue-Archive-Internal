#pragma once
#include "unitysdk.h"

#define FALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define FALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define FALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int Fallback_TypeDefinitionIndex = 31830;

	class Fallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* Invoke(::System::Dynamic::DynamicMetaObject* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Dynamic::DynamicMetaObject*, ::PVOID))((::PBYTE)hIl2Cpp + FALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Dynamic::DynamicMetaObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Dynamic::DynamicMetaObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + FALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + FALLBACK_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

