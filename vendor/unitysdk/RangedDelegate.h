#pragma once
#include "unitysdk.h"

#define RANGEDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x4B7920)
#define RANGEDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x4B7940)
#define RANGEDDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x4B7020)
#define RANGEDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x4B7970)

	inline static constexpr unsigned int RangedDelegate_TypeDefinitionIndex = 35180;

	class RangedDelegate : public Il2CppObject
	{
	public:
		::System::Single Invoke(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + RANGEDDELEGATE_INVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Single(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + RANGEDDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + RANGEDDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Single arg, ::System::Single arg, ::System::Single arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Single, ::System::Single, ::System::Single, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + RANGEDDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};

