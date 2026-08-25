#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Animator; }

#define MXFIELD_CORE_FIELDCHARACTER_SETFLOATINGWIDGETANCHOR_OFFSET UNITYSDK_OFFSET(0xED3950)
#define MXFIELD_CORE_FIELDCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0xED3960)
#define MXFIELD_CORE_FIELDCHARACTER_GET_FLOATINGWIDGETANCHOR_OFFSET UNITYSDK_OFFSET(0xED05C0)
#define MXFIELD_CORE_FIELDCHARACTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xED3970)

namespace MXField::Core
{
	inline static constexpr unsigned int FieldCharacter_TypeDefinitionIndex = 10935;

	class FieldCharacter : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* floatingWidgetAnchor; // 0x18
		::UnityEngine::Animator* animator; // 0x20

		::System::Void SetFloatingWidgetAnchor(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCHARACTER_SETFLOATINGWIDGETANCHOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCHARACTER_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_FloatingWidgetAnchor()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCHARACTER_GET_FLOATINGWIDGETANCHOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_CORE_FIELDCHARACTER_ONENABLE_OFFSET))(nullptr);
		}

	};
}

