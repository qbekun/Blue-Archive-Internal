#pragma once
#include "unitysdk.h"

#define VIEWINITIALISATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DA1CB0)
#define VIEWINITIALISATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1D70)
#define VIEWINITIALISATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1D80)
#define VIEWINITIALISATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9DA1DB0)

	inline static constexpr unsigned int ViewInitialisation_TypeDefinitionIndex = 26349;

	class ViewInitialisation : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + VIEWINITIALISATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VIEWINITIALISATION_INVOKE_OFFSET))(nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + VIEWINITIALISATION_BEGININVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + VIEWINITIALISATION_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

