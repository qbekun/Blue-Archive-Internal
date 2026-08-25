#pragma once
#include "unitysdk.h"

#define ACTIVATEFEVERDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE270)
#define ACTIVATEFEVERDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE280)
#define ACTIVATEFEVERDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE350)
#define ACTIVATEFEVERDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE360)

	inline static constexpr unsigned int ActivateFeverDelegate_TypeDefinitionIndex = 20412;

	class ActivateFeverDelegate : public Il2CppObject
	{
	public:
		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIVATEFEVERDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ACTIVATEFEVERDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ACTIVATEFEVERDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Boolean, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIVATEFEVERDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

	};

