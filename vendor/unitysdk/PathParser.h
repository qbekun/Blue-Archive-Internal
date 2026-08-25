#pragma once
#include "unitysdk.h"

namespace UnityEngine::InputSystem::Utilities { class Substring; }

#define PATHPARSER_MOVETONEXTCOMPONENT_OFFSET UNITYSDK_OFFSET(0x9EA12E0)
#define PATHPARSER_PARSECOMPONENTPART_OFFSET UNITYSDK_OFFSET(0x9EA4A70)
#define PATHPARSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9EA1290)
#define PATHPARSER_GET_ISATEND_OFFSET UNITYSDK_OFFSET(0x9EA3170)

	inline static constexpr unsigned int PathParser_TypeDefinitionIndex = 28477;

	class PathParser : public Il2CppObject
	{
	public:
		::System::String* path; // 0x10
		::System::Int32 length; // 0x18
		::System::Int32 leftIndexInPath; // 0x1C
		::System::Int32 rightIndexInPath; // 0x20
		ParsedPathComponent* current; // 0x28

		::System::Boolean MoveToNextComponent()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHPARSER_MOVETONEXTCOMPONENT_OFFSET))(nullptr);
		}

		::UnityEngine::InputSystem::Utilities::Substring* ParseComponentPart(::System::Char arg)
		{
			return (return (::UnityEngine::InputSystem::Utilities::Substring*(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + PATHPARSER_PARSECOMPONENTPART_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PATHPARSER_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Boolean get_isAtEnd()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHPARSER_GET_ISATEND_OFFSET))(nullptr);
		}

	};

