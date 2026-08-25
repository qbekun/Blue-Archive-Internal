#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class DownloadHandlerBuffer; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_CREATE_OFFSET UNITYSDK_OFFSET(0xA4A6B10)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_INTERNALCREATEBUFFER_OFFSET UNITYSDK_OFFSET(0xA4A6B50)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A5660)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_GETNATIVEDATA_OFFSET UNITYSDK_OFFSET(0xA4A6B90)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A6BB0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerBuffer_TypeDefinitionIndex = 37429;

	class DownloadHandlerBuffer : public Il2CppObject
	{
	public:
		Il2CppObject* m_NativeData; // 0x18

		::System::Int32 Create(::UnityEngine::Networking::DownloadHandlerBuffer* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Networking::DownloadHandlerBuffer*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void InternalCreateBuffer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_INTERNALCREATEBUFFER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetNativeData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_GETNATIVEDATA_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERBUFFER_DISPOSE_OFFSET))(nullptr);
		}

	};
}

