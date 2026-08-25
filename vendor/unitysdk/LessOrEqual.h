#pragma once
#include "unitysdk.h"

#define LESSOREQUAL_INVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define LESSOREQUAL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define LESSOREQUAL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x000000)
#define LESSOREQUAL_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int LessOrEqual_TypeDefinitionIndex = 32832;

	class LessOrEqual : public Il2CppObject
	{
	public:
		::System::Boolean Invoke(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + LESSOREQUAL_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(Il2CppObject* arg, Il2CppObject* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(Il2CppObject*, Il2CppObject*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + LESSOREQUAL_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::System::Boolean(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + LESSOREQUAL_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LESSOREQUAL_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

