#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineBlendDefinition; }
namespace Cinemachine { class ICinemachineCamera; }
namespace UnityEngine { class MonoBehaviour; }

#define GETBLENDOVERRIDEDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x285A6F0)
#define GETBLENDOVERRIDEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x285A800)
#define GETBLENDOVERRIDEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x285A850)
#define GETBLENDOVERRIDEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x285A890)

	inline static constexpr unsigned int GetBlendOverrideDelegate_TypeDefinitionIndex = 34291;

	class GetBlendOverrideDelegate : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + GETBLENDOVERRIDEDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Cinemachine::CinemachineBlendDefinition* Invoke(::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::CinemachineBlendDefinition* arg, ::UnityEngine::MonoBehaviour* arg)
		{
			return (return (::Cinemachine::CinemachineBlendDefinition*(*)(::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::CinemachineBlendDefinition*, ::UnityEngine::MonoBehaviour*, ::PVOID))((::PBYTE)hIl2Cpp + GETBLENDOVERRIDEDELEGATE_INVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Cinemachine::CinemachineBlendDefinition* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::Cinemachine::CinemachineBlendDefinition*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + GETBLENDOVERRIDEDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::ICinemachineCamera* arg, ::Cinemachine::CinemachineBlendDefinition* arg, ::UnityEngine::MonoBehaviour* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::CinemachineBlendDefinition*, ::UnityEngine::MonoBehaviour*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + GETBLENDOVERRIDEDELEGATE_BEGININVOKE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};

