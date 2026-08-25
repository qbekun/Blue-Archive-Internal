#pragma once
#include "unitysdk.h"

class ReddotType;

#define GETREDDOTDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2703340)
#define GETREDDOTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x2703EC0)
#define GETREDDOTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x2703ED0)
#define GETREDDOTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x2703F00)

	inline static constexpr unsigned int GetReddotDelegate_TypeDefinitionIndex = 7085;

	class GetReddotDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETREDDOTDELEGATE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		ReddotType* Invoke()
		{
			return ((ReddotType*(*)(::PVOID))((::PBYTE)hIl2Cpp + GETREDDOTDELEGATE_INVOKE_OFFSET))(nullptr);
		}

		ReddotType* EndInvoke(::System::IAsyncResult* arg)
		{
			return ((ReddotType*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETREDDOTDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg2)
		{
			return ((::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETREDDOTDELEGATE_BEGININVOKE_OFFSET))(arg, arg2, nullptr);
		}

	};

