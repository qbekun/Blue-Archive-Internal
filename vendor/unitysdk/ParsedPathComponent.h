#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class Substring; }
namespace UnityEngine::InputSystem { class InputControl; }

#define PARSEDPATHCOMPONENT_GET_LAYOUT_OFFSET UNITYSDK_OFFSET(0x9EA4670)
#define PARSEDPATHCOMPONENT_GET_USAGES_OFFSET UNITYSDK_OFFSET(0x9EA4680)
#define PARSEDPATHCOMPONENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9EA47C0)
#define PARSEDPATHCOMPONENT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9EA47D0)
#define PARSEDPATHCOMPONENT_GET_ISWILDCARD_OFFSET UNITYSDK_OFFSET(0x9EA27E0)
#define PARSEDPATHCOMPONENT_GET_ISDOUBLEWILDCARD_OFFSET UNITYSDK_OFFSET(0x9EA47E0)
#define PARSEDPATHCOMPONENT_TOHUMANREADABLESTRING_OFFSET UNITYSDK_OFFSET(0x9EA15F0)
#define PARSEDPATHCOMPONENT_TOHUMANREADABLESTRING_OFFSET UNITYSDK_OFFSET(0x9EA4850)
#define PARSEDPATHCOMPONENT_MATCHES_OFFSET UNITYSDK_OFFSET(0x9EA3C00)
#define PARSEDPATHCOMPONENT_COMPAREPATHELEMENTTOSTRING_OFFSET UNITYSDK_OFFSET(0x9EA48A0)

	inline static constexpr unsigned int ParsedPathComponent_TypeDefinitionIndex = 28476;

	class ParsedPathComponent : public Il2CppObject
	{
	public:
		::UnityEngine::InputSystem::Utilities::Substring* m_Layout; // 0x10
		Il2CppObject* m_Usages; // 0x20
		::UnityEngine::InputSystem::Utilities::Substring* m_Name; // 0x40
		::UnityEngine::InputSystem::Utilities::Substring* m_DisplayName; // 0x50

		::System::String* get_layout()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARSEDPATHCOMPONENT_GET_LAYOUT_OFFSET))(nullptr);
		}

		Il2CppObject* get_usages()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARSEDPATHCOMPONENT_GET_USAGES_OFFSET))(nullptr);
		}

		::System::String* get_name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARSEDPATHCOMPONENT_GET_NAME_OFFSET))(nullptr);
		}

		::System::String* get_displayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARSEDPATHCOMPONENT_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

		::System::Boolean get_isWildcard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARSEDPATHCOMPONENT_GET_ISWILDCARD_OFFSET))(nullptr);
		}

		::System::Boolean get_isDoubleWildcard()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARSEDPATHCOMPONENT_GET_ISDOUBLEWILDCARD_OFFSET))(nullptr);
		}

		::System::String* ToHumanReadableString(::System::String* str, ::System::String* str, ::System::String&* arg, ::System::String&* arg, HumanReadableStringOptions* arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::System::String&*, ::System::String&*, HumanReadableStringOptions*, ::PVOID))((::PBYTE)hIl2Cpp + PARSEDPATHCOMPONENT_TOHUMANREADABLESTRING_OFFSET))(str, str, arg, arg, arg, nullptr);
		}

		::System::String* ToHumanReadableString(::UnityEngine::InputSystem::Utilities::Substring* arg)
		{
			return (return (::System::String*(*)(::UnityEngine::InputSystem::Utilities::Substring*, ::PVOID))((::PBYTE)hIl2Cpp + PARSEDPATHCOMPONENT_TOHUMANREADABLESTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean Matches(::UnityEngine::InputSystem::InputControl* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::InputControl*, ::PVOID))((::PBYTE)hIl2Cpp + PARSEDPATHCOMPONENT_MATCHES_OFFSET))(arg, nullptr);
		}

		::System::Boolean ComparePathElementToString(::UnityEngine::InputSystem::Utilities::Substring* arg, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::Substring*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PARSEDPATHCOMPONENT_COMPAREPATHELEMENTTOSTRING_OFFSET))(arg, str, nullptr);
		}

	};

