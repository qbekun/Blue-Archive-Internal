#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_ANIMATIONS_RIGGING_RIGEFFECTORDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E2D540)

namespace UnityEngine::Animations::Rigging
{
	inline static constexpr unsigned int RigEffectorData_TypeDefinitionIndex = 37197;

	class RigEffectorData : public Il2CppObject
	{
	public:
		::UnityEngine::Transform* m_Transform; // 0x10
		Style* m_Style; // 0x18
		::System::Boolean m_Visible; // 0x50

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_RIGGING_RIGEFFECTORDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

