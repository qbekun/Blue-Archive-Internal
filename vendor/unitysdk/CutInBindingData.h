#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Object; }

#define CUTINBINDINGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x15A0FD0)

	inline static constexpr unsigned int CutInBindingData_TypeDefinitionIndex = 1078;

	class CutInBindingData : public Il2CppObject
	{
	public:
		::System::Int64 localId; // 0x10
		::UnityEngine::Object* binding; // 0x18

		::System::Void .ctor(::System::Int64 arg, ::UnityEngine::Object* arg2)
		{
			((::System::Void(*)(::System::Int64, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + CUTINBINDINGDATA_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};

