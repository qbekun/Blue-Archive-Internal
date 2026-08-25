#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Networking { class DownloadHandlerScript; }

#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_CREATE_OFFSET UNITYSDK_OFFSET(0xA4A6C70)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_INTERNALCREATESCRIPT_OFFSET UNITYSDK_OFFSET(0xA4A6CB0)
#define UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A6CF0)

namespace UnityEngine::Networking
{
	inline static constexpr unsigned int DownloadHandlerScript_TypeDefinitionIndex = 37430;

	class DownloadHandlerScript : public Il2CppObject
	{
	public:
		::System::Int32 Create(::UnityEngine::Networking::DownloadHandlerScript* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Networking::DownloadHandlerScript*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Void InternalCreateScript()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_INTERNALCREATESCRIPT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NETWORKING_DOWNLOADHANDLERSCRIPT_.CTOR_OFFSET))(nullptr);
		}

	};
}

