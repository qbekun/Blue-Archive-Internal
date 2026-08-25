#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Transform; }
namespace Cinemachine { class CinemachineVirtualCamera; }

#define CREATEPIPELINEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x2840160)
#define CREATEPIPELINEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x2840180)
#define CREATEPIPELINEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x2840190)
#define CREATEPIPELINEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x28402A0)

	inline static constexpr unsigned int CreatePipelineDelegate_TypeDefinitionIndex = 34243;

	class CreatePipelineDelegate : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* Invoke(::Cinemachine::CinemachineVirtualCamera* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::Cinemachine::CinemachineVirtualCamera*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + CREATEPIPELINEDELEGATE_INVOKE_OFFSET))(arg, str, arg, nullptr);
		}

		::UnityEngine::Transform* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::UnityEngine::Transform*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CREATEPIPELINEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CREATEPIPELINEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Cinemachine::CinemachineVirtualCamera* arg, ::System::String* str, ::Il2CppArray<::System::Object*>* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Cinemachine::CinemachineVirtualCamera*, ::System::String*, ::Il2CppArray<::System::Object*>*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CREATEPIPELINEDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

	};

