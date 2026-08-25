#pragma once
#include "unitysdk.h"

#define ISOKDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C04110)
#define ISOKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C041E0)
#define ISOKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C041F0)
#define ISOKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C04260)

	inline static constexpr unsigned int IsOkDelegate_TypeDefinitionIndex = 26535;

	class IsOkDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ISOKDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Invoke(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ISOKDELEGATE_INVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ISOKDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + ISOKDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

