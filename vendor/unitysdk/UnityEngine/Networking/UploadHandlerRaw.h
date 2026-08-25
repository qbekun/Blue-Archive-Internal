#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class UploadHandlerRaw; }

#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_CREATE_OFFSET UNITYSDK_OFFSET(0xA4A71F0)
#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A5980)
#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A7240)
#define UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4A7320)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int UploadHandlerRaw_TypeDefinitionIndex = 37433;

	class UploadHandlerRaw : public Il2CppObject
	{
	public:
		Il2CppObject* m_Payload; // 0x18

		::System::Int32 Create(::UnityEngine::Networking::UploadHandlerRaw* arg, ::System::Object** arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Networking::UploadHandlerRaw*, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_CREATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_UPLOADHANDLERRAW_DISPOSE_OFFSET))(nullptr);
		}

	};
}

