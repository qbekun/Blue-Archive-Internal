#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Camera; }

#define HITINFO_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xA292CF0)
#define HITINFO_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xA292C60)
#define HITINFO_COMPARE_OFFSET UNITYSDK_OFFSET(0xA292D20)

	inline static constexpr unsigned int HitInfo_TypeDefinitionIndex = 37748;

	class HitInfo : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::UnityEngine::Camera* camera; // 0x18

		::System::Void SendMessage(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + HITINFO_SENDMESSAGE_OFFSET))(str, nullptr);
		}

		::System::Boolean op_Implicit(HitInfo* arg)
		{
			return (return (::System::Boolean(*)(HitInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HITINFO_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean Compare(HitInfo* arg, HitInfo* arg)
		{
			return (return (::System::Boolean(*)(HitInfo*, HitInfo*, ::PVOID))((::PBYTE)hIl2Cpp + HITINFO_COMPARE_OFFSET))(arg, arg, nullptr);
		}

	};

