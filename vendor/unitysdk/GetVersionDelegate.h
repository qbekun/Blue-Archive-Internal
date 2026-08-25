#pragma once
#include "unitysdk.h"

#define GETVERSIONDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C03F30)
#define GETVERSIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C03FF0)
#define GETVERSIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C04000)
#define GETVERSIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C04030)

	inline static constexpr unsigned int GetVersionDelegate_TypeDefinitionIndex = 26532;

	class GetVersionDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETVERSIONDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Invoke()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GETVERSIONDELEGATE_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETVERSIONDELEGATE_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Int32(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETVERSIONDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

