#pragma once
#include "unitysdk.h"

#define UPDATEFEVERGAUGEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE3D0)
#define UPDATEFEVERGAUGEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE4A0)
#define UPDATEFEVERGAUGEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE4B0)
#define UPDATEFEVERGAUGEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DAE520)

	inline static constexpr unsigned int UpdateFeverGaugeDelegate_TypeDefinitionIndex = 20413;

	class UpdateFeverGaugeDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEFEVERGAUGEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEFEVERGAUGEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Single, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEFEVERGAUGEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UPDATEFEVERGAUGEDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

	};

