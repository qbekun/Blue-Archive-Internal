#pragma once
#include "unitysdk.h"

#define INITDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C03810)
#define INITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C038E0)
#define INITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C038F0)
#define INITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C03990)

	inline static constexpr unsigned int InitDelegate_TypeDefinitionIndex = 26527;

	class InitDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INITDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INITDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + INITDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + INITDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

