#pragma once
#include "unitysdk.h"

#define APIDISPATCHDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define APIDISPATCHDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define APIDISPATCHDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define APIDISPATCHDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int APIDispatchDelegate_TypeDefinitionIndex = 26088;

	class APIDispatchDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + APIDISPATCHDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + APIDISPATCHDELEGATE_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, ::System::Boolean arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + APIDISPATCHDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + APIDISPATCHDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

