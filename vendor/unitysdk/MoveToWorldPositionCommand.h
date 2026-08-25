#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Vector2; }

#define MOVETOWORLDPOSITIONCOMMAND_GET_ISLEFT_OFFSET UNITYSDK_OFFSET(0x11352A0)
#define MOVETOWORLDPOSITIONCOMMAND_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x11352B0)
#define MOVETOWORLDPOSITIONCOMMAND_.CTOR_OFFSET UNITYSDK_OFFSET(0x11352C0)

	inline static constexpr unsigned int MoveToWorldPositionCommand_TypeDefinitionIndex = 13068;

	class MoveToWorldPositionCommand : public Il2CppObject
	{
	public:
		::System::Boolean _IsLeft_k__BackingField; // 0x10
		::UnityEngine::Vector2* _TargetPosition_k__BackingField; // 0x14

		::System::Boolean get_IsLeft()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVETOWORLDPOSITIONCOMMAND_GET_ISLEFT_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_TargetPosition()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVETOWORLDPOSITIONCOMMAND_GET_TARGETPOSITION_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MOVETOWORLDPOSITIONCOMMAND_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

