#pragma once
#include "unitysdk.h"

#define MESHASSIGNMENTDELEGATEMULTIPLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x96031F0)
#define MESHASSIGNMENTDELEGATEMULTIPLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9603220)
#define MESHASSIGNMENTDELEGATEMULTIPLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x96032F0)
#define MESHASSIGNMENTDELEGATEMULTIPLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9603390)

	inline static constexpr unsigned int MeshAssignmentDelegateMultiple_TypeDefinitionIndex = 35305;

	class MeshAssignmentDelegateMultiple : public Il2CppObject
	{
	public:
		::System::Void Invoke(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + MESHASSIGNMENTDELEGATEMULTIPLE_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MESHASSIGNMENTDELEGATEMULTIPLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MESHASSIGNMENTDELEGATEMULTIPLE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + MESHASSIGNMENTDELEGATEMULTIPLE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

