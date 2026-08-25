#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class GameObject; }

#define NPA_EDITOR_UTIL_NXPTOYUTIL_MAKEUUID_OFFSET UNITYSDK_OFFSET(0x9DBD290)
#define NPA_EDITOR_UTIL_NXPTOYUTIL_LOCALIZE_OFFSET UNITYSDK_OFFSET(0x9DBD2C0)
#define NPA_EDITOR_UTIL_NXPTOYUTIL_LOCALIZE_OFFSET UNITYSDK_OFFSET(0x9DBD3A0)
#define NPA_EDITOR_UTIL_NXPTOYUTIL_LAUNCHURL_OFFSET UNITYSDK_OFFSET(0x9DBD540)

namespace NPA::Editor::Util
{
	inline static constexpr unsigned int NXPToyUtil_TypeDefinitionIndex = 26425;

	class NXPToyUtil : public Il2CppObject
	{
	public:
		::System::String* MakeUUID()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_UTIL_NXPTOYUTIL_MAKEUUID_OFFSET))(nullptr);
		}

		::System::Void Localize(::UnityEngine::GameObject* arg, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_UTIL_NXPTOYUTIL_LOCALIZE_OFFSET))(arg, str, str, nullptr);
		}

		::System::Void Localize(::UnityEngine::GameObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_UTIL_NXPTOYUTIL_LOCALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void LaunchURL(::System::String* str, ::System::Boolean arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_UTIL_NXPTOYUTIL_LAUNCHURL_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

