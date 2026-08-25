#pragma once
#include "unitysdk.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineFreeLook; }

#define CREATERIGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x2833650)
#define CREATERIGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x2833670)
#define CREATERIGDELEGATE_.CTOR_OFFSET UNITYSDK_OFFSET(0x28336B0)
#define CREATERIGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x28337C0)

	inline static constexpr unsigned int CreateRigDelegate_TypeDefinitionIndex = 34219;

	class CreateRigDelegate : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* Invoke(::Cinemachine::CinemachineFreeLook* arg, ::System::String* str, ::Cinemachine::CinemachineVirtualCamera* arg)
		{
			return (return (::Cinemachine::CinemachineVirtualCamera*(*)(::Cinemachine::CinemachineFreeLook*, ::System::String*, ::Cinemachine::CinemachineVirtualCamera*, ::PVOID))((::PBYTE)hIl2Cpp + CREATERIGDELEGATE_INVOKE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::Cinemachine::CinemachineFreeLook* arg, ::System::String* str, ::Cinemachine::CinemachineVirtualCamera* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::Cinemachine::CinemachineFreeLook*, ::System::String*, ::Cinemachine::CinemachineVirtualCamera*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CREATERIGDELEGATE_BEGININVOKE_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CREATERIGDELEGATE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Cinemachine::CinemachineVirtualCamera* EndInvoke(::System::IAsyncResult* arg)
		{
			return (return (::Cinemachine::CinemachineVirtualCamera*(*)(::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + CREATERIGDELEGATE_ENDINVOKE_OFFSET))(arg, nullptr);
		}

	};

